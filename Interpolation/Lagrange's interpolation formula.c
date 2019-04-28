/*
 Lagrange's interpolation formula
*/
#include<stdio.h>
#include<math.h>
main()
{
	float x[10], y[10], sum=0, product, ax;
	int i, j, n;
	
	printf("Enter the number of  data\n");
	scanf("%d",&n);
	
	printf("Enter the data [x, f(x)]\n");
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&x[i], &y[i]);
	}
	
	printf("Enter the value of interpolation\n");
	scanf("%f",&ax);
	
	for(i=0;i<n;i++)
	{
		product = 1;
		for(j=0;j<n;j++)
		{
			if(j != i)
				product = product * (ax-x[j])/(x[i]-x[j]);
		}
		sum = sum + product * y[i];
	}
	
	printf("The required value is %f",sum);
}
