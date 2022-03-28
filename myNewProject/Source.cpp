/*ABSTRACT: ANOTHER DEMO OF HELLO WORLD*/
#include<iostream>
#include<iomanip>

using namespace std;
//main function must have a return code
 int X(27), Y; 
int main()
{

  if (X <= 5) 

       {     Y = X * X;
              X = X + 5;

        }
  else 
        {      if (X < 10) 
                       Y = X - 2;
                else  
                        if (X < 29) 
                               Y = X + 10;
                        else
                               Y = X / 10; 
                 X++; 
        }
    cout <<  Y <<endl;
    cout << X<<endl; 
return 0;
}