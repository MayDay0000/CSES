#include<bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;

	int result=1;
	int innerCount=1;

	for(int i=0;i<S.size()-1;++i)
	{
		if(S[i]==S[i+1])
		{
			innerCount++;
			result=max(result,innerCount);
			continue;

		}
		innerCount=1;
	}

	cout << result;
}