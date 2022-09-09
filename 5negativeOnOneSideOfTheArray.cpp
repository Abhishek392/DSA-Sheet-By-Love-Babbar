#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void solve(int A[], int n){
	int l, h;
	l = 0;
	h = n-1;
	while(h>=l){
		if(A[l]<0 && A[h]<0)
			l++;
		else if(A[l]>=0 && A[h]>=0)
			h--;
		else if(A[l]>=0 && A[h]<0){
			swap(&A[l], &A[h]);
			l++;
			h--;
		}
		else if(A[l]<0 && A[h]>=0){
			l++;
			h--;
		}
	}
}

int main(){
	int arr[] = {1, -10, 56, 33, -45, 77, 32, -3, 20};
	int n = 9;
	solve(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
