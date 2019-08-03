public class prime_pythagoras_triplet
{
    static double sum;
        public static void main(String[] args)
    {
        double a;
       for( a=1;a<=1000;a++)
       {
           double b=(a*a)+((a+1)*(a+1));
           double isp=isPerfectSquare(b);
           if(isp==0)
           continue;
           if(isp==(a+2))
         sum=a+(a+1)+(a+2);
           if(sum==1000)
           {
           System.out.println(a);
           System.out.println(a+1);       
         System.out.println(a+2);      
         }
         

    }
}
   static double isPerfectSquare(double n)
        {
            double sqroot=Math.sqrt(n);
            double x=Math.floor(sqroot);
            if(x==sqroot)
            return x;
            else
            return 0;
        }

}
