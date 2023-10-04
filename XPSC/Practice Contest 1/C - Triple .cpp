#include <bits/stdc++.h>
using namespace std;

const int mx = INT_MAX;
const int N = 1e6+1;
int f[N];

int main()
{
  int t; cin>>t;
  while(t--){

    int n; cin>>n;
    int v;
    for(int i=1; i<=n; i++)
    {
      cin>>v;
      f[v]++;
    }
    int ans = -1;
    for(int i=1; i<=n; i++)
    {
      if(f[i] >=3) {ans = i; break;}
    }
    cout<<ans<<endl;
    for(int i=1; i<=n; i++) f[i] = 0;

  }
    return 0;
}
