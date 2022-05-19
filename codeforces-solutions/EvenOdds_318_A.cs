using System;

class Program
{
    public static void Main(string[] args)
    {

        var input = Console.ReadLine();
        var split = input.Split(' ');
        long result = 0;
        long n = Convert.ToInt64(split[0]);
        long k = Convert.ToInt64(split[1]);
        long totalOdds = Convert.ToInt64(Math.Ceiling(n / 2d));

        if (k <= totalOdds)
        {
            result = 2 * k - 1;
        }
        else
        {
            result = (k - totalOdds) * 2;
        }

        Console.WriteLine(result);

    }


}