#include <iostream>

int main()
{
    int n;
    int acc=0;
    int count=0;
    int flag = 1;
    while(scanf("%d",&n)){
        if(n<0) break;
        else {
            acc+=n;
            count++;
        }

    }
    printf("%lf\n",(double)acc/(double)count);
    return 0;
}
