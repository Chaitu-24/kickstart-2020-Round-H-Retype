#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n,k,s,min,max,p;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k>>s;
       long long int nk=k-1;
        long long int nsk=k-s;
        long long int ns=n-s+1;
        min=nk+1+n;
        //cout<<min<<endl;
        max=nk+nsk+ns;
        //cout<<max;
        if(min<max)
        p=min;
        else
        p=max;
        cout<<"Case #"<<i+1<<": "<<p<<endl;
    }
    return 0;
}
