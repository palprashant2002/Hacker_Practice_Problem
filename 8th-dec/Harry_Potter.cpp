#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int prime(int num)
{
    for(int i=2;i<(num/2)+1;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {   
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0,th;
        cin>>th;
        for(int i=2;i<th;i++)
        {
            if(prime(i)&&prime(2*i+1))
                sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
