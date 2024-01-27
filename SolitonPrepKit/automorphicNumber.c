// whose square ends with the given number

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);   /// n = 25  -> 5 >>> n = 2  -> 2 >> 0

    int x = pow(n,2);  /// x = 625 -> 5 >>> x = 62 -> 2 >> 6
    int k = 0;

    while(n>0){
        int r1 = n%10;
        int r2 = x%10;

        n /= 10;
        x /= 10;

        if(r1!=r2){
            k=1;
            break;
        }
    }

    if(k==0){
        printf("Automorphic Number");
    }
    else{
        printf("Not a Automorphic Number");
    }
}
/*
#include<stdio.h>
int main()
{
int num, rem, square, i, temp;
printf("enter the numbers:");
scanf ("%d" , &num) ;
temp=num;
if(num!=0){
square=num*num;
rem=square%10;}
if (num==rem)
printf("automorphic number");
else

printf("not a automorphic number");
return 0;
}
*/
