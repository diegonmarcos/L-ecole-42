#!/bin/bash

# Define color codes for terminal output
WHITE='\033[0;37m' 
BLUE='\033[0;36m'
GREEN='\033[0;32m'
RED='\033[0;31m'
BWhite='\033[1;37m' 
NC='\033[0m' # No Color

# Define directories
INSTALL_DIR="$HOME/sgoinfre/francinette-image"
TMP_DIR="$HOME/sgoinfre/.tmp_francinette"

# Exit on error
set -e

# Create the installation directory if it doesn't exist
if [ ! -d "$INSTALL_DIR" ]; then
    git clone https://github.com/mgrl39/francinette-sgoinfre.git $INSTALL_DIR
fi

# Make sure the run.sh script is executable
chmod +x $INSTALL_DIR/run.sh

# Build and save the Docker image if francinette.tar is not present
if [ ! -f "$INSTALL_DIR/francinette.tar" ]; then
    docker build -t francinette-image $INSTALL_DIR
    docker image save francinette-image > $INSTALL_DIR/francinette.tar
fi

# Load the Docker image if francinette.tar is present
if [ -f "$INSTALL_DIR/francinette.tar" ]; then
    docker load < $INSTALL_DIR/francinette.tar
fi

# Source the install script for zshrc
source $INSTALL_DIR/utils/install_zshrc.sh

# Print completion message and restart the shell
echo -e "${BLUE}[Francinette] ${GREEN}Installation completed!\n${WHITE}Use the ${BWhite}paco${WHITE} or ${BWhite}francinette${WHITE} commands in your project folder."

exec "$SHELL"
