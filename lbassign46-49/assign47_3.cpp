#include<iostream>

using namespace std;

template<class T>
T AddN(T *arr,int size)
{
    T iSum=0;
    cout<<iSum;
    for(int i=0;i<size;i++)
    {
        iSum=iSum+arr[i];
    }
    return iSum;
}
int main()
{
    int arr[]={10,20,30,40,50};

    float brr[]={10.20,3.5,4.6,5.1};

    int iSum=AddN(arr,5);
    cout<<"Addition is : "<<iSum<<"\n";

    float fSum=AddN(brr,4);
    cout<<"Addition is : "<<fSum<<"\n";

    return 0;
}