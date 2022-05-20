using System;

class Program
{
    public static void Main(string[] args)
    {

        int n = Convert.ToInt32(Console.ReadLine());

        var input = Console.ReadLine();
        var split = input.Split(' ');
        var f = false;

        for (int i = 0; i < n; i++)
        {

            int ai = Convert.ToInt32(split[i]);

            if (ai == 1)
            {
                f = true;

            }
        }


    }


}