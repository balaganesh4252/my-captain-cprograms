#include <stdio.h>

int main()
{ 
    int p;
    printf("Enter marks\n");
    scanf("%d",&p);
    printf("Grade ");
    if(p>0)
    {
        if(85<=p && p<=100)
        printf("A");
        else if(70<=p && p<=84)
        printf("B");
        else if(55<=p && p<=69)
        printf("C");
        else if(40<=p && p<=54)
        printf("D");
        else if(p<40)
        printf("F");
    }
    return 0;
}
