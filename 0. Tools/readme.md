.vimrc
```
set number
" set relativenumber
set ruler
set mouse=a
set noswapfile

" control+c = "+y
vnoremap <C-c> "+y
```  

#Shell Script - Oh my zsh  
'sh -c "&(curl -fssL https://raw.githubusercontent.com/ohmyzsh/ohmyz sh/master/tools/install.sh)"'


.vimrc - complete
```
" Configuración básica
set nocompatible           " Desactiva el modo compatible con vi
syntax on                  " Habilita la sintaxis
filetype plugin indent on  " Habilita la detección de tipo de archivo, plugins y sangrado automático
set fileformat=unix        " Establece el formato de fin de línea a Unix
set encoding=UTF-8         " Establece la codificación de caracteres a UTF-8

" Mejoras visuales
set number                 " Muestra números de línea
set relativenumber         " Muestra números relativos de línea
set cursorline             " Resalta la línea actual
"set cursorcolumn           " Resalta la columna actual
set hlsearch               " Resalta las coincidencias de búsqueda
set incsearch              " Muestra resultados de búsqueda a medida que se escribe
set showmatch              " Resalta los pares de paréntesis
set nocursorline           " Desactiva el resaltado de la línea actual
set signcolumn=number      " Muestra una columna de signos
set noshowmode             " No muestra el modo actual en la línea de estado
set showcmd                " Muestra los comandos parciales en la línea de estado
set conceallevel=1         " Oculta partes del texto basado en su sintaxis
set shortmess+=c           " Reduce la cantidad de mensajes mostrados
set formatoptions-=cro     " Desactiva la continuación automática de comentarios y el ajuste de texto
set wrap                   " Ajusta líneas largas en lugar de hacer scroll horizontal
set linebreak              " Rompe líneas por palabras, no por caracteres

" Configuración de la edición
set tabstop=4              " Establece la longitud de la tabulación a 4 espacios
set shiftwidth=4           " Controla la cantidad de espacios para la sangría
set noexpandtab            " Usa tabulaciones en lugar de espacios
set autoindent             " Mantiene la sangría de la línea anterior
set smartindent            " Aplica sangrado inteligente
set smarttab               " Maneja tabulaciones inteligentes

" Configuración de desplazamiento
set scrolloff=5            " Mantiene un margen de 5 líneas al desplazarse verticalmente
set sidescrolloff=5        " Mantiene un margen de 5 columnas al desplazarse horizontalmente

" Configuración de alertas y respaldo
set noerrorbells visualbell t_vb=  " Desactiva las alertas de sonido y activa las alertas visuales
set noswapfile             " Desactiva la creación de archivos de intercambio
set nobackup               " Desactiva la creación de archivos de respaldo
set undodir=~/.vim/undodir " Especifica el directorio para almacenar los archivos de deshacer
set undofile               " Habilita la funcionalidad de deshacer persistente
set clipboard=unnamedplus  " Usa el portapapeles del sistema para operaciones de copia y pega

" Configuración de búsqueda
set ignorecase             " Ignora mayúsculas y minúsculas en las búsquedas
set smartcase              " Habilita la búsqueda sensible a mayúsculas y minúsculas si la consulta contiene mayúsculas

" Atajos de teclado útiles
nmap <leader>w :w<CR>      " Guarda el archivo con <leader>w
nmap <leader>q :q<CR>      " Cierra la ventana con <leader>q
nmap <leader>x :x<CR>      " Guarda y cierra la ventana con <leader>x
nnoremap <CR> :noh<CR><CR>:<backspace>  " Mapea la tecla Enter para desactivar el resaltado de búsqueda actual

" Administrador de complementos: Vim-Plug
" Carga Vim-Plug si está instalado
if filereadable(expand("~/.vim/autoload/plug.vim"))
    source ~/.vim/autoload/plug.vim
    call plug#begin('~/.vim/plugged')

    " Complementos
    Plug 'tpope/vim-fugitive'         " Git en Vim
    Plug 'sheerun/vim-polyglot'       " Soporte para varios lenguajes
    Plug 'preservim/nerdtree'         " Explorador de archivos
    Plug 'Xuyuanp/nerdtree-git-plugin'" Plugin de Git para NERDTree
    Plug 'vim-airline/vim-airline'    " Línea de estado mejorada
    Plug 'tpope/vim-commentary'       " Facilita comentar líneas de código
    Plug 'dense-analysis/ale'         " Linter y fixer de código
    Plug 'preservim/tagbar'           " Visualiza las tags del código
    Plug 'morhetz/gruvbox'            " Tema Gruvbox
    Plug 'junegunn/fzf'               " Fuzzy Finder
    Plug 'junegunn/fzf.vim'           " Integración de FZF con Vim
    Plug 'tpope/vim-surround'         " Manejo avanzado de comillas y paréntesis
    Plug 'junegunn/goyo.vim'          " Modo de enfoque para escribir
    Plug 'junegunn/limelight.vim'     " Resaltado del texto enfocado
    Plug 'ryanoasis/vim-devicons'     " Iconos de archivo en Vim
    Plug 'neoclide/coc.nvim', {'branch': 'release'}  " Cliente de lenguaje de próxima generación


    " Cierra el bloque de configuración de complementos
    call plug#end()
else
    echo "Vim-Plug no está instalado. Por favor, instálalo siguiendo las instrucciones en https://github.com/junegunn/vim-plug"
endif

" Configuración de colores y temas
set termguicolors            " Habilita el soporte de colores verdaderos en el terminal
let g:gruvbox_italic=1       " Configura el tema Gruvbox para usar texto en cursiva
colorscheme gruvbox
set background=dark
hi Normal guibg=NONE ctermbg=NONE  " Configura el fondo de la ventana principal para que sea transparente
let g:terminal_ansi_colors = [
    \ '#282828', '#cc241d', '#98971a', '#d79921', '#458588', '#b16286', '#689d6a', '#a89984',
    \ '#928374', '#fb4934', '#b8bb26', '#fabd2f', '#83a598', '#d3869b', '#8ec07c', '#ebdbb2',
\]                           " Define una paleta personalizada de colores ANSI para el terminal

" Configuración de NERDTree
nnoremap q :NERDTreeToggle<CR>  " Mapea la tecla 'q' para abrir/cerrar NERDTree
let NERDTreeShowHidden=1
let NERDTreeRespectWildIgnore=1
set wildignore+=*.DS_Store,*.min.*,*.o,*.d,.git
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * NERDTree | if argc() > 0 || exists("s:std_in") | wincmd p | endif
autocmd BufEnter * if tabpagenr('$') == 1 && winnr('$') == 1 && exists('b:NERDTree') && b:NERDTree.isTabTree() | quit | endif

" Configuración de Tagbar
nmap <F8> :TagbarToggle<CR>

" Mapeo del líder
let mapleader = "\\"
nnoremap <leader>\ ``
nnoremap <space> :

" Configuración de fzf
let g:fzf_layout = { 'down': '~40%' }

" Configuración de coc.nvim
" Utiliza :CocInstall para instalar extensiones de lenguaje, por ejemplo :CocInstall coc-python
" Aquí algunos ajustes básicos de coc.nvim:
inoremap <silent><expr> <C-Space> coc#refresh()
nmap <silent> [g :<C-u>CocDiagnostics<CR>
nmap <silent> gd :<C-u>CocDefinition<CR>
nmap <silent> gy :<C-u>CocTypeDefinition<CR>
nmap <silent> gi :<C-u>CocImplementation<CR>
nmap <silent> gr :<C-u>CocReferences<CR>

" Configuración de Goyo y Limelight para modo de enfoque
nnoremap <leader>z :Goyo<CR>
autocmd! User GoyoEnter Limelight
autocmd! User GoyoLeave Limelight!

" Mapeo para abrir terminal horizontalmente
nnoremap <leader>c :sp<CR>:term<CR>

" Desactivar las flechas de dirección en modo normal, inserción y visual
noremap <Up> <Nop>
noremap <Down> <Nop>
noremap <Left> <Nop>
noremap <Right> <Nop>

inoremap <Up> <Nop>
inoremap <Down> <Nop>
inoremap <Left> <Nop>
inoremap <Right> <Nop>

vnoremap <Up> <Nop>
vnoremap <Down> <Nop>
vnoremap <Left> <Nop>
vnoremap <Right> <Nop>

" Mapeo para abrir la terminal con la letra 'e'
nnoremap <silent> e :botright terminal<CR>
```
  

#FRANCINETTE (PACO)  
`bash -c "$(curl -fsSL https://raw.github.com/xicodomingues/francinette/master/bin/install.sh)"`

```sh
#!/bin/sh

# Get the message and Root Folder

# read -p "root folder" f_older
# read -p "Enter message " m_essage

Git add .
Git commit -m "update"
Git push
```


.gitignore
```
# Compiled source #
###################
*.com
*.class
*.dll
*.exe
*.o
*.so

# Packages #
############
# it's better to unpack these files and commit the raw source
# git has its own built in compression methods
*.7z
*.dmg
*.gz
*.iso
*.jar
*.rar
*.tar
*.zip

# Logs and databases #
######################
*.log
*.sql
*.sqlite

# OS generated files #
######################
.DS_Store
.DS_Store?
._*
.Spotlight-V100
.Trashes
ehthumbs.db
Thumbs.db
```

# Script Plugins  
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
