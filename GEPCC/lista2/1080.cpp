#include <iostream>

int main()
{
    int m=-1,p=1;

    for (int i = 1; i < 6; i++)
    {
        int l;
        scanf("%d",&l);

        if(l>m){
            m=l;
            p=i;
        }
    }

    printf("%d\n",m);
    printf("%d\n",p);
    return 0;
}
