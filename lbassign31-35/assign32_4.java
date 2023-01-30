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

    public void DisplayX()
    {
        System.out.println("Numbers which are divisible by 5 & 3 are :");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]%5==0) && (Arr[iCnt]%3==0))
            {
                System.out.println(Arr[iCnt]);
            } 
        } 
    }
}
class assign32_4
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
       
        System.out.println("Enter the number of elements in array");

        int iSize=sobj.nextInt();

        MarvellousX obj=new MarvellousX(iSize);

        obj.Accept();

        obj.Display();

        obj.DisplayX();

    }
    
}
