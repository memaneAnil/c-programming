#include<iostream>

using namespace std;

template<class T>
T Max(T *arr,int size)
{
    T iMax=arr[0];
    
    for(int i=0;i<size;i++)
    {
        if(iMax<arr[i])
        {
            iMax=arr[i];
        }
    }
    return iMax;
}
int main()
{
    int arr[]={10,89,90,91,50};

    float brr[]={10.20,75.5,47.6,59.1};

    int iMax=Max(arr,5);
    cout<<"Max is : "<<iMax<<"\n";

    float fMax=Max(brr,4);
    cout<<"Max is : "<<fMax<<"\n";

    return 0;
}