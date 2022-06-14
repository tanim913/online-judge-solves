class Solution {
public:
    bool isValid(string s) {
       unordered_map <char, int> m = { {'[',-1},{'{',-2},{'(',-3}, {']',1}, {'}',2}, {')',3} };
    stack <char> st;

    for (char braket : s)
    {
        if (m[braket] < 0)
        {
            st.push(braket);
        }
        else
        {
            if (st.empty()) /// if in the 1st case there is no opening bracket
            {
                return false;
            }

            char top = st.top();
            st.pop();

            if (m[braket] + m[top] != 0)
            {
                return false;
            }
        }
    }
    if(st.empty())
        return true;
    else
        return false;
    }
};
