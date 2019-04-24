/*
Solve x^3-3x+1=0 correct to 3 significant digits using the Bisection Method.
*/

#include<stdio.h>
#include<math.h>

//the given function of x
float fun(float x)
{
	return (pow(x,3)-3*x+1);
	//return (x*pow(2.718,-x)-3*x+7);
}

//function to display iterations
void display(float x1, float x2, float x, float f1, float f2, float f)
{
	printf("%f  %f      %f        %f       %f        %f\n",x1,x2,x,f1,f2,f);
}

main()
{
	float x, x1, x2, f, f1, f2, e=0.0001;
	
	printf("Enter two guess values.\n");
	scanf("%f %f",&x1,&x2);
	x = (x1+x2)/2;
	f = fun(x);
	f1 = fun(x1);
	f2 = fun(x2);
	
	if(f1*f2<0)
	{ 
		int count = 1;
		printf("x1\t  x2\t\tx=(x1+x2)/2\tf(x1)\t\tf(x2)\t\tf(x)\n");
		display(x1,x2,x,f1,f2,f);
		while(fabs(x2-x1)>e)
		{
			if(f<0)
				x2=x;
			else
				x1=x;
			
			f1=fun(x1);
			f2=fun(x2);
			x=(x1+x2)/2;	
			f=fun(x);
			count++;
			display(x1,x2,x,f1,f2,f);
		}//End of while loop
		
		printf("The required solution is %f\n",x);
		printf("Number of iteration is %d",count);
	}
	else
		printf("Re enter guess values");
}//End of main
