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
    cout<<hp[num]<<" "<<lp[num]<<endl;
}
