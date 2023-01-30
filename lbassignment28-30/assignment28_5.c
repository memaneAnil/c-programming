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
int Minimum(PNODE First)
{   
    int iCnt=0,iMin=First->data;

    while(First!=NULL)
    {
        if(First->data<iMin)
        {
            iMin=First->data;
        }
        First=First->next;
    
    }
    
    return iMin;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    insertFirst(&Head,640);
    insertFirst(&Head,240);
    insertFirst(&Head,20);
    insertFirst(&Head,230);
    insertFirst(&Head,110);

    iRet=Minimum(Head);
   
    printf("Smallest element from linklist is :%d\n",iRet);
   
    return 0;
}