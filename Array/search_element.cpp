//Given an unsorted array and an element x, search x in given array. Write recursive C code for this. If element is not present, return -1.

#include<bits/stdc++.h>
using namespace std;

int searchlinear(int arr[], int n,int x)
{
	int i;
	for(i=0;i<n;i++)
		if(arr[i]==x)
	return arr[i];
	
}


int main()
{
	int arr[] = {1,4,2,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	int element = searchlinear(arr,n,x);
	if(element == x)
	{
		cout<<"element found"<<endl;
	}
	else
	{
		cout << "-1"<<endl;
	}
	return 0;
}


