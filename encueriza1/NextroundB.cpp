//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int k=0,n=0,pas=0,a=0;;
    cin>>n>>k;
    vector <int> vec;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(vec[i]>=vec[k-1] && vec[i]>0){
        pas++;
        }
    }
    cout<<pas;
return 0;
}
