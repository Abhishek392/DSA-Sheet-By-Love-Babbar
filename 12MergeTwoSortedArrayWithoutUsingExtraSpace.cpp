#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        void swap(int *a, int *b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }
        void mergeArray(vector<int> &v1, vector<int> &v2){
            int i, j=v2.size()-1;
            while(j>=0){
                i=v1.size()-1;
                if(v1[i]<=v2[j])
                    j--;
                else if(v1[i]>v2[j]){
                    swap(&v1[i], &v2[j]);
                    while(v1[i]<v1[i-1] && i>0){
                        swap(&v1[i], &v1[i-1]);
                        i--;
                    }
                    j--;    
                }
            }

        }
};

int main(){
    vector<int> v1, v2;
    int size1, size2, i, element;
    cin>>size1>>size2;
    for(i=0;i<size1;i++){
        cin>>element;
        v1.push_back(element);
    }
    for(i=0;i<size2;i++){
        cin>>element;
        v2.push_back(element);
    }
    Solution obj;
    obj.mergeArray(v1, v2);
    for(i=0;i<size1;i++){
        cout<<v1[i]<<" ";
    }
    for(i=0;i<size2;i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}