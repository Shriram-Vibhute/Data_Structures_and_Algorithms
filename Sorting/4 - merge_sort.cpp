#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high) {
    // For storing data in sorted manner -> Space Complexity O(n)
    vector<int>sorted;

    int left = low;
    int right = mid + 1;

    // Comparing
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            sorted.push_back(arr[left]);
            left++;
        }
        else {
            sorted.push_back(arr[right]);
            right++; 
        }
    }

    // Adding elements which are still not compaired  
    while(left <= mid) {
        sorted.push_back(arr[left]);
        left++;
    }

    while (right < arr.size())
    {
        sorted.push_back(arr[right]);
        right++;
    }
    
    // Updating primary array
    for(int i = low; i <= high; i++) {
        arr[i] = sorted[i - low];
    }
}

void merge_sort(vector<int>&arr, int low, int high) {
    // Base Case
    if(low >= high){
        return ;
    }

    int mid = (low + high) / 2;

    // Recursive Relation
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    // Merging
    merge(arr, low, mid, high);
}

int main(){
    vector<int>arr = {5, 2, 3, 4, 1, 100, -56, 9, -23, -23, 78, -23, 56, 78, 87, 65, 54, -1, 0, 1};
    merge_sort(arr, 0, arr.size()-1);
    for(auto it : arr) {
        cout << it << ' ';
    }
    return 0;
}