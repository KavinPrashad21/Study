#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    //printf("%d", n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    int sum = 0;

    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
        sum += arr[i];
    }

    printf("%d %d %d", min, max, sum);
}
