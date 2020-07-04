#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int m,l,count=0;
		cin>>m>>l;
		int arr[m];
		for(int i=0;i<m;i++)
		{
		cin>>arr[i];
	    if(arr[i]>l)
	    count+=arr[i]-l;
		}
		cout<<count<<endl;
	}
	return 0;
}