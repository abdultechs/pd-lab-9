#include<iostream>
using namespace std;
main()
{
   string movies[5] =  {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
   string selectedMovie;
   float discount;
   cout <<"Enter the name of Movie  ";
   cin >> selectedMovie;
   for(int x=0; x<5; x++){
      if(movies[x]==selectedMovie && x%2==0){
         discount = 0.05;
      }
      else{
         discount =0.1;
      }
   }
   int price = 500-(500*discount);
   cout<<"Price of movie is " <<price;
   
}