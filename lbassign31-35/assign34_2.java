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

    public int FirstOcc(int iNo)
    {
        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]==iNo)
            {
                break;
            } 
        }
        if(iCnt==(Arr.length))
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
         
    }
}
class assign34_2
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
       
        System.out.println("Enter the number of elements in array");
        int iSize=sobj.nextInt();

        MarvellousX obj=new MarvellousX(iSize);

        obj.Accept();

        System.out.println("Enter no to search ");
        int iValue=sobj.nextInt();

        obj.Display();

        int iRet=obj.FirstOcc(iValue);

        if(iRet==-1)
        {
            System.out.println("Number not occure "+iRet);
        }
        else
        {
            System.out.println("Given no occure at :"+iRet);
        }
        
    }
    
}