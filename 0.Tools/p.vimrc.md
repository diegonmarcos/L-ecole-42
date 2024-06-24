# .vimrc
```
set number
" set relativenumber
set ruler
set mouse=a
set noswapfile

" control+c = "+y
vnoremap <C-c> "+y
```

# .vimrc - complete 1
```
" Activate vim syntax coloring
syntax on
" Set line numbers as visible
set nu
" Set row numbers as visible
set ru
" Allow cursor movement by clicking
set mouse=a

" Use spaces instead of tabs
" set expandtab
" Be smart when using tabs 
set smarttab
" set (1 tab == 4 spaces)
set shiftwidth=4
set tabstop=4

" Auto-indent
set ai
" Smart indent
set si
" Wrap lines
set wrap

" Copy and paste to system clipboard
vmap <Leader>y "+y
vmap <Leader>d "+d
nmap <Leader>p "+p
nmap <Leader>P "+P
vmap <Leader>p "+p
vmap <Leader>P "+P

" Add the 42 stdheader command
try
	source /.vim/stdheader.vim
catch
	" silently fail if there is no stdheader file
endtry
```


# .vimrc - complete 2
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
  