#include <stdio.h>
#include <stdlib.h>

int add(int,int); // function prototype for adding two integers
int mul(int,int); // function prototype for multiplying two integers
int sub(int,int); // function prototype for subtracting two integers
int divn(int,int); // function prototype for dividing two integers


int main(int argc, char **argv)
{
    if (argc != 4) {
        printf("Usage: %s <operation> <operand1> <operand2>\n", argv[0]);
        return 1;
    }
    
    //input from command line
    int operation =  atoi(argv[1]);
    int operand1 = atoi(argv[2]);
    int operand2 = atoi(argv[3]);

    // variable to store the operation result
    int result;

    if(operation >= 1 && operation <= 4) {
            switch (operation) {
        case 1:
            printf("You have chosen to perform addition:\t");
            result = add(operand1, operand2);
            printf("%d + %d = %d\n", operand1, operand2, result);
            break;
        case 2:
            printf("You have chosen to perform subtraction:\t");
            result = sub(operand1, operand2);
            printf("%d - %d = %d\n", operand1, operand2, result);
            break;
        case 3:
            printf("You have chosen to perform multiplication:\t");
            result = mul(operand1, operand2);
            printf("%d * %d = %d\n", operand1, operand2, result);
            break;
        case 4:
            printf("You have chosen to perform division:\t");
            result = divn(operand1, operand2);
            printf("%d / %d = %d\n", operand1, operand2, result);
            break;
        default:
            printf("Error: Invalid operation\n");
            return 1;
    }

    } else {
            printf("\nError: Please enter a valid number between 1 and 4.\n");
            return 1;
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