#!/bin/bash

if [ $# -eq 0 ]; then  # Check if no arguments are provided
  echo "Usage: $0 [-x] [-r]"
  echo "  -x: Extract files from tar"
  echo "  -r: Delete files"
  exit 1
fi

while getopts "xr" opt; do
  case $opt in
    x)
      tar -xvf libft-tester.tar
      tar -xvf libft-war-machine.tar
      tar -xvf libft-unit-test.tar.gz
      tar -xvf Francinette.tar
      ;;
    r)
      rm -rf libft-tester
      rm -rf libft-war-machine
      rm -rf libft-unit-test
      rm -rf Francinette
      ;;
    *)
      echo "Invalid option: -$OPTARG" >&2
	  echo "Usage: $0 [-x] [-r]"
      echo "  -x: Extract files from tar"
      echo "  -r: Delete files"
      exit 1
      ;;
  esac
done