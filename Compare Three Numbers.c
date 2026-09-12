#include <stdio.h>

int main() {
   int a,b,c;
   printf("Enter First Number:");
    scanf("%d",&a);
   printf("Enter Second Number:");
    scanf("%d",&b);
   printf("Enter third Number");
    scanf("%d",&c);
    if(a>b && a>c)
    {printf("First Number is greater than Second Number also greater than third number");}
    else if (b>a && b>c)
         {printf("Second Number is greater than First Number also greater than third number");}
    else if(c>a && c>b)
         {printf("Third number is greatest");}
    else if (a>b && a==c)
         {printf("First and Third Numbers are greatest and Same");}
        else if (b>a && b==c)
         {printf("Second and Third Numbers are greatest and Same");}
            else if (a>c   && a==b)
          {printf("First and Second Numbers are greatest and Same");}
     else   
    {printf("All Numbers are same");}
    return 0;}