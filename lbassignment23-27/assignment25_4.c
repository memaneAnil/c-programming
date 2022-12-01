#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char *str)
{
    
    while(*str!='\0')
    {
        printf("%c\n",*str);
        if(*str>='A'&& *str<='Z')
        {
            *str=*str+32;     
        }
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            break;
        }
        str++;
    }
    if(*str!='\0')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{
    char Arr[20];
    bool bRet=false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);//

    bRet=ChkVowel(Arr);

    if(bRet==true)
    {
        printf("string contain vowel\n");
    }
    else
    {
        printf("string not contain vowel\n");
    }
    

    return 0;
}