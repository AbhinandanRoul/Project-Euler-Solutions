#include <stdio.h>

int main() 
{
   int i,j;
   int n,pa,max=0;
   int a=0,s=0;
   
   for(i=100;i<=999;i++)
   {
       for(j=100;j<=i;j++)
       {
           pa=i*j;
           
           n=pa;
           while(n>=0)
           {
               a=n%10;
               s=s*10+a;
               n=n/10;
           }
           if(s==pa)//check palindrome
           {
               if(pa>max)
               max=pa;
           }
       }
   }
   printf("%d",max);
}
