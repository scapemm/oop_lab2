//
//  main.cpp
//  Lab2_ex
//
//  Created by Abror Shukurullayev on 23/01/25.
//

#include <iostream>
using namespace std;
int main(){
    double arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n' ;
}
