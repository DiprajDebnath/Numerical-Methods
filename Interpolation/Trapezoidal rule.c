#include<stdio.h>
#include<math.h>
float f(float x)
{
	return x*x;
}
main()
{
	float x0, xn, h, sum=0, sum1=0, ans;
	int n,i;
	
	printf("Enter the lower and upper limit of inegration\n");
	scanf("%f%f",&x0,&xn);
	
	printf("Enter the number of iterations\n");
	scanf("%d",&n);
	
	h = (xn-x0)/n;
	
	sum1 = (f(x0)+f(xn))/2; 
	
	for(i=1;i<=n-1;i++)
	{
		sum = sum + f(x0+i*h);
    }
	
	ans = h*(sum1+sum);
	printf("Required integral value is %f",ans);
		
}
