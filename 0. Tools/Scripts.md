# Git Push
```sh
#!/bin/bash 

# Get the username from the user 

read -p "Enter username: " user_name 

# Get the groups the user belongs to and sort them 

id -Gn "$user_name" | tr ' ' ',' 

#!/bin/bash 

# Get the message and Root Folder 

#read –p "root folder" f_older 

read -p "Enter message " m_essage 

Git add . 

Git commit –m "update" 

Git push
```


# Linux Package Customization  
[Link](https://gist.github.com/San-tito/f4e0238e1c629a7885d51c9ddca5865e)
```
#!/bin/bash
##########################################################
# Santito 42 config install script                       #
# This script configures GNOME settings and installs     #
# essential tools for the 42 network environment.        #
##########################################################

# Define colors for pretty prints
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

print_message() {
  echo -e "${GREEN}>> $1${NC}"
}

error_message() {
  echo -e "${RED}>> $1${NC}"
}

prompt_user() {
  read -p "$1 [y/n] " -n 1 -r
  echo
  if [[ $REPLY =~ ^[Yy]$ ]]
  then
    return 0
  else
    return 1
  fi
}

prompt_choice() {
  read -p "$1 [y/n/A/N/r] " -n 1 -r
  echo
  echo $REPLY
}

##########################################################
# DISPLAY CONFIGURATION
##########################################################
print_message "Configuring display settings..."

# Set display scale
# gsettings set org.gnome.desktop.interface scaling-factor 2
# dconf write /org/gnome/desktop/interface/scaling-factor "uint32 2"

# Disable automatic brightness
gsettings set org.gnome.settings-daemon.plugins.power ambient-enabled false >/dev/null 2>&1

# Disable automatic screen lock
gsettings set org.gnome.desktop.screensaver lock-enabled false >/dev/null 2>&1

# Set screen blank delay to 60 seconds
gsettings set org.gnome.desktop.session idle-delay 60 >/dev/null 2>&1

# Disable hot corners
gsettings set org.gnome.desktop.interface enable-hot-corners false >/dev/null 2>&1

# Apply dark theme
gsettings set org.gnome.desktop.interface gtk-theme "Adwaita-dark" >/dev/null 2>&1

##########################################################
# FILES APP CONFIGURATION
##########################################################
print_message "Configuring Files app settings..."

# Set default view to list
gsettings set org.gnome.nautilus.preferences default-folder-viewer list-view >/dev/null 2>&1

# Limit list view columns
gsettings set org.gnome.nautilus.list-view default-visible-columns "['name', 'size', 'date_modified']" >/dev/null 2>&1

# Enable tree view
gsettings set org.gnome.nautilus.list-view use-tree-view true >/dev/null 2>&1

##########################################################
# MOUSE CONFIGURATION
##########################################################
print_message "Configuring mouse settings..."

# Set mouse scroll direction
gsettings set org.gnome.desktop.peripherals.mouse natural-scroll false >/dev/null 2>&1

# Set mouse pointer speed
gsettings set org.gnome.desktop.peripherals.mouse speed 0 >/dev/null 2>&1

##########################################################
# KEYBOARD SHORTCUTS
##########################################################
print_message "Configuring keyboard shortcuts..."

# Set custom keyboard shortcut for Terminal
gsettings set org.gnome.settings-daemon.plugins.media-keys terminal "['<Super>t']" >/dev/null 2>&1


##########################################################
# DOCK CONFIGURATION
##########################################################
print_message "Configuring Dock settings..."

# Center the Dock
gsettings set org.gnome.shell.extensions.dash-to-dock extend-height false >/dev/null 2>&1

# Set Dock position to bottom
gsettings set org.gnome.shell.extensions.dash-to-dock dock-position BOTTOM >/dev/null 2>&1

# Apply transparency mode
gsettings set org.gnome.shell.extensions.dash-to-dock transparency-mode FIXED >/dev/null 2>&1

# Set icon size and auto-hide
gsettings set org.gnome.shell.extensions.dash-to-dock dash-max-icon-size 64 >/dev/null 2>&1
gsettings set org.gnome.shell.extensions.dash-to-dock dock-fixed false >/dev/null 2>&1


##########################################################
# FONTS
##########################################################
print_message "Configuring fonts..."

# Prompt user for Nerd Font selection
NERDFONT="FiraCode"
echo -e "${YELLOW}Which Nerd Font do you want to install? (default: FiraCode)${NC}"
read -p "Enter the Nerd Font name: " USER_FONT
if [ ! -z "$USER_FONT" ]; then
  NERDFONT=$USER_FONT
fi

FONT_URL="https://github.com/ryanoasis/nerd-fonts/releases/download/v3.2.1/${NERDFONT}.zip"
print_message "Downloading and installing ${NERDFONT} Nerd Font..."

# Download and install the selected Nerd Font
pushd /tmp >/dev/null 2>&1
wget -q $FONT_URL -O ${NERDFONT}.zip
if [ $? -ne 0 ]; then
  error_message "Failed to download ${NERDFONT}.zip. Please check the font name and URL."
  popd >/dev/null 2>&1
  exit 1
fi
unzip -q ${NERDFONT}.zip
FONTPATH="${XDG_DATA_HOME:-$HOME/.local/share}/fonts"
mkdir -p $FONTPATH

# Check if font files already exist and prompt user for action
EXISTING_FILES=$(find $FONTPATH -name "${NERDFONT}*.ttf")
if [ ! -z "$EXISTING_FILES" ]; then
  ACTION=$(prompt_choice "Font files already exist. Replace? [y]es, [n]o, [A]ll, [N]one, [r]ename")
  case $ACTION in
    y)
      cp -f ${NERDFONT}*.ttf $FONTPATH
      ;;
    n)
      ;;
    A)
      cp -f ${NERDFONT}*.ttf $FONTPATH
      ;;
    N)
      ;;
    r)
      cp -b ${NERDFONT}*.ttf $FONTPATH
      ;;
    *)
      ;;
  esac
else
  cp ${NERDFONT}*.ttf $FONTPATH
fi

fc-cache -f -v >/dev/null 2>&1
popd >/dev/null 2>&1


##########################################################
# INSTALL PACKAGES
##########################################################
print_message "Installing Neovim..."

# Download and install Neovim
pushd /tmp >/dev/null 2>&1
wget -q https://github.com/neovim/neovim/releases/download/v0.9.5/nvim-linux64.tar.gz
tar -xvf nvim-linux64.tar.gz >/dev/null 2>&1
mkdir -p ${XDG_DATA_HOME:-$HOME/.local}
cp -r nvim-linux64/* ${XDG_DATA_HOME:-$HOME/.local}
popd >/dev/null 2>&1

# Handle existing Neovim configuration
NVIM_CONFIG_PATH="${XDG_DATA_HOME:-$HOME/.config/nvim}"
if [ -d "$NVIM_CONFIG_PATH" ]; then
  echo -e "${YELLOW}Neovim configuration directory already exists.${NC}"
  ACTION=$(prompt_choice "Overwrite existing configuration? [y]es, [n]o, [b]ackup, [s]kip")
  case $ACTION in
    y)
      rm -rf $NVIM_CONFIG_PATH
      git clone -q https://github.com/FtVim/starter $NVIM_CONFIG_PATH
      ;;
    n)
      ;;
    b)
      mv $NVIM_CONFIG_PATH "${NVIM_CONFIG_PATH}_backup_$(date +%Y%m%d%H%M%S)"
      git clone -q https://github.com/FtVim/starter $NVIM_CONFIG_PATH
      ;;
    s)
      ;;
    *)
      ;;
  esac
else
  git clone -q https://github.com/FtVim/starter $NVIM_CONFIG_PATH
fi

print_message "Installing Kitty terminal..."

# Install Kitty terminal
curl -s -L https://sw.kovidgoyal.net/kitty/installer.sh | sh /dev/stdin >/dev/null 2>&1
ln -sf ~/.local/kitty.app/bin/kitty ~/.local/kitty.app/bin/kitten ~/.local/bin/
cp ~/.local/kitty.app/share/applications/kitty.desktop ~/.local/share/applications/
cp ~/.local/kitty.app/share/applications/kitty-open.desktop ~/.local/share/applications/
sed -i "s|Icon=kitty|Icon=/home/$USER/.local/kitty.app/share/icons/hicolor/256x256/apps/kitty.png|g" ~/.local/share/applications/kitty*.desktop
sed -i "s|Exec=kitty|Exec=/home/$USER/.local/kitty.app/bin/kitty|g" ~/.local/share/applications/kitty*.desktop
echo 'kitty.desktop' > ~/.config/xdg-terminals.list

##########################################################
# CONFIGURE FAVORITES
##########################################################
print_message "Configuring favorite apps..."

gsettings set org.gnome.shell favorite-apps "['kitty.desktop', 'firefox.desktop', 'org.gnome.Nautilus.desktop']" >/dev/null 2>&1

##########################################################
# TERMINAL CONFIGURATION
##########################################################
print_message "Configuring terminal settings..."

# Set default terminal to Kitty
gsettings set org.gnome.desktop.default-applications.terminal exec $HOME/.local/bin/kitty >/dev/null 2>&1

# Get the default Terminal profile
PROFILE=$(gsettings get org.gnome.Terminal.ProfilesList default | tr -d "'")

# Set the default Terminal profile name
gsettings set org.gnome.Terminal.Legacy.Profile:/org/gnome/terminal/legacy/profiles:/:$PROFILE/ visible-name 'My Default' >/dev/null 2>&1

# Set the Terminal font
gsettings set org.gnome.Terminal.Legacy.Profile:/org/gnome/terminal/legacy/profiles:/:$PROFILE/ use-system-font true >/dev/null 2>&1

# Set the default size for new Terminal windows
gsettings set org.gnome.Terminal.Legacy.Profile:/org/gnome/terminal/legacy/profiles:/:$PROFILE/ default-size-columns 90 >/dev/null 2>&1
gsettings set org.gnome.Terminal.Legacy.Profile:/org/gnome/terminal/legacy/profiles:/:$PROFILE/ default-size-rows 27 >/dev/null 2>&1

##########################################################
# GNOME TWEAK
##########################################################
print_message "Applying GNOME tweaks..."

# Set the Font
gsettings set org.gnome.desktop.wm.preferences titlebar-font "${NERDFONT} Nerd Font Bold 14" >/dev/null 2>&1
gsettings set org.gnome.desktop.interface font-name "${NERDFONT} Nerd Font 14" >/dev/null 2>&1
gsettings set org.gnome.desktop.interface document-font-name "${NERDFONT} Nerd Font 14" >/dev/null 2>&1
gsettings set org.gnome.desktop.interface monospace-font-name "${NERDFONT} Nerd Font Mono 14" >/dev/null 2>&1

##########################################################
# .CONFIG
##########################################################
print_message "Configuring Kitty terminal..."

cat > ${XDG_DATA_HOME:-$HOME/.config/kitty/kitty.conf} <<EOF
font_family      ${NERDFONT} Nerd Font
italic_font      auto
bold_font        auto
bold_italic_font auto
font_size 16.0
background_opacity 0.80
disable_ligatures never
hide_window_decorations yes
shell fish
editor nvim
EOF

print_message "Configuring Fish shell..."

cat > ${XDG_DATA_HOME:-$HOME/.config/fish/config.fish} <<EOF
set -e fish_user_paths
set -U fish_user_paths $HOME/.bin $HOME/.local/bin $fish_user_paths
set fish_greeting 
set TERM "xterm-256color"
set EDITOR "nvim"
set -x MANPAGER "nvim +Man!"
fish_vi_key_bindings
alias vi='vim'
alias vim='nvim'
alias ga='git add'
alias gcmsg='git commit -m'
alias gcl='git clone --recurse-submodules'
EOF

print_message "Setup complete!"
```
