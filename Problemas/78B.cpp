//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int n;
cin>>n;
string colors="ROYGBIV";
size_t j=0,k=0;
for(size_t i=0;i<n;i++){
    if(j==colors.size()){
        j=k;
    }
    if(j==3){
        k++;
    }
    cout<<colors[j];
    j++;
}
return 0;
}
