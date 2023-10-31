//Ariel Emilio Parra Martinez
//Permutation Transformation

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

size_t max_vec(vector<int> &vec,size_t beg,size_t end){
    size_t x=beg;
    for(size_t i=beg+1;i<end;i++){
        if(vec[i]>vec[x]){
            x=i;
        }
    }
    return x;
}

void solve(vector<int> &sol,vector<int> &vec,size_t beg,size_t end,size_t altura) {
    if (beg>=end) return;//como si fuera binary search se mueven los limites

    size_t raiz=max_vec(vec,beg,end);
 
    sol[raiz]=altura;
    
    solve(sol,vec,beg  ,raiz,altura+1);//izq
    solve(sol,vec,raiz+1,end,altura+1);//der
}

int main() {
    SPEED;
    int n=0,t=0;cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> sol(n);//reinicio vector solucion
        vector<int> vec(n);//reinicio vector con valores d
        for(int j=0;j<n;j++){
            cin>>vec[j];//d
        }
        solve(sol,vec,0,n,0);
                    //beg=0   pq vec.begin() =  &vec[0] 
                      //end=n pq vec.end()/vec.size() = &vec[n]
                        //altura=0; pq es una variable implicita 
                        //dentro de la funcion que se inicia en 0
        for(int k=0;k<n;k++){
            cout<<sol[k]<<" ";
        };cout<<endl;
    }
return 0;
}
