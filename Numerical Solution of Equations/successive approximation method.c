/*
Solve x^3+4x-1=0 correct to 3 significant digits using the Method of Successive Approximation.
*/
#include<stdio.h>
#include<math.h>

float g(float x)
{
	return (1/(x*x+4));
}

main()
{
	float x1, x2, e=0.0001;
	printf("Enter the guess value\n");
	scanf("%f",&x1);
	
	x2 = g(x1);
		printf("%f\n",x2);
	
	while(fabs(x2-x1)>e)
	{
		x1 = x2;
		x2 = g(x1);
		printf("%f\n",x2);
	}
	printf("The root is %f",x2);
}
