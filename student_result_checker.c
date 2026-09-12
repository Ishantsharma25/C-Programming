// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int p,c,m;
    printf("Enter your Marks of Physics:");
     scanf("%d",&p);
     if(p>35)
   {printf("PASS In Physics\n");}
    else
     {printf("FAIL In Physics\n");}  
    printf("Enter your Marks of Chemistry:");
     scanf("%d",&c);
    
   if(c>35)
        {printf("PASS In Chemistry\n");}
       else
        {printf("FAIL In Chemistry\n");} 
    printf("Enter your Marks of Maths:");
     scanf("%d",&m);
    if(m>35)
    {printf("PASS In Maths\n");}
    else
       {printf("FAIL In Maths\n");}  
  if(p>35&&c>35&&m>35)
  {printf(">>>OVERALL PASS\n");}
      {printf(">>>OVERALL FAIL\n");}
    
    int a;
    a=p+c+m;
        printf(">>>Total Marks:%d\n",a);
    int percentage;
percentage = (a * 100) / 300;
printf("Percentage: %d%%", percentage);
    
        
    
 
    return 0;
}