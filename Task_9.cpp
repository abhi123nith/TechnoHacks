// A program to generate a random password of userdefined length

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const char Domain[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int length = sizeof(Domain)-1;// length of our domain string 
int main()
{
    int n; // length of our password
    cout<<"Enter the length of password:";
    cin>>n;
    srand(time(0));   //to generate new character every time 

    if(n==0) // if no length is given 
    {
        cout<<"Please enter a minimum length of password ,it can't be empty !!!";
    }
    else{
    cout<<"Your password is : ";
    for(int i = 0; i < n; i++)
    cout << Domain[rand() % length]; // rand() to generate a random character from our domain character array
    } 
   return 0;
}