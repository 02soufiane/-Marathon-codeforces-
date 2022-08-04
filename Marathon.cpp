#include <iostream>

using namespace std;

int main()
{
	
	int N;
	cin>>N;
	
	while(N--)
	{
		int n=4,r=0;
		int a[n];

		for(int i=0 ; i < n ; i++)
		{
			cin>>a[i];
			if(a[0] < a[i])
			{
				r+=1;
			}
			
		}
		cout<<r<<endl;
	}
	
}		
