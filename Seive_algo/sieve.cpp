#include<bits/stdc++.h>
using namespace std;

const int n=1e7+10;
vector<bool> isprime(n,1);

int main()
{
    isprime[0]=isprime[1]=false;
    for(int i=2;i<n;++i)
    {
        if(isprime[i]==true)
        {
            for(int j=2*i;j<n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }

    for(int i=1;i<100;++i)
    {
        cout<<isprime[i]<<endl;
    }
}
