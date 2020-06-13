
public class Q12 {
	static long c=0;
	public static void main(String[] args)
	
	{
		
Find_Triangular_Numbers();
	}
public static void Find_Triangular_Numbers()
	{
		for(long num=1;;num++)
		{
			 c=c+num;
			long fc=Find_factors(c);
					if(fc==500)
					{
						System.out.println(c);
						break;
		}
	}
	}
	
	public static long Find_factors(long triangle_num)
	{
		long tn=triangle_num;
		long nf=1;
		for(long x=1;x<=tn/2;x++)
		{
			if(tn%x==0)
			{
				nf++;
				//System.out.println(x);
			}
				
		}
		return nf;
	}
}