//Ariel Emilio Parra Martinez 
//

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int tam=0,a=0;
cin>>tam;
vector<int> vect;
for(int i=0;i<tam;i++){
    cin>>a;
    vect.push_back(a);
}
sort(vect.begin(),vect.end());
for (int x : vect)
cout << x << " ";
return EXIT_SUCCESS;
}
