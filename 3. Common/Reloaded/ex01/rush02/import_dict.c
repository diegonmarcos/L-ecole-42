#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
//int atoi(char *str);

char** import_dict(char *filename)
{
    int fd;
    char buffer[100];  // Buffer for reading data (adjust the size if needed)
    char n_digits[100]; // Array for the numbers
    char n_letters[100]; // Array for the writing of numbers
    int b_index = 0;
    int n_index = 0;

                                                                // Open the file
    fd = open(filename, RDONLY);
    if (fd == -1) 
    {
        write(1,"Dict Error\n", 12);
        return 0;
    }
                                                                 // Dynamic memory allocation
    *n_digits = (char*)malloc(1000 * sizeof(int));
    *n_letters = (char*) malloc(1000 * sizeof(char));

    if (*n_digits == NULL || *n_letters == NULL) 
    {
        write(1,"Dict Error - Malloc\n", 12);
        close(fd);
        return -1;
    }

   while (read(fd, &buffer[b_index], 1) == 1)                     // read fle byte per byte
   {
        while(buffer[b_index] != ' ' || buffer[b_index] != ':')         // before the first : and any space
        {  
          //  char b1 = buffer[b_index];
         //   int b2 = atoi(&b);
            n_digits[n_index] = buffer[b_index];                        // add it to the array of digits
            n_index++;
        }
        if(buffer[b_index] == ':')
        {    
            b_index++;
            while(buffer[b_index] != ' ' || buffer[b_index] != '\n')
                n_letters[n_index] = buffer[b_index];                    // add it to the array of letters
                n_index++;
        }
    b_index++; 
   }
    close(fd);
    int i = 0;
    while (n_digits[i])
    {
        write(1, n_digits[i]+'0', 1);
        write(1, ":", 1);
        write(1, n_letters[i], 1);
        write(1, "\n", 1);
        i++;
    }
}


