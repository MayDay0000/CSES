#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	
	//using Hashing 
	int HashA[n+1]={0};
	int A[n-1] ={0};
	for(int i=1;i<=n-1;i++)
	{
		cin >> A[i];
		HashA[A[i]]=A[i];
	}

	// for(int i=0;i<=n;i++)
	// {
	// 	cout << HashA[i] << " " ;
	// }
	// cout << endl;
	for(int i=1;i<n+1;i++)
	{
		if(HashA[i]!=i)
		{
			cout << i ;
			return 0;
		}
	}
}