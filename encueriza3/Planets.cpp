//Ariel Emilio Parra Martinez
//Planets

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int t=0,n=0,c=0,a=0;
    int maq1=0,maq2=0;
    vector<int> plan;//para contar los planetas
    map<int, int> planXorbita;//para contar planetas por orbitas
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n>>c;
    maq1=maq2=0;plan.clear(); planXorbita.clear();//pa limpiar variables por cada t
        for(int j=0;j<n;j++){
            cin>>a;
            plan.push_back(a);
        }
        for(int k=0;k<plan.size();k++){
            planXorbita[plan[k]]++;
        }

map <int, int>::iterator it = planXorbita.begin();
while (it != planXorbita.end()){
    maq2+=min(it->second,c);//first indice de planeta, right cantidad de planetas
    maq1+=it->second;
	it++;
}
    if(planXorbita.size()==1){ //pal caso 2
        if(c * planXorbita.size() < maq1){
            cout<<c * planXorbita.size();
        }else{
            cout<<maq1;
        }
        cout<<endl;
    }else{
        cout<<maq2<<endl;
    }

}//for
return 0;
}
