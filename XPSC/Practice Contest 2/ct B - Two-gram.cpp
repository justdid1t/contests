#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    map<string,int> mp;

    for(int i=0; i<n-1; i++)
    {
        string tmp;
        tmp += s[i]; tmp += s[i+1];
        mp[tmp]++;
    }
    string ans;
    int mx = -100000;
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
       if(it->second > mx) {ans = it->first; mx= it->second;}
    }

    cout<<ans<<endl;


    return 0;
}

