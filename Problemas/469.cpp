//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//I Wanna Be the Guy

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
	set<int> pasados;
	int niveles=0;
	cin>>niveles;
	int aux=0,x=0,y=0;
	cin>>x;
	if (x!=0){
		for(int i=1;i<=x;i++){
		cin>>aux;
		pasados.insert(aux);
		}
	}
	cin>>y;
	if (y!=0){
		for(int i=1;i<=y;i++){
		cin>>aux;
		pasados.insert(aux);
		}
	}
	if(pasados.size()!=niveles){
		cout<<"Oh, my keyboard!";
	}else{
		cout<<"I become the guy.";
	}
return EXIT_SUCCESS;
}
