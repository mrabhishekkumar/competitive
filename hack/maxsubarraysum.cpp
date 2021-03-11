#include <iostream>

using namespace std;

int main()
{
        int n,i;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0,mx=0,ans;
		for(int i=0;i<n;i++){
			sum=0;
			for(int j=i;j<n;j++){ // 1 2 3 4
				sum+=a[j];
        		mx=max(mx,sum);
			}
		}
			ans=mx;
			cout<<ans<<endl;
		

    return 0;
}