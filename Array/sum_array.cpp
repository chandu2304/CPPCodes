#include <bits/stdc++.h>
using namespace std;

int sum(int ar[], int n)
	{
		int sum=0;
		for(int i=0;i<n;i++)
			sum+=ar[i];
		return sum;
	}

int main()
	{
		int arr[]={1,2,3,5};
		int n=sizeof(arr)/sizeof(arr[0]);
		cout << "Sum is:"<<sum(arr,n) <<endl;
		return 0;
	}



