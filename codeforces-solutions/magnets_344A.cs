using System;

class Program
{
    public static void Main(string[] args)
    {

        int n = Convert.ToInt32(Console.ReadLine());
        int cnt = 1;

        int[] list = new int[n];



        for (int i = 0; i < n; i++)
        {
            list[i] = Convert.ToInt32(Console.ReadLine());
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (list[i] != list[i + 1])
            {
                cnt++;
            }
        }


        Console.WriteLine(cnt);



    }


}