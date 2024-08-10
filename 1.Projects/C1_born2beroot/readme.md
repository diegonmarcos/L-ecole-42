<h1 align="center"> # 42 Common Core Curriculum / Circle 1 / #Born2beRoot </h1>
<p align="center"><img src="https://github.com/diegonmarcos/L-ecole-42/blob/main/zimg/born2broot.png" alt="" width="600"></p>

> 
<p align="center">
	<a href="#1.RESOURCES">1.RESOURCES</a> •
	<a href="#REFERENCE">REFERENCE</a> •
	<a href="#RESOURCES">RESOURCES</a> •
	<a href="#BACKLOG%%DESIGNING">BACKLOG DESIGNING</a> •
	<a href="#3.CODE">3.CODE</a> •
	<a href="#4.TESTER">4.TESTER"</a> •
  <a href="#5.DOCUMENTATION">5.DOCUMENTATION</a> •
  <a href="#6.EXAM">6.EXAM</a> •
</p>
<br>

<br>

<br>

<br>

<br>

<br>

# 1.RESOURCES
- ## INSTRUCTIONS
> Configurate a .iso with preset configurates estipulated by the Instructions file  

`42 - Subject`

- ## REFERENCE
  - GitHubs
    - https://github.com/pasqualerossi/Born2BeRoot-Guide
    - https://github.com/gemartin99/Born2beroot-Tutorial 
  - Commands
    - Get yoor IP ```ip -c a```
    - Check SSH server is listening ```sudo service ssh status```
    - Connect from cliente ```ssh user_name@ip_addres -p port```
  - Virtual Machine
  - ### Evaluation Commands for UFW, Group, Host, lsblk and SSH
	- `sudo ufw status`
	- `sudo systemctl status ssh`
	- `getent group sudo`
	- `getent group user42`
	- `sudo adduser new username`
	- `sudo groupadd groupname`
	- `sudo usermod -aG groupname username`
	- `sudo chage -l username` - check password expire rules
	- `hostnamectl`
	- `hostnamectl set-hostname new_hostname` - to change the current hostname
	- Restart your Virtual Machine.
	- `sudo nano /etc/hosts` - change current hostname to new hostname
	- `lsblk` to display the partitions
	- `dpkg -l | grep sudo –` to show that sudo is installed
	- `sudo ufw status numbered`
	- `sudo ufw allow port-id`
	- `sudo ufw delete rule number`
	- `ssh your_user_id@127.0.0.1 -p 4242` -  do this in terminal to show that SSH to port 4242 is working
  - OS Configuration 

- ## RESOURCES
  - Virtual Box
  - iso OS

# 2.BACKLOG DESIGNING
  - Ok

# 3.CODE
 - Source Code Folder
 ### Passwords
 - Disk Encryption Pass:   ```Hello42bcn```
 - Root Pass:   ```Hola42bcn```
 - Username: ```dnepomuc```
 - Password: ```Hola42spain```

# 4.TESTER
 - Source Code Folder

# 5.DOCUMENTATION
 - Explain1
 - Explain2
 
# 6.EXAM
 - Question1
 - Answer1
