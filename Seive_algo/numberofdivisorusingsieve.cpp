#include<bits/stdc++.h>
using namespace std;

const int n=1e7+10;
vector<bool> isprime(n,1);
vector<int> hp(n,0),lp(n,0);

int main()
{
    isprime[0]=isprime[1]=false;
    for(int i=2;i<n;++i)
    {
        if(isprime[i]==true)
        {
            hp[i]=lp[i]=i;
            for(int j=2*i;j<n;j+=i)
            {
                isprime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    int num;
    cin>>num;
   map<int,int> prime_factors;
    while(num>1)
    {
        int prime_factor = hp[num];
        while(num%prime_factor==0)
        {
            num/=prime_factor;
            prime_factors[prime_factor]++;

        }
    }
    int divisor=1;
    for(auto factor: prime_factors)
    {
       int cnt=1;
        cnt = cnt+factor.second;
        cout<<factor.first<<" "<<factor.second<<endl;
        divisor = divisor*cnt;
    }
    cout<<"number of divisor "<<divisor<<endl;
}


