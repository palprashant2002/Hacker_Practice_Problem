#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long f1=1,f2=2;
long fib()
{
    long fn;
    fn=f2+f1;
    f1=f2;
    f2=fn;
    return fn;
}
int main() {

    int t;
    scanf("%d",&t);
    while(t--)
    {
        long x,y,count=0;
        long num=f1+f2;
        scanf("%ld%ld",&x,&y);
        if(f1>x && f1<y) count++;
        if(f2>x && f2<y) count++;
        while(num<y)
        {
            num=fib();
            if(num>x&&num<y)
                count++;
        }
        printf("%ld\n",count);
        f1=1;
        f2=2;
    }
    return 0;
}
