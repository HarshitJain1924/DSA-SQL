#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    /*
    // for lowercase specifically 
    int hash[26] = {0};
    for(int i =0;i<s.size();i++){
        hash[s[i]-'a']++; //capital a ' A ' for uppercase
    }
    */
    

    //works of all character string cuz character can be maximum 256
    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    //precompute
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<< hash[c] <<endl;
    }
    return 0;
}