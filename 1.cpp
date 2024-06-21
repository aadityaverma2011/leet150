#include<bits/stdc++.h>
using namespace std;



int main(){
    int m , n ;
    cin>>m>>n;
    int a1[m+n];
    int a2[n];
    for (int i = 0; i < m+ n; i++)
    {
        if(i<m){
            cin>>a1[i];
        }
        else{
            a1[i]=0;
        }      
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>a2[i];
    }
    // //array initialisation done

    sort(a1,a1+(m+n), greater<int>());
    // for(auto i:a2){
    //     cout<<i;
    // }
    
    for(int i = m ; i<m+n; i++){
        a1[i]=a2[i-m];
    }
    
    sort(a1,a1+(m+n));
    // //printing the main array 

    for(auto i:a1){
        cout<<i;
    }

    return 0;

}