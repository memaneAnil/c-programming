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
void DisplayAddition(PNODE First)
{
   int iCnt=0,iDigit=0,iAdd=0;

    while(First!=NULL)
    {

       while((First->data)!=0)
        {
            iDigit=First->data%10;
            iAdd=iAdd+iDigit;
            First->data=First->data/10;
        }
        printf("Addition of digits of elements from LL are :%d\n",iAdd);
        First=First->next;
        iAdd=0;
    }
    
}

int main()
{
    PNODE Head=NULL;
   

    insertFirst(&Head,110);
    insertFirst(&Head,230);
    insertFirst(&Head,20);
    insertFirst(&Head,240);
    insertFirst(&Head,640);
    
    DisplayAddition(Head);

 
    return 0;
}