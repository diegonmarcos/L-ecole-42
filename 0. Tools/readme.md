.vimrc
set number
" set relativenumber
set ruler
set mouse=a
set noswapfile

" control+c = "+y
vnoremap <C-c> "+y


#FRANCINETTE(PACO)
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