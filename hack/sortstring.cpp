#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string s1, string s2)
{
	for(int i=0;i<s1.size() && i<s2.size();i++)
	{
		if(s1[i]==s2[i])
		{
			continue;
		}
		else {
			return s1 <= s2;
		}
	}
	return s2.size()<=s1.size();
}
int main() {
	
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	sort(v.begin(),v.end(),compare);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}