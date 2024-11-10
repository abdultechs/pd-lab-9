#include<iostream>
using namespace std;
main(){
   string moves[10] =  {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"}; 
   string passward; 
    cout <<"Enter 4-digit passward   ";
    cin>>passward;
    int idx;
    if(true){
    for (int i = 0; i < 4; i++) {
        // Manually check if each character is between '0' and '9'
        if (passward[i] < '0' || passward[i] > '9' ) {
            cout << "Invalid input." << endl;
            break;
        }
    }
    }
    else if(true){

    for(int x=0; x<4; x++){
        idx = x+(passward[x]-'0');
        if(idx>=10){
            idx= idx%10; 
        }
    cout << moves[idx] <<",";
    }
    }
}