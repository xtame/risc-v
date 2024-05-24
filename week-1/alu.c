#include <stdio.h>
#include <stdlib.h>

int add(int,int); // function prototype for adding two integers
int mul(int,int); // function prototype for multiplying two integers
int sub(int,int); // function prototype for subtracting two integers
int divn(int,int); // function prototype for dividing two integers

int main(int argc, char **argv)
{
    int alu_opertion = 0;
    while(1){
        printf("Enter a number between 1 and 4 to select ALU operation\n");
        printf("Here are your options:\n");
        printf("Addition:\t 1\nMulition:\t 2\nSubtraction:\t 3\nDivision:\t 4\n");
        scanf("%d",&alu_opertion);
        if (alu_opertion >= 1 && alu_opertion <= 4) {
            printf("The number you entered is %d\n", alu_opertion);
            break; 
        } else {
            printf("Error: Please enter a valid number between 1 and 4.\n");
        }
    }
}

// function implementation for adding two integers
int add(int x, int y)
{
    return x + y;
}

// function implementation for multiplying two integers
int mul(int x, int y)
{
    return x * y;
}

// function implementation for subtracting two integers
int sub(int x, int y)
{
    return x - y;
}

// function implementation for dividing two integers
int divn(int x, int y)
{
    if(y == 0){
        printf("Cannot divide number by 0. You provided %d", y);
        return 1;
    }
    return x / y;
}