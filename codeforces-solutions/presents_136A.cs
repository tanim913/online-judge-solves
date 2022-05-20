using System;

class Program
{
    public static void Main(string[] args)
    {

        int n = Convert.ToInt32(Console.ReadLine());

        int[] list = new int[n];

        var input = Console.ReadLine();
        var split = input.Split(' ');

        for (int i = 0; i < n; i++)
        {
            var ai = Convert.ToInt32(split[i]);
            list[ai - 1] = i + 1;

        }


        for (int i = 0; i < n; i++)
        {
            Console.WriteLine(list[i]);
        }


    }


}