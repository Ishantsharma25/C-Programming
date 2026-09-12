#include <stdio.h>

int main() {
    int Leap;
    printf("Enter the Year:");
    scanf("%d",&Leap);
   if(Leap%400==0)
   {printf("Leap year");}
    else if(Leap%100==0 && Leap%400!=0)
        {printf("Not Leap year");}
      else  if(Leap%4==0)
   {printf("Leap year");}
    else
        {printf(" Not Leap year");}

    return 0;
}