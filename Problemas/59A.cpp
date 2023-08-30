//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//WORDS
#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    SPEED;
    char c[101]; cin>>c;
    int mayus=0,minus=0;
    for(int i=0;i<strlen(c);i++){
        if(c[i]>='A' && c[i]<='Z'){
            mayus++;
        }
    }
    minus = strlen(c)-mayus; 
    if(mayus<=minus){
        for(int i=0;i<strlen(c);i++){
            if(c[i]>='A' && c[i]<='Z'){
                c[i]=c[i]-'A'+'a'; 
            }
        }
    }else{
        for(int i=0;i<strlen(c);i++){
            if(c[i]>='a' && c[i]<='z'){
                c[i]=-'a'+'A'
                
                ; 
            }
        }
    }
    cout << c;
    return 0;
}
