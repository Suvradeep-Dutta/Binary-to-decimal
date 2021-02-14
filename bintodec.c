#include <stdio.h>
#include<math.h>
int bintodec(long long int);
int rem,dec=0,i=0;
long long int n;
// main method
int main()
{
    
    printf("Enter a Number:- ");
    scanf("%lld",&n);
        bintodec(n);
    return 0;
}



// method to convert a binary number to decimal
int bintodec(long long int a)
{
    long long int b;
    int m;
    b=a;
    if(a<0)
    {
        printf("Invalid Input");
    }
    else
    {
        while(a!=0)
        {
            rem=a%10;
            a=a/10;
            if(rem>1 || rem<0)
                m=1;
        }
        if(m==1)
            printf("Invalid Input");
        else
            {
            while (b != 0)
            {
                rem = b % 10;
                b /= 10;
                dec += rem * pow(2, i);
                i++;
            }
            printf("%d",dec);
            }
    }
        
}