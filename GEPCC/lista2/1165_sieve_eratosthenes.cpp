#include <bitset>
using namespace std; //besteira de c++

typedef long long ll; //reduzindo o tipo long

ll SIEVE_SIZE; //limites para verificação de primos
bitset<10000010>bs; //definindo o valor máximo como delimitado pela questão 10^7 + gordura

void initialize_primes_sieve(ll upperbound){
    SIEVE_SIZE = upperbound+1; 
    bs.set(); //ligando todos os bits para 1
    bs[0] = 0; //não é primo, por def
    bs[1] = 0; //não é primo, por def

    for (ll i = 2; i <= SIEVE_SIZE; i++) //roda por todos os valores até o upperbound
    {
        if(bs[i]){ //apenas verifica se aquele valor não for múltiplo de outro número
            for (ll j = i*i; j <= SIEVE_SIZE; j+=i) // varre todos os múltiplos desse número primo
            {
                bs[j] = 0; //elimina esse múltiplo da listagem de primos;
            }
        }
    }
}

bool isPrime(int prime){
    return bs[prime];
}

int main(){
    initialize_primes_sieve(10000000);

    int n;
    scanf("%d",n);
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",nums[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if(bs[nums[j]]) printf("%d nao eh primo\n",nums[j]);
        else printf("%d eh primo\n",nums[j]);
    }
    
    return 0;
}

