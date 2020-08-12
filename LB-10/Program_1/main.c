// todo : 1.Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

/*
    Algorithm
        START

            Accept radius of circle from user as radius.
            Calculate area using formula PI*r^2
            Display area
        STOP
*/

#include<stdio.h>
#define PI 3.14

double area(float iValue)
{
    return (PI*(iValue*iValue));
}
int main()
{
    float fRadius = 0.0;

    double dRet = 0.0;

    printf("Enter radius of circle : \t");
    scanf("%f",&fRadius);

    dRet = area(fRadius);

    printf("Area of circle is : %0.4lf\n",dRet);

    return 0;
}