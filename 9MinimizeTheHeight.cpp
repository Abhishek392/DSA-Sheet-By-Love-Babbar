#include<iostream>
#include<vector>
using namespace std;

class sample{
    public:
        int max(int a, int b){
            if(b>a)
                return b;
            return a;
        }
        int min(int a, int b){
            if(b>a)
                return a;
            return b;
        }
        int minimizeHeight(vector<int> &v, int size, int k){
            int ma, mi, ans, i, smallest, largest;
            ans = v[size-1] - v[0];
            ma = v[size-1];
            mi = v[0];
            smallest = v[0]+k;
            largest = v[size-1]-k;
            for(i=0;i<size-1;i++){
                if(v[i]-k<0)
                    continue;
                mi = min(smallest, v[i+1]-k);
                ma = max(largest, v[i]+k);
                ans = min(ans, ma-mi);
            }
            return ans;
        }
        
};

int main(){
    vector<int> v;
    int size, element, k;
    cin>>size>>k;
    for(int i=0;i<size;i++){
        cin>>element;
        v.push_back(element);
    }
    sample obj;
    cout<<obj.minimizeHeight(v, size, k)<<endl;
    return 0;
}