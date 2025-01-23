//
//  main.cpp
//  Lab2_ex
//
//  Created by Abror Shukurullayev on 23/01/25.
//

#include <iostream>
#include <random>
int fib(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else return fib(n-1)+fib(n-2);
}
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i=1; i<=a; i++) cout << fib(i) << ' ';
    
   
}
