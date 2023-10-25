//Ariel Emilio Parra Martinez
//Keyboard

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    SPEED;
    
    string A="qwertyuiop";
    string B="asdfghjkl;";
    string C="zxcvbnm,./";

    string n;
    char LR;
    cin>>LR>>n;
    char aux;

    int index;
    char str;
    bool found=false;
    for (size_t i=0; i<n.size();i++) {
        found = false;
        for(size_t j=0;j<A.size();j++){
            if (A[j]==n[i]){
                found=true;
                index=j;
                break;
            }
        }
        if (found) {
            str='A';
        } else {
            for(size_t j=0;j<B.size();j++){
                if (B[j]==n[i]){
                    index=j;
                    found=true;
                    break; 
                }
            }
            if(found){
                str='B';
            } else {//de ahuevo es C
                str='C';
                for(size_t j=0;j<C.size();j++){
                    if (C[j] == n[i]) {
                        index=j;
                        found=true;
                        break;
                    }
                }
            }
        }

        if (LR == 'R') {
            switch (str) {
                case 'A':n[i]=A[index - 1]; 
                    break;
                case 'B':n[i]=B[index - 1];
                    break;
                case 'C':n[i]=C[index - 1];
                    break;
            }
        } else {
            switch (str) {
                case 'A':n[i]=A[index + 1];
                    break;
                case 'B':n[i]=B[index + 1];
                    break;
                case 'C':n[i]=C[index + 1];
                    break;
            }
        }
    }

cout<<n;
return 0;
}

