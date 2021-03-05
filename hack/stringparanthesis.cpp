/* This code is submitted by Abhishek kumar
* Computer-scince student  ( @ Lovely professional university: Phagwara)
* Email : rishuzb945@gmail.com
* 02:41:00 Saturday 06-March:2021*/
          
#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector<int> vec1,vec2,vec3,primes;
int n=0,m=0,k=0,n1=0,n2=0,n3=0,stt=0,ent=0,q=0,qry=0;
void rishu(){
    stack<char> st;
    string s;
    cin >> s;
    bool ans=true;
    int alt[1000];
    alt['(']=')';
    alt['{']='}';
    alt['[']=']';

    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='['){
            st.push(c);
        }else if(c==')'||c=='}'||c==']'){
            if(st.empty()||alt[st.top()]!=c){
                ans=false;
            }else{
                st.pop();
            }
        }
    }

    if(ans){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }
    

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)rishu();

    return 0;
}