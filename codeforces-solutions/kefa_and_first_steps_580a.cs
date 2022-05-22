using System;


class Program
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        int[] ar = new int[n];
        int cnt = 1, max = Int32.MinValue;
        var input = Console.ReadLine();
        var split = input.Split(' ');

        for (int i = 0; i < n; i++)
        {
            ar[i] = Convert.ToInt32(split[i]);
        }

        if (n == 1)
        {
            Console.WriteLine("1");
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i] <= ar[i + 1])
                {
                    cnt++;
                }
                else
                {
                    cnt = 1;

                }
                if (cnt > max)
                {
                    max = cnt;
                }
            }
            Console.WriteLine(max);
        }
    }

}


