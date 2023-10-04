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
    int mini = mx;
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
      if(arr[i] < mini) mini = arr[i];
    }
    long long int ans = 0;
    for(int i=0; i<n; i++)
    {
      ans += arr[i]-mini;
    }
    cout<<ans<<endl;

  }
    return 0;
}
