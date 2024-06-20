  
int valid_check(char argc, char **argv)
{
                                        // If negative error
    if(argv[1][0] < 0)
    {
        write(1, "E", 1);
        write(1, "r", 1);
        write(1, "r", 1);
        write(1, "o", 1);
        write(1, "r", 1);
        write(1, "\n", 1);
        return 0;
    }
                                            // If only one argument use deafult.dict
    if (argc == 2)
    {
        return 1;        
    }
                                            // If two argument, first is the dict
    if (argc == 3)
    {
         return 2;
    }
    else
    {                                  //max 2 arguments
        write(1, "E", 1);
        write(1, "r", 1);
        write(1, "r", 1);
        write(1, "o", 1);
        write(1, "r", 1);
        write(1, "\n", 1);
        return 0;     
    }
}