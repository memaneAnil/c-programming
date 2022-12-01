// A    B   C   D
// a    b   c   d
// A    B   C   D
// a    b   c   d
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';

    for(i=1;i<=iRow;i++)
    {
        if(i%2==0)
        {
            ch='a';
        }
        else
        {
            ch='A';
        }
        
        for(j=1;j<=iCol;j++,ch++)
        {

            printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iRow=0,iCol=0;

    printf("Enter the number of rows\n");
    scanf("%d",&iRow);
    printf("Enter the number of columns\n");
    scanf("%d",&iCol);

    Display(iRow,iCol);

    return 0;
}