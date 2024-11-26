#include<bits/stdc++.h>
using namespace std;
void cng(string &s, int f)
{
    int sum=s.size();
    
    for(auto &x:s)
    {
        sum+=x;
        sum%=128;
        char c=max(37,sum);
        x^=c;
        x<=33 ? x+=32 : x--;
    }
    if(f--) cng(s,f);
    
}
int main()
{
    string s="hello world!";
    cout<<"original:"<<s<<endl;
    cng(s,5);
    cout<<"encrypted:"<<s<<endl;
    return 0;
}
