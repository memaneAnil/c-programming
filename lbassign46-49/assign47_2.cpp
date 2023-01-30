#include<iostream>

using namespace std;

template<class T>
T Max(T no1,T no2,T no3)
{
    T max=no1;
    if(no1>no2 && no1>no3)
    {
        max=no1;
    }
    else if (no2>no1 && no2>no3)
    {
        max=no2;
    }
    else
    {
        max=no3;
    }  
    return max;
}
int main()
{
    int iRet=Max(10,30,20);

    cout<<"Max is : "<<iRet<<"\n";

    iRet=Max(50,30,20);

    cout<<"Max is : "<<iRet<<"\n";

    iRet=Max(10,30,40);

    cout<<"Max is : "<<iRet<<"\n";

    float fRet=Max(11.70,3.90,25.80);

    cout<<"Max is : "<<fRet<<"\n";

    return 0;
}