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
int Count(PNODE First)
{
    int iCnt=0;
    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
}
int SearchLastOcc(PNODE First,int no)
{   
    int iCnt=0,temp=0,count=0;
    count=Count(First);

    iCnt=1;
   
    while(First!=NULL)
    {
        if(First->data==no)
        {
            temp=iCnt;
        }
        iCnt++;
        First=First->next;
        
    }
    
    if(iCnt==count+1)
    {
        return -1;
    }
    else
    {
        return temp;
    }
}


int main()
{
    PNODE Head=NULL;
    int iRet=0;

    insertFirst(&Head,70);
    insertFirst(&Head,30);
    insertFirst(&Head,50);
    insertFirst(&Head,40);
    insertFirst(&Head,30);
    insertFirst(&Head,20);
    insertFirst(&Head,10);

    iRet=SearchLastOcc(Head,30);
   if(iRet!=-1)
    {
        printf("Element occure at :%d\n",iRet);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}