### SDSC Summer Institute 2026
# Session 6.1 Python for HPC

**Date:** Friday, August 7, 2026

**Time:** 8:30 AM – 11:20 AM Pacific

**Summary**: In this session we will introduce 2 key technologies in the Python ecosystem that provide significant benefits for scientific applications run in supercomputing environments. Previous Python experience is recommended but not required.
* (1) First, we will learn how to speed up Python code compiling it on-the-fly with numba
* (2) Then we will introduce the threads, processes and the Global Interpreter lock and we will leverage first numba then dask to use all available cores on a machine
* (3) Finally we will distribute computations across multiple nodes launching dask workers on a separate Expanse job.

**Presented by:** [Andrea Zonca](https://www.sdsc.edu/research/experts/zonca_andrea.html)

### Reading and Presentations:
* **Lecture material:**
   * [Introductory Slides on Google Docs](https://docs.google.com/presentation/d/1AW0-MrupxGU7XFfcrPN2YQyqxD_yDlh2akXg7L4_x6s/edit?usp=sharing)
* **Source Code/Examples:**
   See all the files in this folder and subfolders

## Folder structure

* `launch_galyleo.sh` — launch the Jupyter environment on Expanse via [galyleo](https://github.com/mkandes/galyleo)
* `environment.yaml` — conda environment used by the notebooks
* `0_python_condaenv_scratch/` — stage a cached conda environment on the local SSD of compute nodes
* `1_python_singularity/` — build and launch a Singularity container with the Python environment
* `2_ai_code_assist/` — notes on using AI code assistants (Copilot, Gemini CLI) for Python development
* `3_threads_vs_processes/` — notebook on threads vs processes and the GIL
* `4_numba/` — notebooks on speeding up Python code with numba
* `5_dask/` — notebooks on dask graphs, delayed, multi-core and multi-node arrays
* `dask_slurm/` — slurm scripts to launch dask workers on a separate Expanse job
