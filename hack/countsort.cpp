#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int a[1000001];
	for(int i=0;i<1000001;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		a[v[i]]=1;
	}
	for(int i=0;i<1000001;i++)
	{
		if(a[i]==0)
		{
			continue;
		}
		cout<<i<<" ";
	}
	cout<<endl;
}