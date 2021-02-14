#include "b2d.h"

int bintodec(long int a)
{
		int rem,dec= 0;
    long int b;
    int m,i=0;
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
        {

            printf("Invalid Input");
        }
        else
            {
            while (b != 0)
            {
                rem = b % 10;
                b /= 10;
                dec += (rem * pow(2, i));
                i++;
            }
            printf("%d",dec);
            }
    }

}
