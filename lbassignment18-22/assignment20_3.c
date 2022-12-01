// A    A   A   A
// B    B   B   B
// C    C   C   C
// D    D   D   D
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';


    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
        }
        ch++;
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