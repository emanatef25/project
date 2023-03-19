#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("the number of x :");
    scanf("%d",&x);
    printf("the number of y :");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("x=%d ; y=%d",x,y);
    return 0;
}
