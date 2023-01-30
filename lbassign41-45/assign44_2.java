
import java.util.Scanner;

class MyArray
{  
    public int CountVowels(char arr1[])
    {
        int iCnt=0,iCounter=0;

        while(iCnt<arr1.length)
        {
            arr1[iCnt]=Character.toLowerCase(arr1[iCnt]);
            if(arr1[iCnt]=='a'||arr1[iCnt]=='e'||arr1[iCnt]=='i'||arr1[iCnt]=='o'||arr1[iCnt]=='u')
            {
                iCounter++;
            }
            iCnt++;
        } 
        return iCounter;
    }
}
class assign44_2
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        char arr1[]=new char[iSize1];
        
        System.out.println("Enter the characters :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.next().charAt(0);
        }

        MyArray mobj=new MyArray();

        int iRet=mobj.CountVowels(arr1);
        System.out.println("Count of Vowel is :"+iRet);
    }
}