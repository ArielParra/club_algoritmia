//Ariel Emilio Parra Martinez
//Multiplication Table
 
#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long int ulli;

ulli min_ulli(ulli midi,ulli m){// porque mid no aceptaba ulli
    if (midi < m) 
        return midi;
return m;
}
 
bool isKthLargest(ulli n,ulli m,ulli k,ulli mid){
    ulli count=0;
    for(ulli i=1;i<=n;i++) {
       count += min_ulli(mid/i,m); //min( mid/i , m);
       //count += ( (mid/i) < m ) + (mid/i) - ( (mid/i) < m ) * m;
    }
    return count>=k; //si el contador es mayor igual  que k retorna true
}
 
int main(){
SPEED;
    ulli n=0,m=0,k=0;
    cin>>n>>m>>k;
    ulli left=1;         //left del binary serch
    ulli right=n*m+1;    //right del binary search
    while (left<right){  //binary search
        ulli mid=left+(right-left)/ 2; //forumla mid del binary search
    
        if (isKthLargest(n,m,k,mid)) 
            right=mid;
        else
            left=mid+1;
    }//while izq estrictamente menor que derecha
    cout<<left; //el resulatado va estar en left
return 0;
}
