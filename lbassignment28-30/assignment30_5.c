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
void DisplayLarge(PNODE First)
{
   int iCnt=0,iDigit=0,iLarge=0;
   

    while(First!=NULL)
    {
        
       while((First->data)!=0)
        {
            iDigit=First->data%10;
            if(iDigit>iLarge)
            {
                iLarge=iDigit;
            }
            First->data=First->data/10;
        }
        
        printf("Largest digit of elements from LL are :%d\n",iLarge);
        
        First=First->next;
        iLarge=0;
    }
    
}

int main()
{
    PNODE Head=NULL;
   

    insertFirst(&Head,11);
    insertFirst(&Head,250);
    insertFirst(&Head,532);
    insertFirst(&Head,419);
    
    DisplayLarge(Head);

 
    return 0;
}