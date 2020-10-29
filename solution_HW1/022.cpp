//
//  main.cpp
//  022
//
//  Created by Vincie on 2020/10/28.
//

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int remains=0;
    if (n==1)remains=1;
    if (n<=3 && n>1)remains=2;
    if (n==4)remains=4;
    if (log(n)/log(2)==int (log(n)/log(2))){
        remains=n;
    }
    else{
        int power=int (log(n)/log(2));
        remains=pow(2,power);
    }
    cout<<remains<<endl;

} 

//n是2的指数次的时候，返回n,若不是则提交小于n的2的指数次；
//基础情况，n=2,2;n=4,4;只要能凑到4对就可以保留所有；只要凑到8对就可以保留所有
