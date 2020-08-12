// todo : Write a program which accept distance in kilometre and convert it into meter. (1kilometre = 1000 Meter)

/*
    Algorithm
        START

            Accept distance from user in Kilometer.
            Convert the distance into meter
            Display distance in meter
        STOP
*/

#include<stdio.h>

int DisplayMeter(float iValue1)
{
    return (iValue1*1000);
}
int main()
{
    float fDistance = 0.0 ;

    int dRet = 0.0;

    printf("Enter Distance(in kilometer) : \t");
    scanf("%f",&fDistance);
    
    dRet = DisplayMeter(fDistance);

    printf("Area of Rectangle is : %d meter\n",dRet);

    return 0;
}