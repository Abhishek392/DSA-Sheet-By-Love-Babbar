#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
		void reverseArray(vector<int> &v, int size){
            int i, j, temp;
			for(i=0, j=size-1;i<j;i++,j--){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
		}
		void displayArray(vector<int> v, int size){
			int i=0;
			for(i=0;i<size;i++)
				cout<<v[i]<<" ";
			cout<<endl;
		}
};

int main(){
	vector<int> v;
	int size, element;
	cout<<"Enter the size of the array: ";
	cin>>size;
	cout<<"Enter the elements:-"<<endl;
	for(int i=0;i<size;i++){
		cin>>element;
		v.push_back(element);
	}
	Solution r;
	r.reverseArray(v, size);
	r.displayArray(v, size);
	return 0;
}