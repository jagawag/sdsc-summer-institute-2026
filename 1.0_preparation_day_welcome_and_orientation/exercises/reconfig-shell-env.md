# Exercise 6: Reconfigure your SHELL environment

Navigate to the Session 1.2. material in the repo on Expanse. 

*Command*
```
cd ~/sdsc-summer-institute-2026/1.2_accounts_login_environment_expanse_portal/
```

*Output*
```
[mkandes@login01 ~]$ cd ~/sdsc-summer-institute-2026/1.2_accounts_login_environment_expanse_portal/
[mkandes@login02 1.2_accounts_login_environment_expanse_portal]$ ls -lahtr
total 149K
-rw-r--r--  1 mkandes use300  141 Jun 22 16:00 .bash_profile
-rw-r--r--  1 mkandes use300 2.5K Jun 22 16:00 README.md
drwxr-xr-x  2 mkandes use300   11 Jun 22 16:00 exercises
drwxr-xr-x  2 mkandes use300   14 Jun 22 16:00 images
drwxr-xr-x 23 mkandes use300   27 Jun 22 16:00 ..
-rw-r--r--  1 mkandes use300 2.9K Jun 22 16:12 .bashrc
drwxr-xr-x  4 mkandes use300    7 Jun 22 16:13 .
[mkandes@login02 1.2_accounts_login_environment_expanse_portal]$
```

Make a back up of your own `~/.bashrc` and `~/.bash_profile` files.

*Command*
```
mv ~/.bashrc ~/.bashrc.bak
```

*Command*
```
mv ~/.bash_profile ~/.bash_profile.bak
```

Once you have a backup of you `~/.bashrc` and `~/.bash_profile` files, cp the ones provided here into your HOME directory.

*Command*
```
cp .bashrc ~/.bashrc
```

*Command*
```
cp .bash_profile ~/.bash_profile
```

Now log out then back in to reconfigure your shell environment. 

*Output*
```
[mkandes@login01 1.2_accounts_login_environment_expanse_portal]$ exit
logout
Connection to login.expanse.sdsc.edu closed.
mkandes@hardtack:~$ ssh mkandes@login.expanse.sdsc.edu
(mkandes@login.expanse.sdsc.edu) TOTP code for mkandes: 291893
(mkandes@login.expanse.sdsc.edu) TOTP code for mkandes: 294893
Welcome to Bright release         9.0

                                                         Based on Rocky Linux 8
                                                                    ID: #000002

--------------------------------------------------------------------------------

                                 WELCOME TO
                  _______  __ ____  ___    _   _______ ______
                 / ____/ |/ // __ \/   |  / | / / ___// ____/
                / __/  |   // /_/ / /| | /  |/ /\__ \/ __/
               / /___ /   |/ ____/ ___ |/ /|  /___/ / /___
              /_____//_/|_/_/   /_/  |_/_/ |_//____/_____/

--------------------------------------------------------------------------------

Use the following commands to adjust your environment:

'module avail'            - show available modules
'module add <module>'     - adds a module to your environment for this session
'module initadd <module>' - configure module to be loaded at every login

-------------------------------------------------------------------------------
Last login: Tue Jun 16 09:44:54 2026 from 216.15.51.171
[mkandes@login01 ~]$
```

Once logged back in, check if you have the new environment available.

*Command*
```
echo $SI26_DATA_DIR
```

*Output*
```
[mkandes@login01 ~]$ echo $SI26_DATA_DIR
/cm/shared/examples/sdsc/sdsc/2026
[mkandes@login01 ~]$
```
