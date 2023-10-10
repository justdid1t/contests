#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int len, k ,l,r;
        cin>>len>>k>>l>>r;

        int cnt  = 0;

        int total = len / k;

        int a = r / k;
        int b = (l-1)/k;

        cout<<total - (a- b)<<endl;


    }
    return 0;
}

