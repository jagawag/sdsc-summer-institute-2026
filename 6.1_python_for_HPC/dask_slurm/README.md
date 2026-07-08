# Dask workers on Expanse

This directory launches a **Dask distributed cluster** that spans multiple Expanse
compute nodes. The notebook `5_dask/4_multinode_distributed_array.ipynb` connects
to the cluster built here.

The cluster has two parts:

1. A **scheduler** running on the same node as your Jupyter notebook.
2. A **worker job** (this directory's `dask_workers.slrm`) running on one or more
   *other* compute nodes, connecting back to the scheduler.

## 0. Edit the worker script for your allocation

Open `dask_workers.slrm` and set the SLURM directives to your allocation. The SI26
values below are placeholders — replace them with your own `--account` and
`--reservation` if you are running outside the institute:

```bash
#SBATCH --account=gue998        # SI26 training allocation
#SBATCH --reservation=si26cpu   # SI26 CPU reservation
```

## 1. Start the scheduler (on the notebook node)

Open a terminal *inside JupyterLab* (so it runs on the same node as the notebook)
and run:

```bash
bash dask_slurm/launch_scheduler.sh
```

Leave that terminal open — the scheduler runs in the foreground and prints a line
each time a worker connects. The scheduler writes its address to
`~/.dask_scheduler.json`, which the worker job reads to find it.

## 2. Submit the worker job (from the login node)

The Singularity container does not include SLURM commands, so submit the worker
job from a terminal on the Expanse **login node**:

```bash
sbatch dask_slurm/dask_workers.slrm
```

Within a minute or two you should see the workers from the worker nodes connect
in the scheduler terminal.

## 3. Connect from the notebook

Back in `5_dask/4_multinode_distributed_array.ipynb`, the first code cell connects
to the scheduler and waits for at least one worker. Once `client` is set, every
`.compute()` ships the task graph to the distributed workers.

## Teardown

When you are done, `Ctrl-C` the scheduler in its terminal and `scancel` the worker
job from the login node:

```bash
scancel <job_id_from_sbatch>
```
