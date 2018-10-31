// https://projecteuler.net/problem=1
package competitive_ProgrammingSolutions;

public class tester {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double sum=0;
		int n1=3;
		int n2=5; int i=2;
		for(;i<1000;i++) {
			if(i%3==0||i%5==0)
				sum+=i;
				
		}
		if(i%15==0)
			sum-=i;
		System.out.println(sum);
			

	}

}
