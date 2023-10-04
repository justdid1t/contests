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
    int arr[n];
    set<int>odd;
    set<int>even;
    int x;
    for(int i=1; i<=n; i++)
    {
      cin>>x;
      if(i%2==0) {
        if(x%2==0) even.insert(0);
        else even.insert(1);
      }
      else {
        if(x%2==0) odd.insert(0);
        else odd.insert(1);
      }
    }
    if(even.size()==1 && odd.size() ==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
    return 0;
}
