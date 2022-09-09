#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int minJumps(vector<int> &v, int size){
            int i, j=0, count=0, prev=0;
            for(i=0;i<size;i++){
                j+=v[i];
                count++;
                if(j>=size)
                    return count;
                if(j==prev)
                    return -1;
                prev=j;
            }
            return -1;
        }
};

int main(){
    vector<int> v;
    int size, i, element;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>element;
        v.push_back(element);
    }
    Solution obj;
    cout<<obj.minJumps(v, size);
    
    return 0;
}