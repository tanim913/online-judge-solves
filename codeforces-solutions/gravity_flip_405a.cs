using System;


class Program
{
    public static void Main(string[] args)
    {



        int n = Convert.ToInt32(Console.ReadLine());
        int[] ar = new int[n];

        var input = Console.ReadLine();
        var split = input.Split(' ');

        for (int i = 0; i < n; i++)
        {
            ar[i] = int.Parse(split[i]);
        }

        Array.Sort(ar);
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                Console.WriteLine(ar[i]);
            }
            else
            {
                Console.Write(ar[i] + " ");
            }
        }




    }

}

