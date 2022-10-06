#include<bits/stdc++.h>
using namespace std;

class CountInversion{
    public:
        int merge(int arr[], int temp[], int start, int mid, int end){
            int count = 0, i, j, k;
            i = start;
            j = mid+1;
            k = start;
            while(i<=mid && j<=end){
                if(arr[i]<=arr[j])
                    temp[k++] = arr[i++];
                else{
                    temp[k++] = arr[j++];
                    count = count + (mid + 1 - i);
                }
            }
            while(i<=mid)
                temp[k++] = arr[i++];
            while(j<=end)
                temp[k++] = arr[j++];
            for(i=start;i<=end;i++)
                arr[i] = temp[i];
            return count;
        }

        int mergeSort(int arr[], int temp[], int start, int end){
            int count = 0;
            if(start<end){
                int mid = (start+end)/2;
                count += mergeSort(arr, temp, start, mid);
                count += mergeSort(arr, temp, mid+1, end);
                count += merge(arr, temp, start, mid, end);
            }
            return count;
        }
};

int main(){
    int n;
    cin>>n;
    int arr[n], temp[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    CountInversion c;
    int count = c.mergeSort(arr, temp, 0, n-1);
    cout<<count<<endl;
    return 0;
}