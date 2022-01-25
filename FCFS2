#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int proc[4],arrv[4],bt[4],temp1,temp2,sum=0,i,j;
    for(i=0;i<4;i++)
    {
        cin>>proc[i]>>arrv[i]>>bt[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i;j++)
        {
            if(arrv[j]>arrv[j+1])
            {
                temp1=arrv[j];
                arrv[j]=arrv[j+1];
                arrv[j+1]=temp1;
                
                temp1=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp1;
                
                temp1=proc[j];
                proc[j]=proc[j+1];
                proc[j+1]=temp1;
            }
        }
    }
    
    temp2=bt[0];
    bt[0]=0;
    sum+=temp2;
    for(j=1;j<4;j++)
    {
        temp2=bt[j];
        bt[j]=sum-arrv[j];
        sum+=temp2;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i;j++)
        {
            if(proc[j]>proc[j+1])
            {
                temp1=arrv[j];
                arrv[j]=arrv[j+1];
                arrv[j+1]=temp1;
                
                temp1=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp1;
                
                temp1=proc[j];
                proc[j]=proc[j+1];
                proc[j+1]=temp1;
            }
        }
    }
    for(j=0;j<3;j++)
    {
        cout<<"P"<<j+1<<" (WT="<<bt[j]<<"), ";
    }
    cout<<"P4"<<" (WT="<<bt[j]<<")";
    return 0;
}
