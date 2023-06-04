//C language implementation of Turing Machine
//Turing Machine Problem - a^n b^n*2
//Final Assigment CMPSC 135 - Automata Theory and Languages
//Zainal Jumaine D. Santos - BSCS 3A

//attaching preprocessors in the program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const int max = 900; //max value the input string can handle

//checking the input if it follows the notation a^n b^n*2
bool check_string(char str[])
{
    int a_count = 0;//contains the number of a's in the string
    int b_count = 0;//contains the number of b's in the string
    int x = strlen(str);
    bool accepted = true;
    bool rejected = false;

    //check the number of a's in the string
    for (int i = 0; i <= x; i++)
    {
        if (str[i] == 'a')
        {
            a_count++;
        }
        else if (str[i] == 'b')
        {
            b_count++;
        }
    }

    if (b_count == a_count * 2)
    {
        printf("The input string follows the format \n");
        return accepted;
        
    }
    else
    {
        printf("The input string does not follow the format \n");
        return rejected;
        
    }
    
   printf("The number of a is: %d\n", a_count);
   printf("The number of b is: %d\n", b_count);

}

void turing_machine(char string[])
{
    char tape[max];
    strcpy(tape,string);
    int tape_length = strlen(tape);
    int pointer_position = 0;

    for (int i = 0; i <= tape_length; i++)
    {
        if (string[pointer_position] == 'a')
        {
            string[pointer_position] = 'x';
            printf("Replace 'a' with 'x': %s\n",string);
            while (string[pointer_position] == 'a')
            {
                pointer_position++;
            }   
        }
        else if (string[pointer_position] == 'b')
        {
            /* code */
        }
        
        
    }
    
}

int main()
{
    char my_string[max];
    int x;
    printf("Enter the string: ");
    fgets(my_string, sizeof(my_string), stdin); //read the string
    printf("the initial string is : ");
    puts(my_string);

    if(check_string(my_string) == true)
    {
        printf("hello");
    }
    


    return 0;
}