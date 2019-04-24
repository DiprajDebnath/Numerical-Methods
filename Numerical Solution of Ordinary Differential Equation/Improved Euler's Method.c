/*
  Improved Euler's Method
*/
#include<stdio.h>
#include<math.h>

//function of dy/dx
float f(float x, float y)
{
    return (x+y);
}

main()
{
    int i;
    float x0, x1, h, y1, y0, y11, xn;
    /*
     h = step size
     y(x0)=y0, where x0 and y0 are initial values
    */
    printf("Enter the value of x0 and y0.\n");
    scanf("%f %f", &x0, &y0);
    
    printf("Enter the value of step length h :");
    scanf("%f",&h);
    
    printf("Enter the value of Xn for which y is required.\n");
    scanf("%f",&xn);
    
    printf("When x%d=%f\ty%d=%f \n",i,x0,i,y0);
    i++;

    while(x0 <= xn)
    {
        y1 = y0 + h * f(x0, y0);
        x1 = x0 + h;
        y11 = y0 + (h/2) * (f(x0, y0) + f(x1,y1));
        x0 = x1;
        y1 = y11;
        y0 = y1;
        printf("When x%d=%f\ty%d=%f \n",i,x0,i,y0);
        i++;
    }
}
    
