#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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

int main()
{
    cout<<isprime(9)<<endl;
}
