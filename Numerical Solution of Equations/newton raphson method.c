/*
Solve x^4-x=10 correct to 3 significant digits using the Newton Raphson Method.
*/
#include<stdio.h>
#include<math.h>

//the given function
float f(float x)
{
	return (pow(x,4)-x-10);
}

//differentiated form of the given function
float fd(float x)
{
	return (4*pow(x,3)-1);
}

main()
{
	float x1,x2,e=0.00001;
	
	printf("Enter the guess values.\n");
	scanf(" %f",&x1);
   
    x2 = x1-(f(x1)/fd(x1));
    printf("Iteration\n");
    printf("%f \n",x2);
    while(fabs(x2-x1)>e)
    {
    	x1 = x2;
    	x2 = x1-(f(x1)/fd(x1));
    	printf("%f \n",x2);
	}
	
	printf("The root is : %f",x2);
}
