// todo : Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

/*
    Algorithm
        START

            Accept height and width of Rectangle from user.
            Calculate area using formula length*width
            Display area
        STOP
*/

#include<stdio.h>

double AreaRectangle(float iValue1,float iValue2)
{
    return (iValue1*iValue2);
}
int main()
{
    float fLength = 0.0 , fWidth = 0.0;

    double dRet = 0.0;

    printf("Enter Length of Rectangle : \t");
    scanf("%f",&fLength);
    printf("Enter height of Rectangle : \t");
    scanf("%f",&fWidth);


    dRet = AreaRectangle(fLength,fWidth);

    printf("Area of Rectangle is : %0.3lf\n",dRet);

    return 0;
}