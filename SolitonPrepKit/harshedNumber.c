// number divisible by sumof its digits

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int t = n;
    int sum = 0;

    while(t>0){
        int rem = t%10;
        t /= 10;

        sum += rem;
    }

    if(n%sum==0){
        printf("Harshed number");
    }
    else{
        printf("Not a harshed number");
    }
}
