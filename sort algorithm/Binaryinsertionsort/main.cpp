//
//  main.cpp
//  Binaryinsertionsort
//
//  Created by Vincie on 2020/10/31.
//

#include <iostream>
#include <vector>
using namespace std;
using std::vector;
void binaryinsertionSort(vector<int>& obj,int n)
{
    
    for(int i = 0; i < n; ++i)
    {
        int temp=obj[i];
        int low=0;
        int high=i-1;
        while (low<=high){
            int mid=(low+high)/2;
            if (obj[mid]<=temp){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        for(int j=i;j>low;j--){
            obj[j]=obj[j-1];
        }
        obj[low]=temp;
        
        
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
    binaryinsertionSort (obj , n);
    
    for(int i=0;i<n ;i++)
    {
        cout<<obj[i]<<" ";
    }
    cout <<endl;

    
}
