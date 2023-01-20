#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll n=1001;
vector<ll> prime[n];
bool isprime(ll num)
{
    if(num==1)
        return false;
    else
    {
        for(ll i=2;i*i<=num;i++)
        {
            if(num%i==0)
                return false;
        }
    }
    return true;
}
void prime_gen()
{
    for(ll i=2;i<n;i++)
    {
        for(ll j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                ll x = i/j;
                if(isprime(j)) prime[i].push_back(j);
                if(isprime(x)) prime[i].push_back(x);
            }
        }
    }
}
int main()
{
    prime_gen();
    for(ll i=0;i<prime[6].size();i++)
    {
        cout<<prime[6][i]<<endl;
    }
}
