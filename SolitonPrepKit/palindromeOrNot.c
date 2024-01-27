#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int t = n;
    int ans = 0;

    while(t!=0){
        int rem = t%10;
        t /= 10;
        ans *= 10;
        ans += rem;
    }

    if(n==ans){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
