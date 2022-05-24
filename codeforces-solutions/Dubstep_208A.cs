using System;


class Program
{
    public static void Main(string[] args)
    {

        string x = Console.ReadLine();
        bool f = false;
        for (int i = 0; i < x.Length; i++)
        {
            if (x[i] == 'W' && x[i + 1] == 'U' && x[i + 2] == 'B')
            {
                i += 2;
                if (f)
                {
                    Console.Write(" ");
                }
                f = false;
            }
            else
            {
                f = true;
                Console.Write(x[i]);
            }

        }

    }
}






