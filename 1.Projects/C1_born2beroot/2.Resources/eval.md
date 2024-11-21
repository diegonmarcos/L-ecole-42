# Mandatory Part

## Preliminary Tests

**Verify the following points:**

- The conditions for access to the defense are met: the evaluated person(s) is present, the submission is non-empty and truly belongs to them, etc...
- For this project, you must clone the Git repository on the computer of the person being evaluated.

**[ ] Yes [ ] No**

## General Guidelines

The project involves creating and configuring a virtual machine following strict rules. The evaluated person will need to assist you during the defense. Make sure all the following points are respected.

- During the defense, as soon as you need help to verify a point, the evaluated person must assist you.
- Check that the "signature.txt" file is present at the root of the cloned repository.
- Ensure that the signature contained in "signature.txt" matches that of the ".vdi" file of the virtual machine being evaluated. A simple diff should allow you to compare the two signatures. If needed, ask the evaluated person where their ".vdi" file is located.
- As a precaution, you may duplicate the original virtual machine to keep a copy.
- Launch the virtual machine to be evaluated.
- If something does not work as expected or the two signatures differ, the evaluation stops here.

**[ ] Yes [ ] No**

## Project Overview

The evaluated person must simply explain:

- The basic functioning of their virtual machine
- Their choice of operating system
- The basic differences between Rocky and Debian
- The benefits of virtual machines
- If the chosen operating system is Rocky, they must explain what SELinux and DNF are.
- If the chosen operating system is Debian, they must explain the difference between aptitude and apt, and what APPArmor is. During the defense, a script must display information every 10 minutes. Its operation will be checked in detail later. 

If the explanations are not clear, the evaluation stops here.

**[ ] Yes [ ] No**

## Simple Configuration

**Reminder:** as soon as you need help to verify a point, the evaluated person must be able to assist you.

- Verify that the machine does not have a graphical environment at startup. 
- A password will be requested before any connection attempt on this machine. Log in with a non-root user. 
- Verify that the chosen password respects the rules imposed in the subject. 
- Then, with the help of the evaluator, make sure that:
    - The chosen operating system is indeed Debian or Rocky
    - The UFW service is properly launched
    - The SSH service is properly launched. 

If something does not work as expected or is not clearly explained, the evaluation stops here.

**[ ] Yes [ ] No**

## User

**Reminder:** as soon as you need help to check a point, the evaluated person must be able to assist you. 

- The subject requires that a user with the login name of the evaluated person be present on the virtual machine. Verify that this user has been added and that they belong to the "sudo" and "user42" groups. 
- Ensure the rules imposed in the subject concerning the password policy have been implemented by following the steps below. 
    - First, create a new user. Assign them a password of your choice, respecting the subject's rules. 
    - The evaluated person must now explain how they were able to implement the requested rules on their virtual machine. Normally, one or two files would have been modified. 
- If there is any problem, the evaluation stops here.
- Now that you have a new user, ask the evaluated person to create a group named "evaluating" in front of you and assign it to this user.
- Finally, check that this user indeed belongs to the "evaluating" group.
- To finish, ask the evaluated person to explain the purpose of this password policy, as well as the advantages and disadvantages of its implementation. Of course, answering that it is because the subject requires it does not count.

If something does not work as expected or is not clearly explained, the evaluation stops here.

**[ ] Yes [ ] No**

## Hostname and Partitions

**Reminder:** as soon as you need help to check a point, the evaluated person must be able to assist you.

- Verify that the hostname of the machine is formatted as follows: login42 (login of the evaluated person).
- Change this hostname by replacing the login with yours, then restart the machine. If upon restarting, the hostname has not been updated, the evaluation stops here.
- You can now restore the original hostname of the machine.
- Ask the evaluated person how to display the partitions of their virtual machine.
- Compare the output with the example given in the subject. Note: if the evaluated person has done the bonuses, you should refer to the example from the bonus part.
- This part is an opportunity to discuss partitions! The evaluated person must give you a brief explanation of how LVM works and why it's beneficial.

If something does not work as expected or is not clearly explained, the evaluation stops here.

**[ ] Yes [ ] No**

## SUDO

**Reminder:** as soon as you need help to check a point, the evaluated person must be able to assist you.

- Verify that the "sudo" program is indeed installed on the virtual machine.
- The evaluated person must now show how to assign your new user to the "sudo" group.
- The subject imposes strict rules for sudo. The evaluated person must first explain the purpose and operation of sudo with examples of their choice. Then, they must demonstrate the implementation of the rules imposed by the subject.
- Verify that the "/var/log/sudo/" directory exists and contains at least one file. Check the contents of the files in this directory; you should see a history of commands used with sudo. 
- Finally, attempt to run a command via sudo. Check if the file(s) in the "/var/log/sudo/" directory have been updated. 

If something does not work as expected or is not clearly explained, the evaluation stops here.

**[ ] Yes [ ] No**

## UFW / Firewall

**Reminder:** as soon as you need help to check a point, the evaluated person must be able to assist you.

- Verify that the "UFW" (or "Firewalld" for rocky) program is indeed installed on the virtual machine.
- Verify that it is functioning correctly.
- The evaluated person must give you a basic explanation of what UFW (or "Firewalld") is and why it's important to use it.
- List the active rules in UFW (or "Firewalld"). There should be a rule for port 4242.
- Add a new rule to open port 8080. Verify that it has been added by listing the active rules.
- Finally, with the help of the evaluated person, delete this new rule. 

If something does not work as expected or is not clearly explained, the evaluation stops here.

**[ ] Yes [ ] No**

## SSH

**Reminder:** as soon as you need help to check a point, the evaluated person must be able to assist you.

- Verify that the SSH service is indeed installed on the virtual machine.
- Verify that it is functioning correctly.
- The evaluated person must give you a basic explanation of what SSH is and why it's important to use it.
- Verify that the SSH service uses only port 4242.
- The evaluated person must help you use SSH to connect with the new user created. For this, you can use a key or a simple password, depending on the evaluated person. 
- Of course, you must ensure that SSH cannot be used with the "root" user as indicated in the subject. 

If something does not work as expected or is not clearly explained, the evaluation stops here.

**[ ] Yes [ ] No**

## Script Monitoring

**Reminder:** as soon as you need help to check a point, the evaluated person must be able to assist you. 

The evaluated person must simply explain:

- The operation of their script by displaying its code
- What "cron" is
- How they have set up their script to execute every 10 minutes from server launch. 

- Once the proper functioning of the script is verified, the evaluated person must make sure that this script executes every minute. You can launch whatever you wish to ensure that the script runs correctly with dynamic values. 
- Finally, the evaluated person must ensure that the script no longer runs at server launch, without modifying the script itself. To verify this point, the server will need to be restarted one last time. At startup, it must be verified that the script still exists in the same place, that its permissions have remained unchanged, and that it has not been modified. 

If any of the above points are not correct, the evaluation stops here.

**[ ] Yes [ ] No**