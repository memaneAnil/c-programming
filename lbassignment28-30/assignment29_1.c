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
void displayPerfect(PNODE First)
{
   int iCnt=0,iSum=0;

    while(First!=NULL)
    {
       iSum=0; 
        for(iCnt=1;iCnt<=(First->data/2);iCnt++)
        {
            if(((First->data)%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
           
        }
        if(First->data==iSum)
        {
            printf("%d is perfect no \n",iSum);
        }
        First=First->next;
    }
}

int main()
{
    PNODE Head=NULL;

    insertFirst(&Head,89);
    insertFirst(&Head,6);
    insertFirst(&Head,41);
    insertFirst(&Head,17);
    insertFirst(&Head,28);
    insertFirst(&Head,11);

    displayPerfect(Head);
    return 0;
}