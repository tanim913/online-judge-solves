using System;


class Program
{
    public static void Main(string[] args)
    {
      int[] shoe = new int [4];
      int cnt =0;
      var input = Console.ReadLine();
      var split = input.Split(' ');
      for (int i =0; i<4; i++)
      {
          shoe[i] = int.Parse(split[i]);
      }
      Array.Sort(shoe);
      for (int i =0; i<3; i++)
      {
        if(shoe[i] == shoe[i+1]){
          cnt++;
        }
      }
      Console.WriteLine(cnt);

    }
  
  }
   

