#include<iostream>
 
using namespace std;

template<class T>
void Reverse(T *arr,int size)
{
    int iStart=0;
    int iEnd=size-1;
    T temp=0;

    while(iStart<iEnd)
    {
        temp=arr[iStart];
        arr[iStart]=arr[iEnd];
        arr[iEnd]=temp;

        iStart++;
        iEnd--;
    }
    for(int iCnt=0;iCnt<size;iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }
    cout<<"\n";   
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};

    Reverse(arr,9);

    float brr[]={4.0f,2.0f,3.0f,1.90f,3.0f,4.22f,1.11f,4.0f,1.0f};

    Reverse(brr,9);

    char crr[]={'c','b','z','x','c','a','x','b'};

    Reverse(crr,8);

    return 0;
}