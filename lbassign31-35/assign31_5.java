import java.util.Scanner;

class StringDemo
{
    public void Reverse(String s)
    {
        char arr[]=s.toCharArray();
        int iEnd=s.length()-1;
        int iStart=0;
        char Temp;
        
        while(iStart<iEnd)
        {
            Temp=arr[iStart];
            arr[iStart]=arr[iEnd];
            arr[iEnd]=Temp;

            iStart++;
            iEnd--;
        }
        System.out.println(arr);
    }
}
class assign31_5
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        obj.Reverse(str);
    }
}