#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0000    0000    0000    0001
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool CheckBit(UINT No,UINT ipos)
{
    if(ipos<1 || ipos>32)
    {
        printf("Invalid position,it should be between 1 to 32");
        return false;
    }
    UINT iMask=0x00000001;
    iMask=iMask<<(ipos-1);
    UINT Result=0;

    Result=No & iMask;

    if(Result==iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    UINT Value=0;
    bool bRet=0;
    int ipos=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);

    printf("Please enter the number\n");
    scanf("%d",&ipos);

    bRet=CheckBit(Value,ipos);

    if(bRet==true)
    {
        printf("%dth bit is on\n",ipos);
    }
    else
    {
        printf("%dth bit is off\n",ipos);
    }
    
    return 0;

}