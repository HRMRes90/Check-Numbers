#include <iostream>

using namespace std;
class Loop //The class

{public:        //access specifier
    //Attributes ( int variable )
     int num1;
     int num2;
     int num3;
     int sum=0;
     int count=0;
     int result=(num1+num2)*num3;
};
 int main (){
    Loop loop; //create an object of CheckNumbers
   //access the attributes and set values
      while (loop.count<1){
      cout << "enter the three numbers" << endl;
      cin >>  loop.num1>> loop.num2>> loop.num3;
      if (loop.num1>=10 && loop.num1<=20) {
        cout << "the number " <<  loop.num1 << " is between 10 and 20"  << endl;}
      if (loop.num2>=20 && loop.num2<=30){
         loop.sum+=loop.num1+loop.num2+loop.num3;
        cout << "the sum is " << loop.sum << endl;}
      if (loop.num3<5) {

      loop.result=(loop.num1+loop.num2)*loop.num3;
      cout << "the result is " << loop.result << endl;}
      loop.count++;}


 return 0;}
