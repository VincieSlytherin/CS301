//
//  main.cpp
//  018
//
//  Created by Vincie on 2020/10/28.
//

#include <iostream>
#include <vector>
using namespace std;
int numberunits[]={6,2,5,5,4,5,6,3,7,6,6};//the units cost for each number from 0-9

int cost_of_the_number(int i){//the cost units for the number
    int totalcost=0;
    if (0<=i && i<10) totalcost=numberunits[i];
    else if (i>=10 && i<100){
        int cost_for_unit=cost_of_the_number(i%10);
        int cost_for_ten=cost_of_the_number(i/10);
        totalcost=cost_for_unit+cost_for_ten;
        
    }
    else{
        int cost_for_unit=cost_of_the_number(i%10);
        int cost_for_ten=cost_of_the_number(i/10%10);
        int cost_for_hundred=cost_of_the_number(i/100);
        totalcost=cost_for_unit+cost_for_ten+cost_for_hundred;
        }
    return totalcost;
}

int main() {
    int n=0;
    cin>>n;
    int sum=n-4;//the sum of the units for the numbers
    int count=0;
    for (int i=0;i<1000;i++){
        for (int j=0;j<1000;j++){
            int the_sum=i+j;
            int cost_i=cost_of_the_number(i);
            int cost_j=cost_of_the_number(j);
            int cost_the_sum=cost_of_the_number(the_sum);
            if (cost_i+cost_j+cost_the_sum==sum){
                count++;
            }
            
        }
    }
    cout<<count<<endl;
   
}
