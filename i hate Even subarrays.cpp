#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
    string s;
    cin>>s;
    stack<char> st;
    int i;
    for(i=s.length()-1;i>=0;i--)
    {
        if(st.empty())
            st.push(s[i]);
        else if(st.top()!=s[i])
                st.push(s[i]);
        else
            st.pop();
    }

    if(st.empty())
        cout<<"KHALI"<<endl;
     while(!st.empty())
     {
         cout<<st.top();
         st.pop();
     }
     cout<<endl;
    }
}
