
import java.util.Scanner;

class MyArray
{
    
    public void ReverseArray(int arr1[])
    {
        int digit=0,iCnt=0,temp=0;
       
        while(iCnt<arr1.length)
        {
            while(arr1[iCnt]!=0)
            {
                digit=arr1[iCnt]%10;
                temp=digit+temp*10;
                arr1[iCnt]=arr1[iCnt]/10; 
            }
            arr1[iCnt]=temp;
            System.out.println(arr1[iCnt]);
            iCnt++;
            temp=0;
        }
        System.out.println();
        for(iCnt=0;iCnt<arr1.length;iCnt++)
        {
            System.out.println(arr1[iCnt]);
        }
    }
}
class assign43_1
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

        mobj.ReverseArray(arr1);
    }
}