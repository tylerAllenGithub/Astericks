/*Ty;er Allen
CS111
3-17-2015
Program 3 Assignment 4
This program will output n number of rows of * with the number of * on each row equal to its row number*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int numRows;
  cout<<"Enter number of rows: ";
  cin>>numRows;
  //ask for input
  for(int i=1;i<=numRows;i++)
    {//cycle through for numRows times
      for(int k=numRows;k>=i;k--)
        {//print space for numRow-curent row number times
          cout<<" ";
        }

      for(int r=1;r<=i;r++)
	{//print * for current row number times
	   cout<<"*";
      }
      cout<<endl;
    }
  return 0;
}
