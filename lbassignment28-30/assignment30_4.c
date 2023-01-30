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
void DisplaySmall(PNODE First)
{
   int iCnt=0,iDigit=0,iSmall=10;
   

    while(First!=NULL)
    {
        
       while((First->data)!=0)
        {
            iDigit=First->data%10;
            if(iDigit<iSmall)
            {
                iSmall=iDigit;
            }
            First->data=First->data/10;
        }
        
        printf("Smallest digit of elements from LL are :%d\n",iSmall);
        
        First=First->next;
        iSmall=10;
    }
    
}

int main()
{
    PNODE Head=NULL;
   

    insertFirst(&Head,11);
    insertFirst(&Head,250);
    insertFirst(&Head,532);
    insertFirst(&Head,415);
    
    DisplaySmall(Head);

 
    return 0;
}