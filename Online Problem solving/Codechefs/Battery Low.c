#include<stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &x);
        if(x<=15)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
