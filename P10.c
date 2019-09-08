#include <stdio.h>
//Abhinandan Roul
int main()
{
   int n=2000000,x;
   int c,i;
   int pc,s=2;//counts 2 as prime and takes sum
   for(x=1;x<=n;x+=2)
   {
       c=0;
       i=2;
     while(i<x)
    {
        if(x%i==0)
        break;
        i++;
    }
    if(i==x)
    {
        s=s+x;
    }
   }
printf("%d",s);
}
