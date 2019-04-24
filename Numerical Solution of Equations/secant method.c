/*
Solve e^x=x correct to 3 significant digits using the Secant Method.
*/
#include<stdio.h>
#include<math.h>

//the given function of x
float f(float x)
{
	return (exp(-x)-x);
}

main()
{
	float x1, x2, x3, e = 0.00001;
	printf("Enter two guess values\n");
	scanf("%f %f",&x1,&x2);
	
	x3 =((x1*f(x2))-(x2*f(x1))) / (f(x2)-f(x1));
	printf("Iteration\n");
	printf("%f\n",x3);
	
	while(fabs(x3-x2)>e)
	{
		x1 = x2;
		x2 = x3;
		x3 =((x1*f(x2))-(x2*f(x1))) / (f(x2)-f(x1));
		printf("%f\n",x3);
	}
	printf("The required root is : %f",x3);
}
