#include<stdio.h>


void Number(int iNo)
{
    
        if(iNo<50)
        {
            printf("small\n");
        }
        else if(iNo>50&&iNo<100)
        {
            printf("medium\n");
        }
        else if(iNo>100)
        {
            printf("greater\n");
        }
     
    
}

int main()
{
    int iValue=0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Number(iValue);
       
    return 0;

}