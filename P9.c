#include<stdio.h>

    int main()
    {
        int x,y,z,pd;

    for(x=1;x<=1000;x++)
    {
        for(y=1;y<=1000;y++)
        {
            for(z=1;z<=1000;z++)
            {
                if((x*x+y*y==z*z)&&x+y+z==1000)
                {
                    pd=x*y*z;
                    break;
                 }
            }
        }
    }
        printf("%9d",pd);
 
   }


