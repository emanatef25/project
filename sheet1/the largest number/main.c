#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z,large;
    printf("Enter three numbers :");
    scanf("%d %d %d ",&x,&y,&z);
    large = x > y ?(x > z ? x : z) : (y > z ? y :z) ;
     printf("\n The largest number is :%d",large);
    return 0;
}
