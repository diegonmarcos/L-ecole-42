#!/bin/bash

if [ $# -eq 0 ]; then  # Check if no arguments are provided
  echo "Usage: $0 [-x] [-r]"
  echo "  -c: Copy from src files and Overwrite in test files"
  echo "  -x: Extract Testers tar files"
  echo "  -1: Run libft-war-machine "
  echo "  -2: Run libft-tester"
  echo "  -3: Run libft-unit-test"
  echo "  -4: Run Francinette"
  echo "  -r: Delete Tester folders"
  exit 1
fi

while getopts "c1234xr" opt; do
  case $opt in
    c)
    rm -rf 0_libft
    mkdir 0_libft	
    cp ../3.Code/src/* 0_libft/
      ;;
    x)
      tar -xvf libft-tester.tar
      tar -xvf libft-war-machine.tar
      tar -xvf libft-unit-test.tar.gz
      tar -xvf Francinette.tar
      ;;	
	1)
	  bash libft-war-machine/grademe.sh
	  make -C 0_libft fclean
	  ;;
	2)
	  make -C libft-tester
	  make -C 0_libft fclean
	  ;;
	3)
	  make -C libft-unit-test fclean
	  make -C libft-unit-test
	  make -C libft-unit-test f
	  make -C 0_libft fclean
	  ;;
	4)
	  bash ../Francinette/tester.sh
	  make -C 0_libft fclean
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

: '
# ---TESTERS---

# Run the following commands before extracting the files
bash unzip.sh -x

# Run the following commands after extracting the files
bash libft-war-machine/grademe.sh
make -C libft-tester
make -C libft-unit-test fclean
make -C libft-unit-test
make -C libft-unit-test f
bash ../Francinette/tester.sh
make -C 0_libft fclean

# Run the following commands for deleting the folders
bash unzip.sh -r
'
