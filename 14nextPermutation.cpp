#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swap(int *a, int *b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    void nextPermutation(vector<int>& nums) {
        if(nums.size()<=1)
            return;

        int i=nums.size()-2, j=nums.size()-1;
        while(i>=0 && nums[i]>=nums[i+1])
            i--;

        if(i>=0){
            while(nums[j]<=nums[i])
                j--;
            swap(&nums[i], &nums[j]);
        }

        i++;
        j = nums.size()-1;
        while(i<j){swap(&nums[i++], &nums[j--]);}   
    }

    void printVector(vector<int> &v){
        for(int num:v)
            cout<<num<<" ";
        cout<<endl;
    }
    
};

int main(){
    int n, element;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>element;
        v.push_back(element);
    }
    Solution s;
    s.nextPermutation(v);
    s.printVector(v);
}