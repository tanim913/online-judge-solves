using System;
using System.Linq;

class Program
{
    public static void Main(string[] args)
    {

        int[] ar = new int[3];
        int[] result = new int[6];


        for (int i = 0; i < 3; i++)
        {
            ar[i] = Convert.ToInt32(Console.ReadLine());
        }

        result[0] = ar[0] + ar[1] * ar[2];
        result[1] = ar[0] * ar[1] + ar[2];
        result[2] = (ar[0] + ar[1]) * ar[2];
        result[3] = ar[0] * (ar[1] + ar[2]);
        result[4] = ar[0] * ar[1] * ar[2];
        result[5] = ar[0] + ar[1] + ar[2];


        Console.WriteLine(result.Max());


    }

}

