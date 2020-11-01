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


int partition(vector<int> &a,int low, int high)
{
    int pivot = a[low], i = low, j = high;
    while(i < j)
    {
        while(i < j && pivot <= a[j])
            j--;
        if(i < j)  swap(a[i++],a[j]);
        while(i < j && pivot >= a[i])
            i++;
        if(i < j) swap(a[j--],a[i]);
    }
    return j;
}
 
 
void quicksort(vector<int> &a,int low, int high)
{
    int pivotpos;
    if(low < high)
    {
        pivotpos = partition(a,low,high);
        quicksort(a,low,pivotpos);
        quicksort(a,pivotpos+1,high);
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
     quicksort(obj,0,n-1);
    for(int i=0;i<n ;i++)
    {
        cout<<obj[i]<<" ";
    }
    cout <<endl;
}
