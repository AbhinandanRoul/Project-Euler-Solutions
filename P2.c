#include <stdio.h>
//Abhinandan Roul

int main() 
{
    int a=0,b=1,c=0;
    int s=0;
    while(c<4000000)
    {
        c=b+a;
        a=b;
        b=c;
        if(c%2==0)
         s=s+c;
       
    }
    printf("%d",s);
}
