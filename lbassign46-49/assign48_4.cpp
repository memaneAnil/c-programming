#include<iostream>
 
using namespace std;

template<class T>
int SearchLast(T *arr,int size,T no)
{
    int iCnt=0;
    int fOccur=0;

    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt]==no)
        {
            fOccur=iCnt;
        }
    }
    if(fOccur==0)
    {
        return -1;
    }
    else
    {
        return fOccur+1;
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,3,40,10};

    int iRet=SearchLast(arr,9,3);

    cout<<"First occurance of no is : "<<iRet<<"\n";

    float brr[]={4.0f,2.0f,3.0f,1.90f,3.0f,4.22f,1.11f,4.0f,1.0f};

    iRet=SearchLast(brr,9,1.90f);

    cout<<"First occurance of no is : "<<iRet<<"\n";

    char crr[]={'c','b','z','x','c','a','x','b'};

    iRet=SearchLast(crr,8,'z');

    cout<<"First occurance of char is : "<<iRet<<"\n";

    return 0;
}