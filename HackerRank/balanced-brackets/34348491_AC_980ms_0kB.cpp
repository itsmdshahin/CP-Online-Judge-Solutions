#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack <char> st;

        ll f=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='{' || s[i]=='[' ||s[i]=='(')
                st.push(s[i]);
            else
            {
                if( s[i]==')' && (!st.empty()) && st.top()=='(' )
                {
                    st.pop();
                    f=0;
                }
                else if(s[i]==']' && (!st.empty()) && st.top()=='[')
                {
                    st.pop();
                    f=0;
                }
                else if(s[i]=='}' && (!st.empty()) && st.top()=='{' )
                {
                    st.pop();
                    f=0;
                }
                else
                    f=1;
            }
        }/*
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==')' && st.top()=='(')
            {
                st.pop();
                f=0;
            }
            else if(s[i]==']' && st.top()=='[')
            {
                st.pop();
                f=0;
            }
            else if(s[i]=='}' && st.top()=='{')
            {
                st.pop();
                f=0;
            }
            else f=1;
        }*/
        if(st.empty() && f==0)
        {
            cout<<"YES\n";
        }
        else cout <<"NO" <<endl;

    }
}
