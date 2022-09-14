#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int findDuplicateUsingHashing(vector<int>& v) {
        int H[v.size()]={0};
        for(int i=1;i<v.size();i++){
            if(H[v[i]]==1)
                return i;
            H[v[i]]++;  
        }
        return -1;
    }

    int findDuplicateUsingSorting(vector<int> &v){
        sort(v.begin(), v.end());
        for(int i=1;i<v.size();i++)
            if(v[i]==v[i-1])
                return v[i];
        return -1;
    }
};

int main(){
    vector<int> v;
    int n, i, element;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=0;i<n+1;i++){
        cin>>element;
        v.push_back(element);
    }

    Solution obj;
    cout<<obj.findDuplicateUsingHashing(v)<<" and "<<obj.findDuplicateUsingSorting(v)<<endl;

    return 0;
}

