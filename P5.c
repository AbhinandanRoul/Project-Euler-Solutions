#include <stdio.h>

int main() 
{
    int i,j;
    int c;
    for(i=1;;i++)
    {
        for(j=1;j<=20;j++)
        { 
            c=0;
            if(i%j==0)
            c++;
        }
        if(c==20)
        {
            printf("%d",i);
            return;
        }
    }
}
