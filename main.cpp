#include <iostream>
#include <vector>
#include <string>
using namespace std;

//fizzBuzz function generator
void fizzBuzzFunction(int loopData)
{
    //if number entered by user is < 0 then make it a positive
    unsigned int positiveNumber = loopData;

    //empty string to add either fizz || buzz
    string fizzString;

    //for loop based on the input
    for(int i = 1; i <= positiveNumber; i++)//condition on the amount of loops
    {
        if(i % 3 == 0 && i % 5 == 0)//modules of 3 && 5 == 0(FizzBuzz)
        {
            fizzString = "FizzBuzz";
        }
        else if(i % 3 == 0)//modules of 3 == 0(Fizz)
        {
            fizzString = "Fizz";
        }
        else if(i % 5 == 0)//modules of 5 == 0(Buzz)
        {
            fizzString = "Buzz";
        }
        else
        {
            fizzString = to_string(i); //if not int the number sequence print the number
        }

        cout << fizzString << endl;//printing & changing the string to a new
    }
}

int main()
{
    fizzBuzzFunction(15);//calling function
    return 0;
}
