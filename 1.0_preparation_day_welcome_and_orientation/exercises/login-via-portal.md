# Exercise 1: Login via the Expanse User Portal

We'll start this session by logging into the web-basedExpanse User Portal (as shown below).

- Step 1: Open link in new **private** (or **incognito**) browser window : [https://portal.expanse.sdsc.edu](https://portal.expanse.sdsc.edu).

<img src='../images/expanse-user-portal.png' width='100%' height='100%'/>

When you open the link, your browser should first be redirected to a Globus login page (as shown below). At the Globus login page, you will be asked to **Use your organizational login**. However, you should choose **ACCESS-CI (formerly XSEDE)**  as your organization, not your academic or research institution.

- Step 2: Select **ACCESS-CI (formerly XSEDE)** as your organizational login, then click *Continue*

<img src='../images/globus-login.png' width='100%' height='100%'/>

You'll next be redirected to ACCESS-CI, where you will be prompted to enter your **ACCCESS ID** and **ACCESS Password** (as shown below). This is the 1st-factor in the ACCESS-CI two-factor (2FA) authentication process.

- Step 3: Enter your **ACCESS ID (username)** and **ACCESS Password**, then click *LOGIN*

<img src='../images/access-login.png' width='100%' height='100%'/> 

If successful, you'll then be prompted with your 2nd-factor step via **Duo** (as shown below). Follow your default Duo authentication option to complete the 2FA process. If you run into issues with your default 2nd-factor option, you may try one of the *Other options* provided by Duo.

- Step 4: Complete your **Duo** authentication option.

<img src='../images/access-duo.png' width='100%' height='100%'/>

Upon a successful login, you should be presented with the *Expanse Portal* dashboard (as shown at the beginning of this exercise), which displays a number of menus along the top menu bar and displays a number of *Pinned Apps*. As your first test use case for the portal, open the **expanse Shell Access** app to start a web-based interactive login shell on one of Expanse's login nodes (as shown below)

- Step 5: Click on the **expanse Shell Access** app.

<img src='../images/expanse-portal-shell.png' width='100%' height='100%'/>

If it fails to drop you into a shell prompt on a login node, close that browser tab and navigate back to the main dashboard. Once there, select *Restart Web Server* from the *Help* drop-down menu (as shown below) before you try to access the shell app again. You might also want to try a different web browser. e.g., if you had a problem with Firefox, can you try Chrome instead?

<img src='../images/expanse-portal-restart.png' width='100%' height='100%'/>

If you're still having a problem with accessing the Expanse User Portal in any way, please take a screenshot of where you are getting stuck and drop it into the Slack channel. 
