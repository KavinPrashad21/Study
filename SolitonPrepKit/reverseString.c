// reverse an array
#include<stdio.h>

int main()
{
    char s[100];
    int n = 0;

    scanf("%s",&s);
    for(int i=0; s[i]!='\0'; i++){
        n++;
    }

    for(int i=0; i<n/2; i++){
        char c = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = c;
    }

    printf("%s",s);
}
