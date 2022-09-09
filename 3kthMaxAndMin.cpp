#include<iostream>
using namespace std;

int sort(int A[], int n){
	int i, j, x;
	for(i=1;i<n;i++){
		j = i-1;
		x = A[i];
		while(j>-1 && A[j]>x){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}

int main(){
	int arr[] = {5, 10, 6, 37, 43, 56}, k;
	cin>>k;
	sort(arr, 6);
	cout<<"kth min element in given array is: "<<arr[k-1]<<endl;
	cout<<"kth max element in given array is: "<<arr[6-k]<<endl;
	return 0;
}
