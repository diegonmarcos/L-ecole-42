#include "header.h"

int main(int argc, char **argv)
{
                                           //valid checker
    if(valid_check(argc, argv) == 0)
    {
        return 0;
    }
    else if(valid_check(argc, argv) == 1)
    {
        ft_strcpy(&argv[2][0], "numbers.dict") ;
    }
    else
    {
       argv[3][0] = argv[2][0];
       argv[2][0] = argv[1][0]; //.dict
       argv[1][0] = argv[3][0]; //number 
    }
                                        //import dictionary
    import_dict(&argv[2][0]);
    
                                         //match and print
    match_print(argv);

                                        //free Malloc
   // free(*n_digits) ;
   // free(*n_letters) ;

    return 0;
}