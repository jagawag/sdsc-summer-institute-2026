# Exercise 2: Login via SSH

Next we'll test your direct SSH access to Expanse. Here, please use your preferred SSH client to login. 

*Command*
```
ssh mkandes@login.expanse.sdsc.edu
```

*Output*
```
mkandes@hardtack:~$ ssh mkandes@login.expanse.sdsc.edu
(mkandes@login.expanse.sdsc.edu) Password:
(mkandes@login.expanse.sdsc.edu) TOTP code for mkandes: 201505
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
Last login: Tue Jun 16 09:37:51 2026 from 132.249.233.139
[mkandes@login01 ~]$
```

In general, your local SDSC username on Expanse will be the same as your **ACCESS ID (username)**. There are some cases where this may not be true. e.g., if your ACCESS ID already belonged to another user in the local SDSC account database when the account was created. However, your password will *always* be your **ACCESS Password**.

If you cannot login via SSH to Expanse, please try to register (again) for SDSC's 2FA process. See the [Expanse User Guide](https://www.sdsc.edu/systems/expanse/user_guide.html#narrow-wysiwyg-2) for details. And don't forget to wait at least 15 minutes for the 2FA registration to activate on Expanse before you attempt your next login. 

If you continue to have SSH access issues, please let us know in the Slack channel. 
