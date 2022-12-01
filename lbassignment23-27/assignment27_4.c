#include<stdio.h>


int LastChar(char *str,char ch)
{
    int iCnt=0,temp=0;
   while(*str!='\0')
    {
        
        if(*str==ch)
        {
            temp=iCnt;
            
        }
        iCnt++;
        str++;
    }
    return temp;
    
}

int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the char to find\n");
    scanf(" %c",&cValue);

    iRet=LastChar(Arr,cValue);

    printf("Character location is :%d\n",iRet);
    
}