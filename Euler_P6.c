#include <stdio.h>
//Abhinandan Roul
int main()
{
    int n;
    int po,sum=0;
    int s,re,result=0;
    
    for(n=1;n<=100;n++)
    {
        po=n*n;
        sum=sum+po;// sum of square
        s=s+n;//sum of all
    }
    re=s*s;//square of sum
    result=re-sum;
    printf("%d",result);// this code didn't work in G&G IDE
    
}