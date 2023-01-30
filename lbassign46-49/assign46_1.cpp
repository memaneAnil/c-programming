#include<iostream>

using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int value=10)
        {
            cout<<"Inside constructor\n";
            this->size=value;
            this->Arr=new int[size];
        }
        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";
            this->size=ref.size;
            this->Arr=new int[this->size];

            for(int i=0;i<size;i++)
            {
                this->Arr[i]=ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside the destructor \n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();

};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are \n";

    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}
class ArrSearch : public Array
{
    public:
        ArrSearch(int no=10):Array(no)
        {

        }
        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}
int ArrSearch::Frequency(int value)
{
    int iCnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch::SearchLast(int value)
{
    int iCnt=0,i=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            iCnt=i;
        }
    }
    if(iCnt==0)
    {
        return -1;
    }
    else
    {
        return iCnt+1;
    }
}
int ArrSearch::EvenCount()
{
    int iCnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]%2==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch::OddCount()
{
    int iCnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]%2!=0)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch::SumAll()
{
    int iSum=0;
    for(int i=0;i<size;i++)
    {
       iSum=iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    ArrSearch sobj(5);

    sobj.Accept();
    sobj.Display();

    int iRet=sobj.Frequency(11);

    cout<<"Frequency is : "<<iRet<<"\n";

    iRet=sobj.SearchFirst(11);

    cout<<"First occurance is : "<<iRet<<"\n";

    iRet=sobj.SearchLast(11);

    cout<<"Last occurance is : "<<iRet<<"\n";

    iRet=sobj.EvenCount();

    cout<<"Even count is : "<<iRet<<"\n";

    iRet=sobj.OddCount();

    cout<<"Odd count is : "<<iRet<<"\n";

    iRet=sobj.SumAll();

    cout<<"Sum of element is : "<<iRet<<"\n";

    return 0;
}
