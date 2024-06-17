#include <iostream>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n",i,t,t*i);
    }

    return 0;
}
