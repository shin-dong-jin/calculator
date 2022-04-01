#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
    int number1, number2, number3;
    char operator;

    printf("Please enter a expression: ");
    scanf("%d %c %d", &number1, &operator, &number2);

    switch(operator)
    {
        case '+':
            c = add(number1,number2);
            break;
        case '-':
            c = sub(number1,number2);
            break;
        case '*':
            c = multi(number1,number2);
            break;
        case '/':
            c = div(number1,number2);
            break;
    }

    printf("result is %d\n", number3);

    return 0;
}

int add(int number1, int number2)
{
    //TODO implementation
    return number1 + number2;
}

int sub(int number1, int number2)
{
    //TODO implemenation
    return 0;
}

int multi(int number1, int number2)
{
    //TODO implementation
    return 0;
}

int div(int number1, int number2)
{
    //TODO implementation
    return 0.0;
}