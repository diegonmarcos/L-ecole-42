#!/bin/bash
: '
  -x: Extract files from tar
  -r: delete files
'
while getopts ":xr" opt || [ "$opt" = "?" ]; do
  case $opt in
    x)
      tar -xvf libft-tester.tar.gz
      tar -xvf libft-war-machine.tar
      tar -xvf libft-unit-test.tar
      tar -xvf Francinette.tar
      ;;
    r)
      rm -rf libft-tests
      rm -rf libft-war-machine
      rm -rf libft-unit-test
      rm -rf Francine
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
	  echo "Usage: $0 [-x] [-r]"
      echo "  -x: Extract files from tar"
      echo "  -r: Delete files"
      exit 1
      ;;
  esac
done