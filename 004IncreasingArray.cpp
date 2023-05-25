#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	long long  A[n];

	for(int i=0;i<n;++i)
	{
		cin >> A[i];
	}
	long long count=0;
	for(int i=1;i<n;++i)
	{
		if(A[i]<A[i-1])
		{
			count+=(A[i-1]-A[i]);
			
			A[i]=A[i-1];
			
			
		}	
		
	}

	cout << count;


}