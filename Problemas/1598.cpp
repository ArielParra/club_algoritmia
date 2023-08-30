//Ariel Emilio Parra Martinez 
//Computer Game

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    string uno,dos;
    int t=0,n=0;
    bool cond=true;
    cin>>t;
    for(int i=0;i<t;i++){
        cond=true;
        cin>>n;
        cin>>uno;
        cin>>dos;
        
            for(int k=0;k<n;k++){
                if(uno[k]=='1' && dos[k]=='1'){
                    cond=false;
                    break;
                }
            }
            if (cond){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
    }   
return 0;
}











