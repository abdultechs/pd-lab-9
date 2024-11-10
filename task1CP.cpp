#include<iostream>
using namespace std;
main()
{
    string fruit[4]= {"peach", "apple", "guava", "watermelon"};
    string selectedFruit;
    int price[4], quantity,total;
    price[0]=60;
    price[1]=70;
    price[2]=40;
    price[3]=30;

    cout<<"Enter the name of fruit: ";
    cin>>selectedFruit;
    cout<<"Enter Quantity ";
    cin>>quantity;
    for(int x=0; x<4; x++){
    if(selectedFruit==fruit[x]){
        total = price[x]*quantity;
    }
    }
    cout <<"total bills is   " <<total;


}