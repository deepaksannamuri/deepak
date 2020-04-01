import java.io.*;
import java.util.*;
class Big
{
public static void main(String args[])
{
int i,j;
i=Integer.parseInt(args[0]);
j=Integer.parseInt(args[1]);
if(i>j)
{
System.out.println(i+" i is largest number");
}
else if(j>i)
{
System.out.println(j+" j is largest number");
}
else
{
System.out.println("check the input");
}
}
}