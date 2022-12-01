#include<stdio.h>
double SquareMeter(int iNo)
{
    double dSqMeter=0;
    dSqMeter=iNo*0.0929;
    
    return dSqMeter;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in squarefeet\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("%d squarefeet is = %f squaremeter\n",iValue,dRet);
    
    return 0;

}