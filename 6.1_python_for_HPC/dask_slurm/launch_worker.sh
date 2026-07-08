#!/bin/bash
# Launch a Dask worker that connects to the scheduler whose address is stored
# in ~/.dask_scheduler.json. Run this on a compute node, typically via
# dask_workers.slrm from the login node.

set -u

SCHEDULER_FILE="$HOME/.dask_scheduler.json"

if [[ ! -f "$SCHEDULER_FILE" ]]; then
    echo "ERROR: scheduler file not found at $SCHEDULER_FILE"
    echo "       Start the scheduler first with launch_scheduler.sh"
    exit 1
fi

echo "Launching dask worker, connecting to scheduler in $SCHEDULER_FILE"
dask worker \
    --scheduler-file "$SCHEDULER_FILE" \
    --nworkers 1 \
    --nthreads 128 \
    --memory-limit 240GB \
    --name "worker-$HOSTNAME"
