#include<stdio.h>

int main()
{
    char arr[1000];
    char temp[100][100];
    int n = 0;
    int k = 0;

    gets(arr);

    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]==' ')
        {
            temp[n][k++]='\0';
            n++;
            k = 0;

        }
        else
        {
            temp[n][k++] = arr[i];
        }
    }

    temp[n][k++] = '\0';

    for(int i=n; i>=0; i--){
       printf("%s ", temp[i]);
    }
}
