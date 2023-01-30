#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;



void insertFirst(PPNODE First,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }

}
int AdditionEven(PNODE First)
{
   int iCnt=0,iMax1=First->data,iMax2=First->data;

    while(First!=NULL)
    {
        if(((First->data)>iMax1))
        {
            iMax1=First->data;    
        }
        else if(iMax2<iMax1&&First->data>iMax2)
        {
            iMax2=First->data;
        }
        
        First=First->next;
    }
    return iMax2;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    insertFirst(&Head,110);
    insertFirst(&Head,230);
    insertFirst(&Head,320);
    insertFirst(&Head,240);
    
    iRet=AdditionEven(Head);

    printf("Second max from LL is :%d\n",iRet);
    return 0;
}