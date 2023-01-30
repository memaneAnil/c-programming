#include<iostream>
 
using namespace std;

template<class T>
void Display(T value,int size)
{
    for(int iCnt=0;iCnt<size;iCnt++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}