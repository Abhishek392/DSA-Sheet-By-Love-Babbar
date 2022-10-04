#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<vector<int>> merge(vector<vector<int>> &intervals){
            vector<vector<int>> mergeIntervals;
            vector<int> subVec;
            if(intervals.size()==0)
                return mergeIntervals;
            sort(intervals.begin(), intervals.end());
            subVec = intervals[0];
            for(auto v : intervals){
                if(v[0]<=subVec[1])
                    subVec[1] = max(subVec[1], v[1]);
                else{
                    mergeIntervals.push_back(subVec);
                    subVec = v;
                }
            }
            mergeIntervals.push_back(subVec);
            return mergeIntervals;
        }

        void print(vector<vector<int>> &viv){
            for(auto v : viv)
                cout<<v[0]<<" "<<v[1]<<endl;
            cout<<endl;
        }

};

int main(){
    vector<vector<int>> intervals, mergeIntervals;
    vector<int> subVec;
    int x, y, i, n;
    cout<<"Enter number of pairs: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        subVec.push_back(x);
        subVec.push_back(y);
        intervals.push_back(subVec);
        subVec.clear();
    }
    Solution s;
    mergeIntervals = s.merge(intervals);
    s.print(mergeIntervals);
}