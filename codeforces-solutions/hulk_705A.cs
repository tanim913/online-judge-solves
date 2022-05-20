using System;

class Program
{
    public static void Main(string[] args)
    {

        var input = Convert.ToInt32(Console.ReadLine());
        for (int i = 1; i < input; i++)
        {
            if (i % 2 == 1)
            {
                Console.Write("I hate that ");
            }
            if (i % 2 == 0)
            {
                Console.Write("I love that ");
            }
        }
        if (input % 2 == 1)
        {
            Console.Write("I hate it");
        }

        if (input % 2 == 0)
        {
            Console.Write("I love it");
        }







    }


}