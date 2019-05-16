#include<stdio.h>
#include<math.h>
float f(float x)
{
	return 1/(1+x*x);
}
main()
{
	float x0, xn, h, sum_ev=0, sum_od=0, sum1, ans;
	int n,i;
	
	printf("Enter the lower and upper limit of inegration\n");
	scanf("%f%f",&x0,&xn);
	
	printf("Enter the number of iterations\n");
	scanf("%d",&n);
	
	h = (xn-x0)/n;
	
	sum1 = f(x0)+f(xn); 
	
	for(i=1;i<=n-1;i++)
	{
		if(i%2==0)
			sum_ev = sum_ev + f(x0+i*h);
		else
			sum_od = sum_od + f(x0+i*h);
    }
	
	ans = (h/3)*(sum1+4*sum_od+2*sum_ev);
	printf("Required integral value is %f",ans);
		
}
