#include <stdio.h>

int main() 
{
    long long int num=600851475143;
    long long int i,x;
    long long int c=0;
    long long int pf=0;
    
    for(i=1;i<=num;i++)
    {
        if(num%i==0)//then it's a factor
        {
            for(x=1;x<=i;x++)
            {
                if(i%x==0)
                c++;
            }
        if(c==2)
        {
            if(i>pf)
            pf=i;
        }
    }
}
printf("%llu",pf);
}


