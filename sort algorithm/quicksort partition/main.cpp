//
//  main.cpp
//  quicksort partition
//
//  Created by Vincie on 2020/10/30.
//

#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int>& arr,int left, int right){
    int pivot=arr[right];
    int curr=left;
    for (int i=left;i<right;i++){
        if (pivot>arr[i]){
            swap(arr[curr],arr[i]);
            curr++;
        }
    }
    swap(arr[curr],arr[right]);
    return curr;
}




void quickSort(int left, int right, vector<int>& arr)
{
    
    if (left < right)
    {
        int p=partition(arr,left,right);
        quickSort(left,p-1,arr);
        quickSort(p+1,right,arr);
    }
}


int main() {
    int n;
    cin>>n;
    //cout<<n;
    vector<int> obj;
    
    for(int i=0;i<n ;i++)
    {
        int v;
        cin >> v;
        obj.push_back(v);
    }
     quickSort(0,n-1,obj);
    
    for(int i=0;i<n ;i++)
    {
        cout<<obj[i]<<" ";
        
    }
    cout <<endl;

    
}

