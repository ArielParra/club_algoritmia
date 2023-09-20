//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long llu;

vector <llu> criba(int n){
int j=0;
vector <bool> es(n,true);
vector <llu> primos;
    for(int i=2;i<=n;i++){
        j=i;
        if(es[i]){
            j*=i;//para inicar el ciclo desde el segundo multiplo
            while(j<=n){
                es[j]=false;
                j+=i;//los multiplos siguientes seran sumar el numero hasta parar el ciclo
            }
            if(es[i]){
                primos.push_back(i);
            }
        }
    }
return primos;
}

int main(){
SPEED;
    int n=0,exp=0;
    cin>>n;
    vector <llu> primos=criba(n);
    for(int i=0;i<primos.size();i++){
        if(n%primos[i]==0){
        exp=0;
            cout<<primos[i];
            while(n%primos[i]==0){
                n/=primos[i];
                exp++;
            }
            cout<<"^"<<exp<<"  ";
        }
    }
return 0;
}
