#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        char c = 'A';
        for(int j=0; j<=i; j++){
            printf("%c ",j+c);
        }
        printf("\n");
    }
    return 0;
}
