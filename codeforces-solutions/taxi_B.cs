using System;


class Program
{
    public static void Main(string[] args)
    {

        int cnt = 0;
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

        int n = Convert.ToInt32(Console.ReadLine());
        int[] ar = new int[n];

        var input = Console.ReadLine();
        var split = input.Split(' ');

        for (int i = 0; i < n; i++)
        {
            ar[i] = int.Parse(split[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 4) c4++;
            if (ar[i] == 3) c3++;
            if (ar[i] == 2) c2++;
            if (ar[i] == 1) c1++;
        }

        cnt = c4;
        while (c3 != 0 && c1 != 0)
        {
            c3--;
            c1--;
            cnt++;
        }
        if (c3 != 0 && c1 == 0)
        {
            cnt += c3;
            c3 = 0;
        }
        cnt = cnt + (c2 / 2);
        if (c2 % 2 == 1)
        {
            if (c1 <= 2)
            {
                cnt = cnt + 1;
                c1 = 0;
                c2 = 0;
            }
            else
            {
                c1 = c1 - 2;
                cnt = cnt + 1;
                c2 = 0;
            }
        }
        if (c1 != 0)
        {
            cnt = cnt + (c1 / 4);
            if (c1 % 4 != 0)
            {
                cnt = cnt + 1;
            }
        }
        Console.WriteLine(cnt);

    }

}

