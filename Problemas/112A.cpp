//Ariel Emilio Parra Martinez
//Petya and Strings

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    string n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1.size();i++){
        if(tolower(n1[i])>tolower(n2[i])){
            cout<<1;
            exit(0);
        }
        if(tolower(n1[i])<tolower(n2[i])){
            cout<<-1;
            exit(0);
        }
    }
    cout<<0;
return 0;
}
