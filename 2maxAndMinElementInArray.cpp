#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
		int max(vector<int> &v, int size){
			int m=v[0];
            for(int i=1;i<size;i++)
                if(v[i]>m)
                    m = v[i];
            return m;
		}

        int min(vector<int> &v, int size){
			int m=v[0];
            for(int i=1;i<size;i++)
                if(v[i]<m)
                    m = v[i];
            return m;
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
	cout<<"Max: "<<r.max(v, size)<<" and "<<"Min: "<<r.min(v, size);
	return 0;
}