#include<iostream>

using namespace std;

template<class T>
T Min(T *arr,int size)
{
    T iMin=arr[0];
    
    for(int i=0;i<size;i++)
    {
        if(iMin>arr[i])
        {
            iMin=arr[i];
        }
        //cout<<iMin<<"\t";
    }
    return iMin;
}
int main()
{
    int arr[]={10,89,90,7,50};

    float brr[]={10.20,75.5,9.6,59.1};

    int iMin=Min(arr,5);
    cout<<"Min is : "<<iMin<<"\n";

    float fMin=Min(brr,4);
    cout<<"Min is : "<<fMin<<"\n";

    return 0;
}