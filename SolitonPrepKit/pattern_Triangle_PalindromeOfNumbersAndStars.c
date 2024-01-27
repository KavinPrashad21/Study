/*
    *****1******
    ****2*2*****
    ***3*3*3****
    **4*4*4*4***
    *5*5*5*5*5**
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("*");
        }
        for(int j=0; j<=i; j++){
            printf("%d*",i+1);
        }
        for(int j=0; j<n-i; j++){
            printf("*");
        }
        printf("\n");
    }
}
