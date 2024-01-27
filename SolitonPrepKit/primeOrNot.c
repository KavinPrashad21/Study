#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;

    for(int i=2; i<n/2; i++){
        if(n%i==0){
            k=0;
            break;
        }
    }

    if(k==1){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }

    return 0;
}
