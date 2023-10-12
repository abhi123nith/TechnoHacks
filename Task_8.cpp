#include<iostream>
using namespace std;

void BinaryToDecimal( int binary)
{
     int b=binary;
     int ans=0;
   while(b!=0)
   {
     int p=1;
   int r=b%10;
   //int d=0;
   ans+=r*p;
   p*=2;
   b/=10;
   
   }
   cout<<binary<<"="<<ans;
}
int main()
{
     int b;
    cin>>b;
    BinaryToDecimal(b);
    return 0;
}