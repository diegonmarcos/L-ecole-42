
#ifndef LIBDNM_H
# define LIBDNM_H

# include <stdio.h>
# include <string.h>

# define GREEN   "\x1b[32m"
# define RED     "\x1b[31m"
# define RESET   "\x1b[0m"

const static char	*g_r[] = {RED "✗" RESET, GREEN "✓" RESET}; 
//const static char *results[] = {RED "FALSE" RESET, GREEN "TRUE" RESET};

#endif
