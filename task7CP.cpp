#include<iostream>
using namespace std;
main(){
    int size;
    string s1;
    string s2;
    cout <<"ENter the size of string ";
    cin>>size;
    cout <<"Enter first string of " << size <<" size ";
    cin >> s1;
    cout <<"Enter second string of " << size <<" size ";
    cin >> s2;
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(s1[i]==s2[j]){
                count=count+1;
                s2[j]='#';
                break;
            }

        }
    }
    cout << count;



}