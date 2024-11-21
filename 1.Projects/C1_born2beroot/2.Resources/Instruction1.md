<p align="center">
  <img src="https://github.com/dnepomuc/dnepomuc/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_born2beroot.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-21%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/dnepomuc/born2beroot?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/dnepomuc/born2beroot?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/dnepomuc' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#license">License</a>
</p>

## ABOUT
This system administration project focuses on setting up a secure virtual machine. It covers key topics such as virtualization, partitioning, LVM, command-line tools, SSH, and system security measures like sudo, firewalls, and password policies. The project repository includes a script for automated tasks and the virtual machine signature.

- [Subject](https://github.com/dnepomuc/born2beroot/blob/master/subject/en_subject_born2beroot.pdf) `PDF`
- [References](https://github.com/dnepomuc/42-resources#01-born2beroot) `GitHub`

## Test
### Commands
#### Checks
Os Runing  
`head -n 2 /etc/os-release`  
Doors Connection  
`ss -tunlp`  
Firewal rules  
`sudo /usr/sbin/ufw status`  
#### Do
Create a User and add to a group  
`sudo adduser newuser2` 
`sudo addgroup user42`  

## MANDATORY
> During the evaluation, I was asked questions about the topics below;
- [x] Choose between two Linux-based operating systems: `Rocky` or `Debian`;
- [x] Create at least 2 encrypted partitions using `LVM`;
- [x] Ensure `SSH services` are running on specific ports;
- [x] Configure a `UFW firewall` and leave only port `4242` open;
- [x] Set up the `hostname` (will be changed during evaluation) and a strong `password policy` for all users;
- [x] Set up a strong `sudo` configuration;
- [x] Create a `monitoring script` that displays specific information every 10 minutes at server startup;

## BONUS
> During the evaluation, also had to justify my choices;
- [x] Set up a different partition structure;
- [x] Set up a functional `WordPress` website with the following services: `lighttpd`, `MariaDB` and `PHP`;
- [x] Set up a service of my own choice that I think is useful (justify that choice);


**Born2BeRoot:**

* **Shell Commands (Bash):**
    * `sudo`: Execute commands with elevated privileges.
    * `apt-get`: Package management for Debian-based systems.
    * `useradd`, `usermod`: Manage user accounts.
    * `ssh-keygen`: Generate SSH keys.
    * `ufw`: Uncomplicated Firewall (for basic firewall configuration).
* **Networking Commands:**
    * `ping`, `traceroute`: Network troubleshooting tools.
    * `netstat`: Display network connections and statistics.
    * `ifconfig`: Configure network interfaces.


**General C Syntax:**

* **Pointers:** Understanding how to use pointers is crucial for all these projects.
* **Data Types:** Working with different data types (int, char, char*, etc.).
* **Conditional Statements (if, else):** Used for decision-making and branching.
* **Loops (while, for):** Used for repeated actions.
* **Functions:** Defining and calling functions to organize your code.
* **Structures:** For organizing data (more relevant in later circles).
* **Bitwise Operators:** Useful for working with flags and permissions in some cases.
