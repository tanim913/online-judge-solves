using System;

class Program
{
    public static void Main(string[] args)
    {

        long n = Convert.ToInt32(Console.ReadLine());
        if (n % 2 == 0)
        {
            Console.WriteLine(n / 2);
        }
        if (n % 2 == 1)
        {
            Console.WriteLine(-1 * (n / 2 + 1));
        }

    }


}