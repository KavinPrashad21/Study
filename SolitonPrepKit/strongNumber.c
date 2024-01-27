#include<stdio.h>

int fact(int n)
{
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans *= i;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);

    int t = n;
    int ans = 0;

    while(t>0){
        int rem = t%10;
        t /= 10;

        ans += fact(rem);
    }

    if(ans==n)
    {
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }

}
