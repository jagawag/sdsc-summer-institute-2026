# Exercise 5: Test your new command aliases

*Command*
```
srun-compute
```

*Output*
```
[mkandes@login01 ~]$ srun-compute 
[mkandes@exp-6-05 ~]$ squeue --me
             JOBID PARTITION     NAME     USER ST       TIME  NODES NODELIST(REASON)
          50937645   compute     bash  mkandes  R       0:08      1 exp-6-05
[mkandes@exp-6-05 ~]$
```

*Command*
```
srun-nairr-gpu-shared
```

*Output*
```
[mkandes@login01 ~]$ srun-nairr-gpu-shared 
srun: Requested partition configuration not available now
srun: job 50938039 queued and waiting for resources
```

*Output*
```
[mkandes@login01 ~]$ squeue --me
             JOBID PARTITION     NAME     USER ST       TIME  NODES NODELIST(REASON)
          50938039 nairr-gpu     bash  mkandes PD       0:00      1 (Job's QOS not permitted to use this partition (nairr-gpu-shared allows nairr-gpu-shared-normal not nairr-gpu-shared-eot))
[mkandes@login01 ~]$
```

*Command*
```
jupyter-shared-spark
```

*Output*
```
[mkandes@login01 ~]$ jupyter-shared-spark
ERROR :: Command-line option --qos=normal-eot not recognized or not supported.
ERROR :: galyleo_launch command failed.
[mkandes@login01 ~]$ jupyter-compute-pytorch
ERROR :: Command-line option --qos=normal-eot not recognized or not supported.
ERROR :: galyleo_launch command failed.
[mkandes@login01 ~]$
```
