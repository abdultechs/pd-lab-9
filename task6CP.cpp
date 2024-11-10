#include<iostream>
using namespace std;
main(){
    int size,n,i=1,x; //n is number of transformations
    cout <<"ENter the size of array..";
    cin >>size;
    int arr[size];
    cout << "Enter the number of transformations " ;
    cin >> n;
    for( x=0;x<size; x++){
        cout <<"Enter " <<x+1 <<" element of array ";
        cin >> arr[x];
    }
    while(i<=n){
    for(int y=0; y<size; y++){
        if(arr[y]%2==0){
            arr[y] = arr[y]-2;
        }
        else{
            arr[y] = arr[y]+2;
        }
    }
    i++;
    }
    cout <<"[";
    for(int z=0; z<size; z++){
        cout << arr[z] <<",";
    }
    cout <<"]";


}