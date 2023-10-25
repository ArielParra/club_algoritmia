//Ariel Emilio Parra Martinez
//Beutiful Matrix

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
const int matriz[5][5]={ 
                   {4,3,2,3,4},
                   {3,2,1,2,3},
                   {2,1,0,1,2},
                   {3,2,1,2,3},
                   {4,3,2,3,4} };

int n[5][5];
for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
          cin>>n[i][j];
       }
   }


for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(n[i][j]==1){
            cout<<matriz[i][j];
            break;
        }    
    }
}

return 0;
}
