// todo :Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

/*
    Algorithm
        START

            Accept temperature in fahrenheit
            Convert the temperature into celsius
            Display temperature in celsius
        STOP
*/

#include<stdio.h>

float ConvertCelsius(float iValue)
{
    return ((iValue -32)*((float)5/9));
}
int main()
{
    float fTemp = 0.0 ;

    float fRet = 0.0;

    printf("Enter temperature(in Fahrenheit) : \t");
    scanf("%f",&fTemp);
    
    fRet = ConvertCelsius(fTemp);

    printf("Temperature in celsius : %0.4f celsius\n",fRet);

    return 0;
}