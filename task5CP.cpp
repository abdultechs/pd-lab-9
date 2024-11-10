#include<iostream>
using namespace std;
main(){
    int size;
    cout <<"Enter size of array...";
    cin >> size;
    string word[size];
    for (int x=0; x<size; x++){
        cout<<"Enter " << x+1 <<" element of array ";
        cin >> word[x];
    }
    bool check=true;
    for (int y =0; y<size-1; y++) {
        if (word[y]!=word[y+1]){
            check = false;
            break;
        }
    }
    if(check){
        cout <<"true";
    }
    else{
        cout <<"false";
    }


}