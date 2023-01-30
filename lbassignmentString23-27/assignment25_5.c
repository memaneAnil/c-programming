#include<stdio.h>

void reverse(char *str)
{
    int i=0, iCnt=0;
    while(*str!='\0')
    {
        iCnt++;
        str++;
        
    }
    
    for(i=iCnt;i>=0;i--)
    {
        printf("%c",*(str));
        str--;
    }
    printf("\n");
}


int main()
{
    char Arr[20];
   
    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);//

    reverse(Arr);

    return 0;
}