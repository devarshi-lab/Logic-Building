// todo :Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

/*
    Algorithm
        START

            Accept area in square feet
            Convert the area in square meter
            Display area in square meter
        STOP
*/

#include<stdio.h>

double FeettoMeter(float iValue)
{
    return (iValue*0.0929);
}
int main()
{
    float fArea = 0.0 ;

    double dRet = 0.0;

    printf("Enter the area (in square feet) : \t");
    scanf("%f",&fArea);
    
    dRet = FeettoMeter(fArea);

    printf("Area in square meter is : %lf sq. meter\n",dRet);

    return 0;
}