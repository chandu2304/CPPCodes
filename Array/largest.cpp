#include<bits/stdc++.h>
using namespace std;

int large(int array[], int n)
{
	int i;
	int max=array[0];
	for (i=0;i<n;i++)
		if(array[i]>max)	
			max=array[i];
	return max;
}


int main()
{
	int arr[] = {10,20,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int largest = large(arr,n);	
	cout<< largest<<endl;
	return 0;
}