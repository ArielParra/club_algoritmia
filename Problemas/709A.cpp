//Ariel Emilio Parra Martinez
// Juicer

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int n=0,b=0,d=0,a=0;
    int squiz=0,waste=0;
    cin>>n>>b>>d;
    if(n==1){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<=b){
            squiz+=a;
        }
        if(squiz>d){
            squiz=0;
            waste++;
        }
    }
    cout<<waste;

return 0;
}
