using System;

class Program {
  public static void Main (string[] args) {
    int n = Convert.ToInt32(Console.ReadLine());
    
    string[] values = new string[n];
    
    for (int i = 0; i<n; i++){
      values [i] = Console.ReadLine();
    }
    
    for(int j = 0; j<n ; j++)
    {
      string[] recValues= values[j].Split(' ');
      int a = Convert.ToInt32(recValues[0]);
      int b = Convert.ToInt32(recValues[1]);
      int area = getMinArea(a,b);  
      Console.WriteLine(area);
      
    }
  }

  static int getMinArea(int a,int b)
  {
    int side = 0;
    int len = Math.Max(a,b);
    int wid = Math.Min(a,b);
    if(len>2*wid)
      {
        side = len;
      }
      else{
        side = wid*2;
      }
    return side * side;
  }
}