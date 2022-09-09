#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void pointerApproach(int A[], int n){
	int l, h, m;
	l = m = 0;
	h = n-1;
	while(h>=m){
		if(A[m]==0){
			swap(&A[l], &A[m]);
			l++;
			m++;
		}else if(A[m]==1){
			m++;
		}else if(A[m]==2){
			swap(&A[h], &A[m]);
			h--;
		}
	}
}

void countApproach(int A[], int n){
	int i, c0, c1, c2;
	c0 = c1 = c2 = 0;
	for(i=0;i<n;i++){
		if(A[i]==0)
			c0++;
		else if(A[i]==1)
			c1++;
		else
			c2++;
	}
	i=0;
	while(c0--){
		A[i]=0;
		i++;
	}
	while(c1--){
		A[i]=1;
		i++;
	}
	while(c2--){
		A[i]=2;
		i++;
	}
	
}

int main(){
	int arr[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
	pointerApproach(arr, 9);
	for(int i=0;i<9;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	int arr1[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
	countApproach(arr1, 9);
	for(int i=0;i<9;i++)
		cout<<arr1[i]<<" ";
	return 0;
}
