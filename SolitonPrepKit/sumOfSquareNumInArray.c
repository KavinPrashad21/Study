// sum of positive square elements in array
#include<stdio.h>
#include<math.h>

int square(int n)
{
    int i=1;
    int k = pow(i, 2);
    while(i<n){
        k = pow(i, 2);
        if(k==n){
            return 1;
        }
        i++;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        if(square(arr[i])==1){
            sum += arr[i];
        }
    }

    printf("%d", sum);
}
