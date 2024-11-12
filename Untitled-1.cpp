//Zion Ogunsola
//Lab 11
//11/12/2024
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std; 
int main ()

{
    const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE];
    int i=0;
    int counter;
    double total;
 
  int hundredOccurence=0;


    for( i=0;i<50;i++)
{
      if(i<25)
      {
        alpha[i]= pow(i,2);
      cout << alpha[ i] << " ";
      }
      else
     {
      alpha[i]= i*3;
        cout << alpha[i] << " ";
     }
       if ((i+1)%10==0)
      cout << endl;
}
    for(i=0;i<=50;i++)
    {
      alpha[i]=   rand() % 100; 
      total += alpha[i];
      cout << alpha[i] << " ";
      counter+=1;
       
 
    }
     double avg = total/50;

    cout << "The average of the elements is " << avg << endl;
   if (i==100)
      cout << "There is " <<hundredOccurence << "occurence of 100" << endl;
    else 
    cout << "There are no occurences of 100" << endl;
    hundredOccurence +=1;
 
    return 0;
}