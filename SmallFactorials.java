import java.math.*;
import java.io.*;
class Main
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t;
        t=Integer.parseInt(br.readLine());
        BigInteger p;
        while(t>0)
        {
            int n;
            n=Integer.parseInt(br.readLine());
            p=new BigInteger("1");
            for(int i=2;i<=n;i++)
            p=p.multiply(new BigInteger(""+i));
            System.out.println(p);
            t--;
        }
    }
}
