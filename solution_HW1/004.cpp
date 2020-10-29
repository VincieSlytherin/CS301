//
//  main.cpp
//  004
//
//  Created by Vincie on 2020/10/28.
//

#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n=0;
    cin>>n;
    int obj[1000]={0};
    vector<int> number;
    for(int i=0;i<n;i++)
    {
        int v;
        cin >> v;
        obj[v]=obj[v]+1;
    }
    
   
    for(int i=0;i<1000;i++)
    {
        if (obj[i]>=1){
            while (obj[i]!=0){
                
                cout<<i<<" ";
                obj[i]--;
            }
        }
        else cout<<"";
    }
    cout <<endl;

}
