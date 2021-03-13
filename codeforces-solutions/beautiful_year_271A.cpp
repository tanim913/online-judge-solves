#include <bits/stdc++.h>
using namespace std;

//bool areDistinct(vector<int> arr)
//{
//    int n = arr.size();
//
//    unordered_set<int> s;
//    for (int i = 0; i < n; i++)
//    {
//        s.insert(arr[i]);
//    }
//
//    return (s.size() == arr.size());
//}
int main ()
{


    int year;
    cin >> year;

    while (true)
    {
        year ++;

        int a = year% 10;
        int b = year/ 10 % 10;
        int c = year/ 100 % 10;
        int d = year/ 1000 % 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << year <<endl;
            break;
        }


    }
    return 0;

}
