#include <stdio.h>

int main()
{
    int value;

    printf("Enter the number: ");
    scanf("%d", &value);

    if (value % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}