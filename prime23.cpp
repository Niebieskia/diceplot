#include <iostream>
using namespace std;
int main()
{
  //"Enter a positive integer:"
  //cin integer
  // using loop print either yes on one line, and
  // on the next line, a count of 2 factors and a count of 3 factors
  //first divide by 2. Then if the quotient multiplied by 3 
  cout<<"Enter a positive integer: "<<endl;
  int input, numTwos=0, numThrees=0; 
  cin >> input;

  while (input % 2 == 0) { //no remainder for 2
    input = input / 2; //input = 18/2=9
    numTwos+=1; //1
  }
  
  while (input % 3 == 0) { //if divisible by three
      input = input/3; //input = 9/3=3//1
      numThrees+=1; //1 //2
  }
  
  if (input != 1) { //1 != 1 false
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
    cout << "Twos="<<numTwos<<" Threes="<<numThrees<<endl;
  }

  
  
  return 0;
}