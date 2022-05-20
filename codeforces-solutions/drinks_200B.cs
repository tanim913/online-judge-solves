using System;

class Program
{
    public static void Main(string[] args)
    {

        int n = Convert.ToInt32(Console.ReadLine());

        double sum = 0.0;


        var input = Console.ReadLine();
        var split = input.Split(' ');

        for (int i = 0; i < n; i++)
        {
            double element = Convert.ToDouble(split[i]);
            sum += element;
        }
        Console.WriteLine(sum / n);


    }


}