//
//  anotherversion.cpp
//  quick sort
//
//  Created by Vincie on 2020/11/1.
//

#include "anotherversion.hpp"
#include <iostream>
#include <vector>
using namespace std;
using std::vector;



 
 
void quicksort(vector<int> &a,int left, int right)
{

    int i, j, t, temp;
    if(left > right)
        return;
    temp = a[left]; //temp中存的就是基准数
    i = left;
    j = right;
    while(i != j) { //顺序很重要，要先从右边开始找
        while(a[j] >= temp && i < j)
            j--;
        while(a[i] <= temp && i < j)//再找右边的
            i++;
        if(i < j)//交换两个数在数组中的位置
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    //最终将基准数归位
    a[left] = a[i];
    a[i] = temp;
    quicksort(a,left, i-1);//继续处理左边的，这里是一个递归的过程
    quicksort(a,i+1, right);//继续处理右边的 ，这里是一个递归的过程

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
