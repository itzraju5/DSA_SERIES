#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "raju";

    stack<char>st;

    for(int i=0; i<s.length(); i++)
    {
        st.push(s[i]);
    }

    string ans = "";

    while(!st.empty())
    {
        char ch = st.top();
        ans+=ch; 
        st.pop();
    }
    
    cout << "Reverse string = " << ans;

    return 0;
} 