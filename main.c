#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    a=1;
    while(a<=100)
    {
        sum=sum+a;

        a++;
    }
    printf("1+2+3+.......+100 = %d",sum);

    getch();
    return 0;
}
