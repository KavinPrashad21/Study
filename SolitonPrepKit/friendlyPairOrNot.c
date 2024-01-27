// both are perfect numbers

#include<stdio.h>
int find(int n){
    int sum = 0;
    for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum += i;
            }
    }

    return sum;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int s1 = find(a);
    int s2 = find(b);

    if(s1==a && s2==b){
        printf("Friendly Pair");
    }
    else{
        printf("Not a friendly pair");
    }
}
