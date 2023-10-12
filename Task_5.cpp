// Temprature Convertor between Celsius and Fahrenheit

#include<iostream>
using namespace std;

int main()
{
     float Tempratue ;

     cout<<"EnterTemprature : ";
     cin>>Tempratue;
   

     char Unit ;
     cout<<"Enter Unit of Temprature (Celsius/Fahrenheit) : ";
     cin>>Unit;
     cout<<endl;
   
   cout<<"Temprature "<<Unit<<"is : "<<Tempratue<<" ( "<<Unit<<" ) "<<endl;

  switch(Unit)
  {
    case 'C':
    cout<<"Tempreture in Fahrenheit is : "<< ((9.0/5.0)*Tempratue+32.0);
    break;

    case 'F':
    cout<<"Temprature in Celsius is : ";
    cout<< (Tempratue-32.0)*(5.0/9.0);
    break;

    default:
    cout<<"You have Entered undefined conversion unit ";
  }
    return 0;
}