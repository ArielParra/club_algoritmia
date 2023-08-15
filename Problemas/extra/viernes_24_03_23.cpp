//Ariel Emilio Parra Martinez ID:280862 ISC 2A

/*librerias c++*/
//#include<bits/stdc++.h>
#include<iostream>
//#include<iomanip>//setw
/*librerias c*/
//#include<cstdlib>//atoi/atof,system,rand
//#include<ctime>
//#include<cstdio>//printf,scanf,sprintf
//#include<cstring> //strcmp,strlen
//#include<ctype> //isdigit
//#include<cunistd> //sleep

/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define RAND srand(time(NULL));
//lim_inf+rand()%(lim_sup-lim_inf+1)

/*prototipos*/

//int main(int argc, char *argv[]){
int main(){
SPEED;
//RAND;
//cout<<endl<<"Ariel Emilio Parra Martinez ID:280862 ISC 2A"<<endl;
    int n=0,r=0;
    cin>>n;
    if(n>=0){r=n;cout<<n<<endl;
    }else{
        if((n%10)==0){
            cout<<0<<endl;
        }
        else if((n/10)==((n/10)+(n%10))){
            cout<<n/10<<endl;
        }
        else if((n/10) > ((n/10)+(n%10))){
            cout<<n/10<<endl;
        }
        else if(((n/10)+(n%10))==0){
            cout<<0<<endl;
        }
        else if((n/10) <((n/10)+(n%10))){
            cout<<((n/10)+(n%10))<<endl;
        }
    }

return EXIT_SUCCESS;
}
