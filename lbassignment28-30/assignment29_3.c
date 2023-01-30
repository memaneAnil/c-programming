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
   int iCnt=0,iAdd=0;

    while(First!=NULL)
    {
        if(((First->data)%2)==0)
        {
            iAdd=iAdd+First->data;
        }
        First=First->next;
    }
    return iAdd;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    insertFirst(&Head,11);
    insertFirst(&Head,20);
    insertFirst(&Head,32);
    insertFirst(&Head,41);
    
    iRet=AdditionEven(Head);

    printf("Addition of even no from LL are :%d\n",iRet);
    return 0;
}