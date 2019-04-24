/*
Solve x^3-3x+1=0 correct to 3 significant digits using the Regular Falsi Method.
*/
#include<stdio.h>
#include<math.h>
float fun(float x)
{
	return(x*x*x-3*x+1);
	//return (x*pow(2.718,-x)-3*x+7);
}

main()
{
	float x,x1,x2,f,f1,f2,e=0.0001;
	
	printf("Enter two guess values\n");
	scanf("%f %f",&x1,&x2);
	x=(x1+x2)/2;
	f=fun(x);
	f1=fun(x1);
	f2=fun(x2);
	
	if(f1*f2<0)
	{
		while(fabs(f)>e)
		{
			if(f<0)
				x2=x;
			else
				x1=x;
			
			f1=fun(x1);
			f2=fun(x2);
			x=((x1*f2)-(x2*f1))/(f2-f1);	
			f=fun(x);
		}
		printf("The required solution is %f",x);
	}
	else
		printf("Re enter guess values");
}
