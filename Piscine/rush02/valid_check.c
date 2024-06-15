  
int valid_check(char **argv)
{
                                        // If negative error
    if( argv[1][0] < 0)
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
        argc[2][0] = "numbers.dict";
        char **p = read_data_to_arrays(&argv[1][0]);
    }
                                            // If two argument, first is the dict
    if (argc == 3)
    {
         argc[3][0] = argc[2][0];
         argc[2][0] = argc[1][0]; //.dict
         argc[1][0] = argc[3][0]; //number
  //      read_data_to_arrays(&argv[1][0]);
    }
    else
    {                                  //max 2 arguments
        write(1, "E", 1);
        write(1, "r", 1);
        write(1, "r", 1);
        write(1, "o", 1);
        write(1, "r", 1);
        write(1, "\n", 1);     
    }
    return 1;
}