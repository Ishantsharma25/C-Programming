#include <stdio.h>

int main() 
{
    printf("1-Addition \n");
    printf("2-Substraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");
     printf("ENTER THE NUMBER:");

    int Num;
    scanf("%d", &Num);

    if (Num == 1)
    {
        printf("ENTER TWO NUMBERS FOR ADDITION:");

        int sum, a, b;

        scanf("%d", &a);    
        scanf("%d", &b);

        sum = a + b;

        printf("YOUR SUM IS %d", sum);
    }
    if (Num==2)
    { printf("ENTER TWO NUMBERS FOR SUBSTRACTION:");
      int sub, a, b;

        scanf("%d", &a);
        scanf("%d", &b);

        sub = a - b;

        printf("YOUR SUBSTRACTION IS %d", sub);}
    if (Num==3)
         { printf("ENTER TWO NUMBERS FOR MULTIPLICATION:");
            int Mul, a, b;

        scanf("%d", &a);
        scanf("%d", &b);

        Mul = a *b;

        printf("YOUR MULTIPLICATION IS %d", Mul);}
    if (Num==4)
          { printf("ENTER TWO NUMBERS FOR DIVISION:");
        int Div, a, b;

        scanf("%d", &a);
        scanf("%d", &b);

        Div = a /b;

        printf("YOUR DIVISION IS %d", Div);}
    
           
        
        

    return 0;
}