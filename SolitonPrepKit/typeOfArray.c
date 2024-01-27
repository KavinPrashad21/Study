// all elements are odd/even/mixed
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k = arr[0]%2;

    for(int i=1; i<n; i++){
        if(arr[i]%2!=k){
                printf("Mixed");
        return 0;
        }
    }

    if(k==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
