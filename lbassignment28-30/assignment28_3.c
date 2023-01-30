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
int Addition(PNODE First)
{   
    int iCnt=0,iAdd=0;

    while(First!=NULL)
    {
        iAdd=iAdd+First->data;
        
        First=First->next;
    
    }
    
    return iAdd;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    insertFirst(&Head,40);
    insertFirst(&Head,30);
    insertFirst(&Head,20);
    insertFirst(&Head,10);

    iRet=Addition(Head);
   
    printf("Addition of Elements in linklist is :%d\n",iRet);
   
    return 0;
}