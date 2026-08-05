#!/usr/bin/env bash
#SBATCH --job-name=pytorch-gpu-shared
#### Change account below
#SBATCH --account=XYZ123
#SBATCH --partition=gpu-shared
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=16
#SBATCH --mem=90G
#SBATCH --gpus=1
#SBATCH --time=00:30:00
#SBATCH --output=pytorch-gpu-shared.o%j.%N


declare -xr SINGUALRITY_MODULE='singularitypro/3.11'

module purge
module load "${SINGUALRITY_MODULE}"
module list
printenv

#### We will run from the scratch directory local to the node
cd /scratch/$USER/job_$SLURM_JOBID

time -p singularity exec --bind /expanse,/scratch --nv /cm/shared/apps/containers/singularity/pytorch/pytorch-latest.sif python3 $SLURM_SUBMIT_DIR/main.py

#### List scratch directory
ls /scratch/$USER/job_$SLURM_JOBID
