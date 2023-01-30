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
int Maximum(PNODE First)
{   
    int iCnt=0,iMax=First->data;

    while(First!=NULL)
    {
        if(First->data>iMax)
        {
            iMax=First->data;
        }
        First=First->next;
    
    }
    
    return iMax;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    insertFirst(&Head,240);
    insertFirst(&Head,320);
    insertFirst(&Head,230);
    insertFirst(&Head,110);

    iRet=Maximum(Head);
   
    printf("Largest element from linklist is :%d\n",iRet);
   
    return 0;
}