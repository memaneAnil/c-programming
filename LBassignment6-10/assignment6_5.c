#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float fAns=0.0;
    if(iNo1==0||iNo2==0)
    {
        return 0.0;
    }
    else
    {
        fAns=(float)iNo2/iNo1*100;
    }  
        
    return fAns;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;
    

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    if(fRet!=0.0)
    {
        printf("Percentage is :%f\n",fRet);
    } 
    else
    {
        printf("Enter valid number:\n");
    }   
    
        
    return 0;

}