#include<bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    int red = 0, blue = 0;
    bool yes = true;
    for(char c: s)
    {
        if(c == 'W')
        {
           if( (red==0 && blue==0) || (red>0 && blue>0) ) {red = 0; blue = 0;}
           else if(red>0 && blue==0 || (red==0 && blue>0)) {yes = false; break;}
        }
        else if(c == 'R') red++;
        else blue++;
    }

    if( (red>0 && blue==0) || (red==0 && blue>0)) yes = false;

    if(yes) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        solve(n,s);
    }
    return 0;
}

