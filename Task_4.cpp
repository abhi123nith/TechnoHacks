// sum of two results after rolling two dices 
#include<bits/stdc++.h>
using namespace std;

int main()
{
   srand(time(0)); // to generate a different random  number each time
   int  Result1=rand()%6+1; // first number after rolling dice1 between [1,6]
  
    int Result2=rand()%6+1; // second number after rolling dice2 between [1,6]
   
  cout<<"Result After rolling first Dice : "<<Result1<<endl;
  cout<<"Result After rolling second Dice : "<<Result2<<endl;

   
   return 0;
}