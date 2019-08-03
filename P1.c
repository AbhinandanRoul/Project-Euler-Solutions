#include <stdio.h>

int main()
{
   int i=1,s=0;

while(i<=1000)
{
   if(i%3==0||i%5==0)
      s=s+i;
}
   printf("%d",s);
}
      
