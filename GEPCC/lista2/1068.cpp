#include <iostream>
#include <stack>

int main()
{
    char exp[10001];

    int ic[10001];
    int countS = 0;

    while(scanf("%s",exp) != EOF){
        char chr = exp[0];
        int count = 0;

        std::stack<char> par;

        int isVal = 1;

        while(chr != '\0'){
            chr = exp[count];

            if(chr == ')'){
                if(par.empty() || par.top() != '('){
                    isVal = 0;
                    break;
                }else{
                    par.pop();
                }
            }else if(chr=='('){
                par.push(chr);
            }

            count++;
        }

        if(isVal && par.empty()) ic[countS]=1;
        else ic[countS]=0;
        countS++;
    }

    for (int i = 0; i < countS; i++) {
        if(ic[i]==0) printf("incorrect\n");
        else printf("correct\n");
    }

    return 0;
}
