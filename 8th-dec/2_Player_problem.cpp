#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int notprime(int num)
{
    int sum=0;
    for(int i=2;i<(num/2)+1;i++)
    {
        if(num%i==0)
        {
            sum++;
        }
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            count+=notprime(arr[j]);
        }
        if(count%2==0)
            cout<<"B\n";
        else
            cout<<"A\n";
    }
    return 0;
}
