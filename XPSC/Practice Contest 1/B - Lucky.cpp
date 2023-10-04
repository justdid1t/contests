#include <bits/stdc++.h>
using namespace std;

const int mx = INT_MAX;

int main()
{
  int t; cin>>t;
  while(t--){
    int r; cin>>r;

    int cnt = 1;
    int s1=0,s2=0;
    while(r)
    {
      if(cnt <=3)
      {
        s1 += r%10;
        r/=10;
        cnt++;
      }
      else
      {
        s2 += r%10;
        r/=10;
        cnt++;
      }
    }
    if(s1==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


  }
    return 0;
}
