using System;

class Program
{
    public static void Main(string[] args)
    {

        var input = Console.ReadLine();
        var split = input.Split(' ');
        int n = Convert.ToInt32(split[0]);
        int h = Convert.ToInt32(split[1]);
        int wid = n;

        var input2 = Console.ReadLine();
        var split2 = input2.Split(' ');
        for (int i = 0; i < n; i++)
        {
            var ai = Convert.ToInt32(split2[i]);
            if (ai > h)
            {
                wid = wid + 1;
            }

        }


        Console.WriteLine(wid);



    }


}