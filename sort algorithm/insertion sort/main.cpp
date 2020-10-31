//
//  main.cpp
//  insertion sort
//
//  Created by Vincie on 2020/10/30.
//
#include <iostream>
#include <vector>
using namespace std;
using std::vector;
void insertionSort(vector<int>& obj,int n)
{
    for(int i = 0; i < n; ++i)
    {
        for (int j = i; j >=1; --j){
            if (obj[j]<obj[j-1]){
                int temp= obj[j];
                obj[j]=obj[j-1];
                obj[j-1]=temp;
            }
            else
                break;
        }
    }
 
    //return obj;
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
    //vector<int> result= insertionSort (obj , n);
    insertionSort (obj , n);
    
    for(int i=0;i<n ;i++)
    {
        cout<<obj[i]<<" ";
        
    }
    cout <<endl;

    
}
