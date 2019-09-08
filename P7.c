#include <stdio.h>
//Abhinandan Roul
int main()
{
   int n,x;
   int c=0,pc=1;//counts 2 as 1st prime (default)
   
   for(n=2;;n+=2)
   {   
       c=0;
       for(x=1;x<=n;x++)
       {
           if(n%x==0)
           c++;
       }
           if(c==2)
           pc++;
     
       if (pc==10001)
       {
           printf("%d",n);
           break;
       }
   }
}
