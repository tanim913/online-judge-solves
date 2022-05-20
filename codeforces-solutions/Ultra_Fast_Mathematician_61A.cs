using System;

class Program
{
    public static void Main(string[] args)
    {

        var input = Console.ReadLine();
        var input2 = Console.ReadLine();
        string x = "";


        for (int i = 0; i < input.Length; i++)
        {
            if (input[i] == input2[i])
            {
                x += '0';

            }
            else
            {
                x += '1';
            }
        }

        Console.WriteLine(x);



    }


}