//
//  main.cpp
//  mergesort
//
//  Created by Vincie on 2020/10/30.
//

#include <iostream>
#include <vector>
using namespace std;
using std::vector;
void merge(int *obj,int *L,int leftcount,int *R,int rightcount){
    int i=0,j=0,k=0;
    while(i<leftcount && j< rightcount) {
        if(L[i]  <= R[j]) {
            obj[k] = L[i];
            i++;
        }
        else {
            obj[k] = R[j];
            j++;
        }
        k++;
        }
    while(i <leftcount) {
        obj[k] = L[i];
        k++;
        i++;
    }
    while(j <rightcount) {
        obj[k] = R[j];
        k++;
        j++;
    }
}

void mergeSort(int *obj,int n)
{
    int mid,i, *L, *R;
    if (n<2) return ;
    mid=n/2;
    L=new int[mid];
    R=new int[n-mid];
        
    for (i=0;i<mid;i++){
        L[i]=obj[i];
    }
    //cout<<endl;
    for (i=mid;i<n;i++){
        R[i-mid]=obj[i];
    }
    mergeSort(L,mid);
    mergeSort(R,n-mid);
    merge(obj,L,mid,R,n-mid);
    delete []R;
    delete []L;
}

int main() {
    int n=0;
    cin>>n;
    //cout<<n;
    int obj[n];
    int i=0;
    while(i <n)
    {
        int v;
        cin >> v;
        obj[i]=v;
        i++;
    }
    mergeSort (obj , n);
    
    for(int i=0;i<n ;i++)
    {
        cout<<obj[i]<<" ";
        
    }
    cout <<endl;
    
}
