#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    return 0;
}
int result(int a)
{
    if(a%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
    return result;
}
