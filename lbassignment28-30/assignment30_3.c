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
void DisplayProduct(PNODE First)
{
   int iCnt=0,iDigit=0,iMult=1;
   

    while(First!=NULL)
    {
        
       while((First->data)!=0)
        {
            iDigit=First->data%10;
            if(iDigit!=0)
            {
                iMult=iMult*iDigit;
            }
            
            First->data=First->data/10;
        }
        
        printf("Product of all digit of elements from LL are :%d\n",iMult);
        
        First=First->next;
        iMult=1;
    }
    
}

int main()
{
    PNODE Head=NULL;
   

    insertFirst(&Head,11);
    insertFirst(&Head,20);
    insertFirst(&Head,32);
    insertFirst(&Head,41);
    
    DisplayProduct(Head);

 
    return 0;
}