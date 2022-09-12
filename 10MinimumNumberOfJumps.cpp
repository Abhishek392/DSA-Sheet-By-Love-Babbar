#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int min(int a, int b){
            if(a>b)
                return b;
            return a;
        }

        int max(int a, int b){
            if(a>b)
                return a;
            return b;
        }

        int minJumpsDP(vector<int> v, int size){
            int jumps[size], i, j;
            jumps[0] = 0;
            if(size == 0 || v[0] == 0)
                return INT16_MAX;
            for(i=1;i<size;i++){
                jumps[i] = INT16_MAX;
                for(j=0;j<i;j++){
                    if(i<=v[j]+j && v[j] != INT16_MAX){
                        jumps[i] = min(jumps[i], jumps[j]+1);
                        break;
                    }
                }
            }
            return jumps[size-1];
        }

        int minJumpsGreedy(vector<int> v, int size){
            int jumps = 1, steps = v[0], maxreach = v[0], i;
            if(size<=1)
                return 0;
            if(v[0]==0)
                return -1;
            for(i=1;i<size;i++){
                if(i==size-1)
                    return jumps;
                maxreach = max(maxreach, i+v[i]);
                steps--;
                if(steps==0){
                    jumps++;
                    if(i>=maxreach)
                        return -1;
                    steps = maxreach-i;
                }
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
    cout<<obj.minJumpsDP(v, size)<<" "<<obj.minJumpsGreedy(v, size);
    
    return 0;
}