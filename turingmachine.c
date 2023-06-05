//Turing Machine implementation in C 
//Turing Machine Problem - a^n b^n*2
//Final Assignment CMPSC 135 - Automata Theory and Languages
//Zainal Jumaine D. Santos - BSCS 3A
//Program doesn't work

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

//function to replace the characters in the string with x and y using the Logic of Turing Machine
//Error in the replacement part
void turing_machine(char string[])
{
    char tape[max];
    strcpy(tape,string);
    int tape_length = strlen(tape);
    int pointer_position = 0;
    int i = 0;
    int last_pointer = 0;

    //iterate through every characters in the tape 
    while(i <= tape_length)
    {

        //replacing individual characters in the tape
        //error in the implementation of the replacement of characters
        if(string[pointer_position] == 'a') //condition for a 
        {
            string[pointer_position] = 'x';
            printf("Pointer Position: %d -> string: [%s]",pointer_position, string);

        }
        else if(string[pointer_position] == 'b')//condition for b
            {
                string[pointer_position] = 'y';
                printf("Pointer Position: %d -> string: [%s]",pointer_position, string);
            
             }
        pointer_position++;//move the pointer to the right of the tape 
        i++; //increase loop counter for the next iteration
    }
    
    printf("Modified string: %s",string);
    check_string(string);
}

int main()
{
    char my_string[max]; //array that contains the input string
    printf("Enter the string: ");
    fgets(my_string, sizeof(my_string), stdin); //read the string
    printf("the initial string is : ");
    puts(my_string);

   turing_machine(my_string);
    


    return 0;
}