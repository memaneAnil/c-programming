#include<stdio.h>


int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1==0||iNo2==0||iNo3==0)
    {
        return 0;
    }
    else
    {
        return iNo1*iNo2*iNo3;
    }
    
}

int main()
{
    int iValue1=0,iValue2=0,iValue3;
    int iRet=0;
    

    printf("Please enter three numbers\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
        
    printf("Multification is :%d\n",iRet);
        
    return 0;

}