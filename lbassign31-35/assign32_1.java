import java.util.Scanner;

class ArrayX
{ 
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }
    protected void Accept()
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter "+Arr.length+"elements");

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println("Enter the element no : "+(iCnt+1)); 
            Arr[iCnt]=sobj.nextInt();
        }

    }
    protected void Display()
    {
        System.out.println("Elements of array are : \n");
        
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println("\n");
    }
}
class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
       super(iSize);
    }

    public int CountDiff()
    {
        int iDigit=0;
        int iEvenCount=0,iOddCount=0;
        
       for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                iEvenCount=iEvenCount+Arr[iCnt];
            }
            else
            {
                iOddCount=iOddCount+Arr[iCnt];
            }
        }
        return (iEvenCount-iOddCount);
    }
}
class assign32_1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
       
        System.out.println("Enter the number of elements in array");

        int iSize=sobj.nextInt();

        MarvellousX obj=new MarvellousX(iSize);

        obj.Accept();

        obj.Display();

        int iRet=obj.CountDiff();

        System.out.println("Difference of sum of even & odd elements is :"+iRet);
    }
    
}