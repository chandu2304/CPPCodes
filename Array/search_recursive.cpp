#include <bits/stdc++.h>
using namespace std;

int searchrecursive(int arr[], int l, int r, int x)
{
	if(r<l)
		return -1;
	if(arr[l]==x)
		return l;
	if(arr[r]==x)
		return r;

	return searchrecursive(arr,l+1,r-1,x);
}

int main()
{
	int arr[]={1,2,4,4,5,6,2,55};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin >> x;
	int index = searchrecursive(arr,0,n-1,x);

	if(index!=-1)
		cout<<"Element "<<x<<" present at index"<<index<<endl;
	else
		cout<<"Element"<<x<<"is not present" <<endl;

	return 0;
}