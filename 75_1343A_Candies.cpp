#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
   int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long k=1;
		long long sum=1;
		while(1)
		{
			sum+=pow(2,k++);
			if(n%sum==0)
			{
				cout<<n/sum<<endl;
				break;
			}
		}
	}
    return 0;
} 