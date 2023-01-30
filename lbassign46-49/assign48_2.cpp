#include<iostream>
 
using namespace std;

template<class T>
int Frequency(T *arr,int size,T no)
{
    int iFreq=0;
    for(int iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt]==no)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet=Frequency(arr,9,10);

    cout<<"Frequency of no is : "<<iRet<<"\n";

    float brr[]={4.0f,2.0f,3.0f,1.0f,3.0f,4.0f,1.0f,4.0f,1.0f};

    iRet=Frequency(brr,9,4.0f);

    cout<<"Frequency of no is : "<<iRet<<"\n";

    char crr[]={'c','b','c','a','c','a','c','b'};

    iRet=Frequency(crr,8,'c');

    cout<<"Frequency of char is : "<<iRet<<"\n";

    return 0;
}