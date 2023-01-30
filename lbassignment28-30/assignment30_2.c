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
void DisplayPallindrom(PNODE First)
{
   int iCnt=0,iDigit=0,iRev=0;
   int temp=0;

    while(First!=NULL)
    {
        temp=First->data;
       while((First->data)!=0)
        {
            iDigit=First->data%10;
            iRev=(iRev*10)+iDigit;
            First->data=First->data/10;
        }
        if(iRev==temp)
        {
            printf("Pallindrom elements from LL are :%d\n",iRev);
        }
        
        First=First->next;
        iRev=0;
    }
    
}

int main()
{
    PNODE Head=NULL;
   

    insertFirst(&Head,11);
    insertFirst(&Head,28);
    insertFirst(&Head,17);
    insertFirst(&Head,414);
    insertFirst(&Head,6);
    insertFirst(&Head,89);
    
    DisplayPallindrom(Head);

 
    return 0;
}