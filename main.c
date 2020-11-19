#include "myMath.h"
#include <stdio>
double main(double x)
{
double b=0;
printf("enter x:\n");
scanf("%lf",&x);
b= sub(add(Exponent((int)x),power(x,3),2);
printf("f(x)=e^x+x^3-2=");
printf("%.4lf\n",b);
b= sub(add(3,x),mul(power(x,2),2));
printf("f(x)=3x+2x^2=");
printf("%.4lf\n",b);
b=div(mul(4,power(x,3)),sub(5,mul(2,x)));
printf("f(x)=(4x^3)/5-2x=");
printf("%.4lf\n",b);
}
