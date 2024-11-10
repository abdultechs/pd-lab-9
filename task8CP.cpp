#include<iostream>
using namespace std;
main(){
    int size, time;
    cout <<"Enter how many time you want to swich the colors: ";
    cin >>size;
    string colors[size];
    cout <<"Enter colors one by one, one per line"<<endl;
    for(int x=0; x<size; x++){
        cin >> colors[x];
    }
    int count = 0;
    for(int y=0; y<size-1; y++){
        if (colors[y]!=colors[y+1])
        {
           count++; 
        }
        
    }
    time = (size*2)+count;
    cout <<time;



}