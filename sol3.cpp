//
//  main.cpp
//  Lab2_ex
//
//  Created by Abror Shukurullayev on 23/01/25.
//

#include <iostream>
using namespace std;
int main(){
    unsigned int a,b;
    cin >> a >> b;
    cout << (a&b) <<' ' << (a|b) << ' ' << (~a&b) << ' ' << (b^a) << ' ' << (a<<2) << ' ' << (b>>3) << '\n';
}
