#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r=0,ant;
    char s1[6], s2[3];
    vector<int> fat;

    scanf("%s %s", s1,s2);

    strcat(s1,s2);

    n = atoi(s1);
    
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            fat.push_back(i);

            if(n/i == 1){
                break;            
            }

            n = n/i;            
            i = 1;
        }
    }

    for(int i:fat){
        if(r==0){
            r++;
            ant = i;
        } else {
            if(ant == i){
                ant = i;
                r++;
            }else{
                if(r%2 == 0){
                    r++;
                    ant = i;  
                    continue;
                }
                break;
            }
        }
    }

    if(r%2 == 0)printf("Sim\n");
    else printf("Nao\n");

    return 0;
}
