#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("Your exam at 7 AM\n");
            break;
        case 'b':
        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;
        case 'c':
        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;
        case 'd':
        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;
    }

}
int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    
}