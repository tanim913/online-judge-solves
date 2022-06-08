class Solution {

public:
    int mem[1001][1001];
    int lcs (int i, int j, string &x, string &y)
    {
        if(i<0 || j<0) return 0;
        if(mem[i][j] != -1) return mem[i][j];

        int ans = lcs(i-1, j, x, y);
        ans = max (ans, lcs (i, j-1, x, y));
        ans = max (ans, (lcs(i-1, j-1, x, y) + (x[i] == y[j]) ));


        mem[i][j] = ans;
        return mem[i][j];

    }
    int longestCommonSubsequence(string text1, string text2) {
        memset (mem, -1, sizeof(mem));

        return lcs (text1.size()-1, text2.size()-1, text1, text2 );
    }
};
