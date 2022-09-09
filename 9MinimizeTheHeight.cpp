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
            int ma, mi, ans, i;
            ans = v[size-1] - v[0];
            ma = v[size-1];
            mi = v[0];
            for(i=1;i<size;i++){
                if(v[i]-k<0)
                    continue;
                mi = min(v[0]+k, v[i]-k);
                ma = max(v[size-1]-k, v[i-1]+k);
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