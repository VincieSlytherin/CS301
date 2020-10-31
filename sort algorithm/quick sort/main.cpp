//
//  main.cpp
//  quick sort
//
//  Created by Vincie on 2020/10/30.
//

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

void quickSort(int left, int right, vector<int>& arr)
{
    int low, high, m, pivot;
    low = left; high = right;
 
    m = (low + high) / 2;
    if (arr[low] > arr[high]) swap(arr[low], arr[high]);
    if (arr[m] > arr[high]) swap(arr[m], arr[high]);
    if (arr[m] > arr[low]) swap(arr[m], arr[low]);
 
    pivot = arr[low];
    while ( low < high )
    {
        while ( low<high && arr[high] >= pivot)
            high--;
        while (low < high && arr[low] <= pivot)
            low++;
        if (low < high)
            swap(arr[low], arr[high]);
    }
 
    if (left < low)
    {
        swap(arr[left], arr[low]);
        quickSort(left, low-1, arr);
        quickSort(low + 1, right, arr);
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
