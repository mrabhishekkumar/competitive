#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int l=s.size();// acb
	string ans;
	string newans="";
	newans+=s[0];
		for(int i=0;i<l-1;i++)
	{
		ans=to_string(s[i+1]-s[i]);
		newans+= ans + s[i+1];
	}
	cout<<newans<<endl;
	return 0;
}