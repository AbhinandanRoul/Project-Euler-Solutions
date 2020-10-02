import java.math.BigInteger;

public class P16 {

	public String result() {
		String fac = BigInteger.ONE.shiftLeft(1000).toString();
		 int sumofdigits = 0;
		for (int i = 0; i < fac.length(); i++)
		{
			sumofdigits += fac.charAt(i) - '0';
		}
		return Integer.toString(sumofdigits);
	}


	public static void main(String[] args)
	{
		System.out.println(new P16().result());
	}

}
