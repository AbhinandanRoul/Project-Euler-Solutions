public class pythagoras_triplet {

	public static void main(String[] args) {
		int a,b,c,sum;
		for(a=1,b=2,c=3;a<=1000&&b<=1000&&c<=1000;a++,b++,c++)
		{ 
			sum=0;
			sum=a+b+c;
			
			boolean x=(a*a+b*b)==c*c;
			boolean y=(a*a+c*c)==b*b;
		  boolean z=(b*b+c*c)==a*a;
			if(sum==1000)
				if((x||y)||(x||z)||(y||z))
			{ 
					long p=a*b*c;
					System.out.println("The product="+p);
          break;
			
		}

	}

}
}
