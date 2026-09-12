#include <stdio.h>

int main() {
   int  value;
    printf("Enter the number:");
    scanf("%d",&value);
   if(value==0)
      { printf("Number is Neither Positive nor Negative.");}
    else if(value>0)
         { printf("Number is Positive");}
    else 

         { printf("Number is Negative.");}
       
    return 0;}