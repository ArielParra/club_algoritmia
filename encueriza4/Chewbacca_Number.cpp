//Ariel Emilio Parra Martinez
//

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long int ulli;
ulli min_ulli(ulli a,ulli b){
if(a<b)
    return a;    
return b;
}
ulli pow_ulli(ulli base, ulli exp){
    ulli aux=1;
    for (ulli j=0;j<exp;j++){
        aux*=10;
    }
return aux;
}


    
int main(){
SPEED;
    ulli n,res=0,i=0;
    cin>>n;
    while(n!=0){
        res+=min_ulli(n%10,9-(n%10))*pow_ulli(10,i);
        if(n/10<=0 && n%10==9){
            res+=min_ulli(n%10,9)*pow_ulli(10,i);
        }
        i++;
        n/=10;
    }
    cout<<res;
return 0;
}
