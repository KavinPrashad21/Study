#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char arr[n][100];

    printf("Enter the Strings\n");
    for(int i=0; i<n; i++){
        scanf("%s",&arr[i]);
    }

    printf("Displaying elements....\n");
    for(int i=0; i<n; i++){
        printf("%s\t%d\n",arr[i],strlen(arr[i]));
    }

    return 0;
}
