
import java.util.Scanner;

class MyArray
{
    
    public void Pattern(int arr1[])
    {
        int iCnt=0;
       
        while(iCnt<arr1.length)
        {
            while(arr1[iCnt]>0)
            {
                System.out.print("*\t");
                arr1[iCnt]=(arr1[iCnt]-1);
            }
            System.out.println();
            iCnt++; 
        }
    }
}
class assign44_5
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        int arr1[]=new int[iSize1];
        
        System.out.println("Enter the elements of array :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.nextInt();
        }

        MyArray mobj=new MyArray();

        mobj.Pattern(arr1);
    }
}