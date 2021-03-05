/* This code is submitted by Abhishek kumar
* Computer-scince student  ( @ Lovely professional university: Phagwara)
* Email : rishuzb945@gmail.com
* 01:12:31 Saturday 06-March:2021*/
          
#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector<int> vec1,vec2,vec3,primes;
int n=0,m=0,k=0,n1=0,n2=0,n3=0,stt=0,ent=0,q=0,qry=0;
void rishu()
{
    int ans=0,cnt=0,x=0,y=0,z=0,a=0,b=0,c=0;
    
    
    cin >>n1;
    vec1.clear();
    vec1.resize(n1,0);
    unordered_map<int,int> marker, marker2;

    for(int q=0;q<n1;q++){
      cin >> vec1[q];
      marker[vec1[q]]=1;
    }  
    
    cin >>n2;
    vec2.clear();
    vec2.resize(n2,0);
    for(int q=0;q<n2;q++){
      cin >> vec2[q];
      marker2[vec2[q]]=1;
    }

    for(int i=0;i<n1;i++){
        if(marker[vec1[i]]&&marker2[vec1[i]]){
            cout << vec1[i]<<endl;
            marker[vec1[i]]=0;
        }
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