#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n, int m){
    if(m==1){
        return 1;
    }
    else{
        if(n%m==0) return 0;
        return isPrime(n,m-1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    bool pV[n];
    int ns[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        ns[i] = x;

        bool ip = x == 1 ? 0 : isPrime(x,sqrt(x));
        pV[i]=ip;
    }

    for (int j = 0; j < n; j++)
    {
        if(pV[j]==0) printf("%d nao eh primo\n", ns[j]);
        else printf("%d eh primo\n", ns[j]);
    }
}
