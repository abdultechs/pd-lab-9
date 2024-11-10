#include<iostream>
using namespace std;
string checkLength(string word){
    int x=0;
    for (x=0; word[x]!='\0'; x++){
        
    }
    if(x%2==0){
        return "true";
    }
    else{
        return "false";
    }

}
main(){
    string word;
    cout <<"Enter any word... ";
    cin>>word;
    cout <<checkLength(word);
}