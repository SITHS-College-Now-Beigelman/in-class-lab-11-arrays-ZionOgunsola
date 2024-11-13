//Zion Ogunsola
//Lab 11
//11/12/2024
#include <cmath> // Includes cmath
#include <iostream>//Includes iostream
#include <iomanip>// Includes iomanip 
#include <cstdlib> //Includes cstdlib
#include <ctime> //includes ctime

using namespace std; 
int main () //Begins int function

{
    const int ARRAY_SIZE = 50;//defines variable
    double alpha[ARRAY_SIZE];//defines variable
    int i=0;//defines variable
    double total;//defines variable 
    int hundredOccurence=0; //defines variable


    for( i=0;i<50;i++) //Sets condition for for loop
{
      if(i<25) //If statemnent
      {
        alpha[i]= pow(i,2); //squares variable i
      cout << alpha[ i] << " "; //outputs statement
      }
      else
     {
      alpha[i]= i*3; // multiplies i by 3
        cout << alpha[i] << " "; //output statement
     }
       if ((i+1)%10==0) //if statement
      cout << endl; //new line
}
cout << "Randomly generated numbers " << endl; //outputs statement
    for(i=0;i<=50;i++)//Sets condition for for loop
    {
      alpha[i]=   rand() % 100 + 1; //generates random nummber  
      total += alpha[i]; //adds current i value to total
      cout << alpha[i] << " "; //outputs statement
      
      if (i==100) //if statement
     {
      hundredOccurence +=1; // adds one to hundredOccurence

      cout << "There is " <<hundredOccurence << "occurence of 100" << endl;//outputs statement
     }
        
 
    }
    double avg = total/50; //defines variable
    if (hundredOccurence==0)
    cout << "There are no occurences of 100" << endl;//outputs statement
  
    return 0;
    
}
/*
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361 
400 441 484 529 576 75 78 81 84 87 
90 93 96 99 102 105 108 111 114 117 
120 123 126 129 132 135 138 141 144 147 
Randomly generated numbers 
84 87 78 16 94 36 87 93 50 22 63 28 91 60 64 27 41 27 73 37 12 69 68 30 83 31 63 24 68 36 30 3 23 59 70 68 94 57 12 43 30 74 22 20 85 38 99 25 16 71 14 There are no occurences of 100
*/ 