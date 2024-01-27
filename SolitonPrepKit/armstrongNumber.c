#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p=0;
    int t = n;

    while(t!=0){
        t/=10;
        p++;
    }

    t=n;
    int ans = 0;

    while(t>0){
        int rem = t%10;
        t /= 10;
        ans += pow(rem,p);
    }

    if(ans==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong number");
    }
}
