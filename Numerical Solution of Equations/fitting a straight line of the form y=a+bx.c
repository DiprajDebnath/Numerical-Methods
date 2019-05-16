#include<stdio.h>
#include<math.h>
main()
{
	float x[10], y[10], sx=0, sy=0, sxy=0, sxx=0, a, b;
	int n, i;
	
	printf("Enter the number of data\n");
	scanf("%d",&n);
	
	printf("Enter the data\n");
	for(i=0;i<n;i++)
	{
		scanf("%f %f", &x[i], &y[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sx += x[i];
		sy += y[i];
		sxy += x[i] * y[i];
		sxx += x[i] * x[i];
	}
	
	a = (sx*sxy-sxx*sy)/(sx*sx-n*sxx);
	b = (sx*sy-n*sxy)/(sx*sx-n*sxx);
	
	printf("The straight line is y=%.2f+%.2fx",a,b);
	
}
