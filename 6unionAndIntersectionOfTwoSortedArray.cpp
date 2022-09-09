#include<iostream>
#include<vector>
using namespace std;

class UnAndIn{
	public:
		vector<int> Union(vector<int> &v1, vector<int> &v2){
			vector<int> v3;
			int i, j;
			j=i=0;
			while(i<v1.size() && j<v2.size()){
				while(v1[i]==v1[i+1])
					i++;
				while(v2[j]==v2[j+1])
					j++;
				if(v1[i]<v2[j])
					v3.push_back(v1[i++]);
				else if(v1[i]>v2[j])
					v3.push_back(v2[j++]);
				else{
					v3.push_back(v1[i++]);
					j++;
				}
			}
			while(i<v1.size())
				v3.push_back(v1[i++]);
			while(j<v2.size())
				v3.push_back(v2[j++]);
			return v3;
		}
		
		vector<int> Intersection(vector<int> &v1, vector<int> &v2){
			vector<int> v3;
			int i, j;
			j=i=0;
			while(i<v1.size() && j<v2.size()){
				while(v1[i]==v1[i+1])
					i++;
				while(v2[j]==v2[j+1])
					j++;
				if(v1[i]<v2[j])
					i++;
				else if(v1[i]>v2[j])
					j++;
				else{
					v3.push_back(v1[i++]);
					j++;
				}
			}
			return v3;
		}
		
		void displayVector(vector<int> v){
			int i;
			for(i=0;i<v.size();i++)
				cout<<v[i]<<" ";
		}
		
};

int main(){
	vector<int> vec1, vec2, vec3, vec4;
	int size1, size2, i, element;
	cout<<"Enter the size of array 1 and array 2: ";
	cin>>size1>>size2;
	cout<<"Enter the elements of array 1:-"<<endl;
	for(i=0;i<size1;i++){
		cin>>element;
		vec1.push_back(element);
	}
	cout<<"Enter the elements of array 2:-"<<endl;
	for(i=0;i<size2;i++){
		cin>>element;
		vec2.push_back(element);
	}
	UnAndIn obj;
	vec3 = obj.Union(vec1, vec2);
	vec4 = obj.Intersection(vec1, vec2);
	obj.displayVector(vec3);
	cout<<endl;
	obj.displayVector(vec4);
	return 0;
}
