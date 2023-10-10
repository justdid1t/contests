#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int n,k; cin>>n>>k;

    while(k--)
    {
        if(n%10 != 0)
        {
            n -= 1;
        }
        else n /= 10;
    }
    cout<<n<<endl;
    return 0;
}

