#include<iostream>
using namespace std;
main(){
    int idx;
    bool check;
    cout <<"Enter the sixe of array..";
    cin >>idx;
    int numbers[idx];
    for(int x=0; x<idx; x++){
        cout<<"Enter " << x+1  <<" element of array...";
        cin >> numbers[x];
    }
    for(int y=0; y<idx; y++){
        if(numbers[y]%10==7 || numbers[y]/10==7){
            check=true;
        }
    }
    if(check){
        cout <<"BOOMS!";
    }
    else{
    cout << "None of the items contain 7 within them."; 
    }
}