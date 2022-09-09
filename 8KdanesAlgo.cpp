#include<iostream>
#include<vector>
using namespace std;

class KdaneAlgo{
    public:
        int largestContiguousSum(vector<int> &v, int size){
            int sum=0, max = INT8_MIN;
            for(int i=0;i<size;i++){
                sum+=v[i];
                if(max<sum)
                    max = sum;
                if(sum<0)
                    sum = 0;
            }
            return max;
        }
};

int main(){
    vector<int> v;
    int size, element;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    cout<<"Enter the elements:-"<<endl;
	for(int i=0;i<size;i++){
		cin>>element;
		v.push_back(element);
	}
    KdaneAlgo obj;
    cout<<obj.largestContiguousSum(v, size)<<endl;

    return 0;
}