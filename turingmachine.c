//C language implementation of Turing Machine
//Turing Machine Problem - a^n b^n*2
//Final Assigment CMPSC 135 - Automata Theory and Languages
//Zainal Jumaine D. Santos - BSCS 3A

//attaching preprocessors in the program
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const max = 900; //max value the input string can handle

//checking the input if it follows the notation a^n b^n*2
bool check_string(char str[])
{
    int a_count;//contains the number of a's in the string
    int b_count;//contains the number of b's in the string
    int i = 0;//loop counter


    //check the number of a's in the string
    while (str[i] == 'a')
    {   
        a_count++;
        i++;
    }
    
    while (str[i] == 'b')
    {
        b_count++;
        i++;
    }
    
}

int main()
{
    char my_string[max];
    printf("Enter the string: ");
    fgets(my_string, sizeof(my_string), stdin); //read the string
    printf("the string is : ");
    puts(my_string);
    


    return 0;
}