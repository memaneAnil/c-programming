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
void displayPrime(PNODE First)
{
   int iCnt=0;

    while(First!=NULL)
    {
        
        for(iCnt=2;iCnt<=(First->data);iCnt++)
        {
            if(((First->data)%iCnt)==0)
            {
                break;
            }
           
        }
        if(First->data==iCnt)
        {
            printf("%d is Prime no \n",First->data);
        }
        First=First->next;
    }
}

int main()
{
    PNODE Head=NULL;

    insertFirst(&Head,11);
    insertFirst(&Head,20);
    insertFirst(&Head,17);
    insertFirst(&Head,41);
    insertFirst(&Head,22);
    insertFirst(&Head,89);

    displayPrime(Head);
    return 0;
}