#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    cin>>t;
    while(t--)
    {
        int r,n;
        cin>>r>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        while(r--)
        {
            int temp,j;
            temp=arr[0];
            for(j=1;j<n;j++)
            {
                arr[j-1]=arr[j];
            }
            arr[j-1]=temp;
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
