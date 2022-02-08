#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long fact(int num)
{
    long long res=1;
    while(num>0)
    {
        res=res*num;
        num--;
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ret=0,div,x=1;
        div=pow(k,x);
        while(div<=n)
        {
            ret=ret+(n/div);
            x++;
            div=pow(k,x);
        }
        cout<<ret<<"\n";
    }
    return 0;
}
