#include <stdio.h>

int main()
{
    int a,b; 
    scanf("%d%d",&a,&b);
    printf("Before swapping values are %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping values are %d %d",a,b);

    return 0;
}
