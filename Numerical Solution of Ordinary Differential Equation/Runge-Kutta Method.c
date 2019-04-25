/*
 Runge-Kutta Method
*/
#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
	return (x+y);
	//return ((y*y-x*x)/(y*y+x*x));
}

main()
{
	float x0, y0, x1, y1, h, xn, k1, k2, k3, k4;

	 printf("Enter the value of x0 and y0.\n");
    scanf("%f %f", &x0, &y0);

    printf("Enter the value of step length h :");
    scanf("%f",&h);

    printf("Enter the value of Xn for which y is required.\n");
    scanf("%f",&xn);

    while(x0 < xn)
    {
    	k1 = h * f(x0, y0);
    	printf("k1 = %f\n",k1);
    	
    	k2 = h * f(x0+h/2, y0+k1/2);
    	printf("k2 = %f\n",k2);
    	
    	k3 = h * f(x0+h/2, y0+k2/2);
    	printf("k3 = %f\n",k3);
    	
    	k4 = h * f(x0+h, y0+k3);
    	printf("k4 = %f\n",k4);
    	
    	y1 = y0 + (1/6.0)*(k1 + 2*k2 + 2*k3 + k4);
    	
    	x1 = x0+h;
    	x0 = x1;
    	y0 = y1;
    	
    	printf("When x=%f \t y=%f \n",x0,y0);
	}
}
