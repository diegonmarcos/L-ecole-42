#include <unistd.h>
#include <stdlib.h>

char *parsing(**argv)
{
    int i = 0;
    int number = argv[2][0]; //number
    int a1 = 1; // a1 x 10 ^ a2 (a22 mult3)
    int a21 = 0; 
    int a22 = 0;
    int a2 = 0;
    int b1 = 0;
    int b2 = 0;


    void **dict =  char **read_data_to_arrays(&argv[1][0]);

    //Len of number  // a1 x a2 // a2 = 10 ^ a2 (a22 mult3)
    while(number > 0)
    {
        number = number / 10;
        a2 = a2 * 10;
    }
    a1 = a2;
    while (a22 > 999) // multiple of 3
    {
        a1 = a1 / 1000;  
    }
    a2 = a2 / a1;


    //write(1,find(a1, bring me the text), 1);        // one, two, tree..
    //write(1,find(b1, " ", 1));                       // space
    //write(1,find(a2, bring me the text), 1);        // hundread, thousand....

    a2 = number;
    number = argv[2][0];

    //Break the number
    while(i > 0)
        b1 = number / a2;   
        b2 = number / a2;
        a2 = a2 / 10;
        
    //    write(1,find(b1, bring me the text), 1)



}