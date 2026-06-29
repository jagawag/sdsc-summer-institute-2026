# Exercise 3: Check your allocation access

Next, let's verify you are listed on the SI26 allocation (**gue998**) for next week.

*Command*
```
expanse-client user -p
```

*Output*
```
[mkandes@login01 ~]$ expanse-client user -p

 Resource  expanse 

 NAME     STATE  PROJECT  TG PROJECT         USED  AVAILABLE  USED BY PROJECT 
------------------------------------------------------------------------------
 mkandes  allow  csd403   TG-IBN140002          0   24000000         16700286 
 mkandes  allow  sdp157   TG-TRA260010          5       1000            15453 
 mkandes  allow  sdp173   TG-CIS261077          0      89546               14 
 mkandes  allow  sds166   TG-STA160003          0      47919            36684 
 mkandes  allow  sds173   TG-CCR190013          0      50000              296 
 mkandes  allow  sds184   TG-TRA210003          0       5000              287 
 mkandes  allow  sds196   TG-TRA230015          0     132297            89511 
 mkandes  allow  sds280   TG-NAIRR260138        0       1000             2205 
 mkandes  allow  use300                   2729345    5050000          4688140 
[mkandes@login01 ~]$
```

If you are not listed on the **sds280** allocation, please let us know in the Slack channel.
