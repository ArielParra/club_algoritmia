//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int w=0;
bool si=false;
    cin>>w;
    if(w==2){
        cout<<"NO";
    }else if(w%2==0){  
      for(int i=1;i<w;i++){
        if((w/i)%2==0){
          si=true;
            break;
        }

      }
    if(true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
   }else{
        cout<<"NO";
    }
return 0;
}
