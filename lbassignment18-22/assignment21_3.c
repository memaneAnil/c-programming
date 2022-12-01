// a    b   c   d   e
// 1    2   3   4   5
// a    b   c   d   e
// 1    2   3   4   5
// a    b   c   d   e

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='a';
    int k=0;

    
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1,k=1,ch='a';j<=iCol;j++,k++,ch++)
        {
            if(i%2!=0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",k);
            }
            
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