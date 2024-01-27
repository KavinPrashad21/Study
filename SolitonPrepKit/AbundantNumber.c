// sum of divisors are greater than the number

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ans = 0;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            ans += i;
        }
    }

    if(ans>n){
        printf("Yes");
    }
    else{
        printf("no");
    }
}
