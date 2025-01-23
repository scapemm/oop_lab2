//
//  main.cpp
//  Lab2_ex
//
//  Created by Abror Shukurullayev on 23/01/25.
//

#include <iostream>
#include <random>
using namespace std;
int main(){
    srand(time(NULL));
    int num = rand()%15+1;
    int a;
    cout << "Guess the number" << endl;
    lm:
    cin >> a;
    //cout << num;
    string f="NO";
    if(num==a){
        cout << "You won!" <<  endl;
    }
    else{
        cout << "No! wanna continue?" << endl;
        cin >> f;
        for(int i=0; i<f.size(); i++){
           f[i]= tolower(f[i]);
        }
        if(f=="yes") goto lm;

        
    }
    
   
}
