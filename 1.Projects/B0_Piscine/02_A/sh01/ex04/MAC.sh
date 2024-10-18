#!/bin/bash
ifconfig | grep -w ether | awk '{print $2}'| tr ' ' '\n'

