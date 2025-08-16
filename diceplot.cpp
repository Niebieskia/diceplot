// ============================================================================
// diceplot.cpp
//
//
// ============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

// Prototype/define functions anywhere below
void printHistogram(int Ar[]);
int roll(); //roll 1 die
int sumDie(); //roll 4 die
void arrayCount(int Ar[]); //arraycount function input array

int main()
{
  int seed, n, counter=0;
  int countAr[21] = {0}; // {0, 0 , 0...0} 21 times
  cin >> seed >> n;

  // Seed the pseudo-random number generator for repeatable results
  srand(seed);

  while (counter < n){ //while less than n.
    arrayCount(countAr);

    counter++; 
  }
  // Your code here
  printHistogram(countAr);
  


 // int testCounts[21]; // 21 options of sum of 4 dice => [4,24]
 // for (int i=0; i<21; i++)
  //  testCounts[i] = i/2; // fill the array
  //printHistogram(testCounts); // call your method



  return 0;
}

int roll(){ //generates random number
  int n;
  n = rand() % 6 + 1;
  return n;
}

int sumDie(){ //sums 4 random die rolls
  int sum = 0;
  sum = roll() + roll() + roll() + roll();
  return sum; 
}

void arrayCount(int Ar[]){
  int val = sumDie(); 
  for(int i=0; i<21;i++){
    if(val == i+4){
      Ar[i]++;
    }
  }
}

void printHistogram(int Ar[]){
  for(int r=0; r<21;r++){//each row of possibility there's 20 
    cout << r+4 << ":";
    for(int x=0; x<Ar[r];x++){
      cout << "X";
    }
    cout << endl;
  }
}