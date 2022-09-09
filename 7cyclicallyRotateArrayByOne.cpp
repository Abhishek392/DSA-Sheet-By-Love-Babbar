#include<iostream>
#include<vector>
using namespace std;

class Rotate{
	public:
		void rotateArray(vector<int> &v, int size){
			int i, x;
			x = v[size-1];
			for(i=size-1;i>0;i--)
				v[i] = v[i-1];
			v[i] = x;
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
	Rotate r;
	r.rotateArray(v, size);
	r.displayArray(v, size);
	return 0;
}
