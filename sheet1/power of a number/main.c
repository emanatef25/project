#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please, enter a number:\n");
    int x,y,p;
    scanf("%d %d", &x, &y);
    p=pow(x,y);
    printf("the result is : %d",p);

    return 0;
}
