//
//  main.cpp
//  heap
//
//  Created by Vincie on 2020/11/7.
//

#include <iostream>
#include <vector>
using namespace std;


void heapfy(vector<int>& arr,int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    if (left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if (right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if (largest!=i){
        swap(arr[largest],arr[i]);
        heapfy(arr,n,largest);
    }
}

void build_heap(vector<int>& arr, int n){
    int startindex=n/2-1;
    for (int i=startindex;i>=0;i--){
        heapfy(arr,n,i);
    }
}

void heapSort(vector<int>& arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapfy(arr, n, i);
  
    // One by one extract an element from heap
    for (int i=n-1; i>0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max heapify on the reduced heap
        heapfy(arr, i, 0);
    }
}

void insertNode(vector<int>& arr,int& n, int key){
    arr.push_back(key);
    n=n+1;
    build_heap(arr,n);
}
void deleteRoot(vector<int> arr, int& n){
    int lastelement=arr[n-1];
    arr[0]=lastelement;
    n=n-1;
    heapfy(arr,n,0);
}

void maximum(vector<int>& arr){
    cout<<arr[0]<<endl;
}

void increasekey(vector<int>& arr, int n, int newv, int i)
{
    arr[i]=newv;
    heapfy(arr,n,i);
    build_heap(arr,n);
}

void printArray(vector<int>& arr, int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main(){
    int n=0;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int v=0;
        cin>>v;
        arr.push_back(v);
    }
    build_heap(arr,n);
    printArray(arr,n);
    increasekey(arr,n,28,6);
    printArray(arr,n);
    return 0;
}
