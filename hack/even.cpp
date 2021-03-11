/* This code is submitted by Abhishek kumar
* Computer-scince student  ( @ Lovely professional university: Phagwara)
* Email : rishuzb945@gmail.com
* 16:51:12 Saturday 06-March:2021*/
          
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void rishu(){
    vector<int> vec,veceven,vecodd;

    int n;
    cin >> n;

    vec.resize(n);

    for(int i =0 ;i<n ;i++){

        cin >> vec[i];
    }
    

    for(int i =0;i<n;i++){
        if(vec[i]%2==1){
            vecodd.push_back(vec[i]);
        }else{
            veceven.push_back(vec[i]);
        }
    }

    for(int i=0;i<vecodd.size();i++){
        cout<<vecodd[i]<<" ";
    }
    
    for(int i=0;i<veceven.size();i++){
        cout<<veceven[i]<<" ";
    }

    
    



}

int32_t main(){
    int t=1;
    // cin>>t;
    while(t--)rishu();

    return 0;
}



