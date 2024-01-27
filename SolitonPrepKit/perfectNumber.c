#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ans = 0;

    for(int i=1; i<=n/2; i++){
        if(n%2==0){
            ans += i;
        }
    }

    if(ans==n){
        printf("Perfect Number");
    }
    else{
        printf("Not a perfect number");
    }
}
