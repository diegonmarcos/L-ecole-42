#!/bin/bash

# -=-=-=-=- CLRS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

DEF_COLOR='\033[0;39m'
BLACK='\033[0;30m'
RED='\033[1;91m'
GREEN='\033[1;92m'
YELLOW='\033[0;93m'
BLUE='\033[0;94m'
MAGENTA='\033[0;95m'
CYAN='\033[0;96m'
GRAY='\033[0;90m'
WHITE='\033[0;97m'

printf ${BLUE}"\n-------------------------------------------------------------\n"${DEF_COLOR};
printf ${YELLOW}"\n\t\tTEST CREATED BY: "${DEF_COLOR};
printf ${CYAN}"GEMARTIN\t\n"${DEF_COLOR};
printf ${BLUE}"\n-------------------------------------------------------------\n"${DEF_COLOR};

# -=-=-=-=- Control errors -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

USER=$(whoami)

if [ $USER != "root" ];then
  printf "${RED}You must be in the root user to run the test.${DEF_COLOR}\n";
  exit;
fi

RES=$(ls /usr/bin/*session)
printf "${MAGENTA}Graphical enviroment${DEF_COLOR}\n";
  if [[ $RES == "/usr/bin/dbus-run-session" ]]; then
    echo "RES (expected): /usr/bin/dbus-run-session"  # Echo for RES
    echo "TEST: $RES"  # Echo for TEST
    printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
    echo "RES (expected): /usr/bin/dbus-run-session"  # Echo for RES
    echo "TEST: $RES"  # Echo for TEST
    printf "${RED}[KO] ${DEF_COLOR}\n";
fi

echo
printf "${MAGENTA}Disk partitions${DEF_COLOR}\n";
RES=$(lsblk | grep lvm | wc -l)
if [ $RES -gt 1 ];then
  echo "RES (expected): -gt 1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
  printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

RES=$(lsblk | grep home | wc -l)
if [ $RES -gt 0 ];then
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

RES=$(lsblk | grep swap | wc -l)
if [ $RES -gt 0 ];then
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

RES=$(lsblk | grep root | wc -l)
if [ $RES -gt 0 ];then
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

echo
RES=$(sudo service ssh status | awk '$1 == "Active:"' | grep running | wc -l)
printf "${MAGENTA}SSH${DEF_COLOR}\n";
if [ $RES -gt 0 ];then
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

RES=$(which lsof | wc -l)
if [ $RES -eq 0 ];then
  sudo apt-get update -qq -y > /dev/null 2>&1
  sudo apt-get install -qq -y lsof > /dev/null 2>&1
fi

RES=$(sudo lsof -i -P -n | grep sshd | grep LISTEN | grep 4242 | wc -l)
if [ $RES -gt 1 ];then
  echo "RES (expected): -gt 1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

echo
printf "${MAGENTA}UFW${DEF_COLOR}\n";
RES=$(sudo ufw status | grep -v ALLOW | grep active | wc -l)
if [ $RES -gt 0 ];then
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 0"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

RES=$(sudo ufw status | grep 4242 | wc -l)
if [ $RES -gt 1 ];then
  echo "RES (expected): -gt 1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): -gt 1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

echo
printf "${MAGENTA}Hostname${DEF_COLOR}\n";
RES=$(who | head -1 | cut -d ' ' -f1)
CONCAT="42"
RES="$RES$CONCAT"
RES2=$(hostname)
if [ $RES == $RES2 ];then
  echo "RES (expected): $RES"  # Echo for RES
  echo "TEST: $RES2"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): $RES"  # Echo for RES
  echo "TEST: $RES2"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi

echo
printf "${MAGENTA}Password policy${DEF_COLOR}\n";
RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o minlen=10)
if [ $RES == "minlen=10" ];then
  echo "RES (expected): minlen=10"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}1.[OK] ${GRAY} minlen ${DEF_COLOR}\n";
  else
  echo "RES (expected): minlen=10"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}1.[KO] ${GRAY} minlen ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o ucredit=-1)
if [ $RES == "ucredit=-1" ];then
  echo "RES (expected): ucredit=-1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}2.[OK] ${GRAY} uppercase ${DEF_COLOR}\n";
  else
  echo "RES (expected): ucredit=-1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}2.[KO] ${GRAY} uppercase ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o lcredit=-1)
if [ $RES == "lcredit=-1" ];then
  echo "RES (expected): lcredit=-1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}3.[OK] ${GRAY} lowercase ${DEF_COLOR}\n";
  else
  echo "RES (expected): lcredit=-1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}3.[KO] ${GRAY} lowercase ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o dcredit=-1)
if [ $RES == "dcredit=-1" ];then
  echo "RES (expected): dcredit=-1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}4.[OK] ${GRAY} digit ${DEF_COLOR}\n";
  else
  echo "RES (expected): dcredit=-1"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}4.[KO] ${GRAY} digit ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o maxrepeat=3)
if [ $RES == "maxrepeat=3" ];then
  echo "RES (expected): maxrepeat=3"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}5.[OK] ${GRAY} consecutive char ${DEF_COLOR}\n";
  else
  echo "RES (expected): maxrepeat=3"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}5.[KO] ${GRAY} consecutive char ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o difok=7)
if [ $RES == "difok=7" ];then
  echo "RES (expected): difok=7"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}6.[OK] ${GRAY} difok ${DEF_COLOR}\n";
  else
  echo "RES (expected): difok=7"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}6.[KO] ${GRAY} difok ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o enforce_for_root)
if [ $RES == "enforce_for_root" ];then
  echo "RES (expected): enforce_for_root"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}7.[OK] ${GRAY} enforce for root ${DEF_COLOR}\n";
  else
  echo "RES (expected): enforce_for_root"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}7.[KO] ${GRAY} enforce for root ${DEF_COLOR}\n";
fi

RES=$(cd ~ && cat /etc/pam.d/common-password | grep -o reject_username)
if [ $RES == "reject_username" ];then
  echo "RES (expected): reject_username"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}8.[OK] ${GRAY} reject username ${DEF_COLOR}\n";
  else
  echo "RES (expected): reject_username"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}8.[KO] ${GRAY} reject username ${DEF_COLOR}\n";
fi

RES=$(cd && cat /etc/login.defs | grep PASS_MAX_DAYS | grep -o 30)
if [ $RES == "30" ];then
  echo "RES (expected): 30"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}9.[OK] ${GRAY} passwd expire days ${DEF_COLOR}\n";
  else
  echo "RES (expected): 30"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}9.[KO] ${GRAY} passwd expire days ${DEF_COLOR}\n";
fi

RES=$(cd && cat /etc/login.defs | grep PASS_MIN_DAYS | grep -o 2)
if [ $RES == "2" ];then
  echo "RES (expected): 2"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}10.[OK] ${GRAY} days allowed before the modification ${DEF_COLOR}\n";
  else
  echo "RES (expected): 2"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}10.[KO] ${GRAY} days allowed before the modification ${DEF_COLOR}\n";
fi

RES=$(cd && cat /etc/login.defs | grep PASS_WARN_AGE | grep -o 7)
if [ $RES == "7" ];then
  echo "RES (expected): 7"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}11.[OK] ${GRAY} warning message ${DEF_COLOR}\n";
  else
  echo "RES (expected): 7"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}11.[KO] ${GRAY} warning message ${DEF_COLOR}\n";
fi

if [ -d "/var/log/sudo/" ];then
  echo "RES (expected): directory /var/log/sudo/ exists"  # Echo for RES
  echo "TEST: directory /var/log/sudo/ exists"  # Echo for TEST
        printf "${GREEN}12.[OK] ${GRAY} folder /var/log/sudo exist ${DEF_COLOR}\n";
  else
  echo "RES (expected): directory /var/log/sudo/ exists"  # Echo for RES
  echo "TEST: directory /var/log/sudo/ does not exist"  # Echo for TEST
        printf "${RED}12.[KO] ${GRAY} folder /var/log/sudo exist ${DEF_COLOR}\n";
fi

echo
printf "${MAGENTA}Crontab${DEF_COLOR}\n";
RES=$(crontab -l | grep monitoring.sh | awk '$1 == "*/10" {print $1}')
if [ $RES == "*/10" ];then
  echo "RES (expected): */10"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${GREEN}[OK] ${DEF_COLOR}\n";
  else
  echo "RES (expected): */10"  # Echo for RES
  echo "TEST: $RES"  # Echo for TEST
        printf "${RED}[KO] ${DEF_COLOR}\n";
fi
echo
