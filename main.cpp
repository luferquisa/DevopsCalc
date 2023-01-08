#include <iostream>
#include <iomanip>
#include "calculator.h"

using namespace std;

int main()
{

    /// Initialize simple calc objects
    Calculator calc;

    /// Assign calculator pointer to the simple calc object
    /// This will be used later for polymorphism
    Calculator* calcPtr = &calc;


    cout << "Welcome again to my Calculator App\n\n"
    << "This app has 2  special keywords, result and mem.\n"
    << "result stores the result of the previous calculation.\n"
    << "mem allows you to store and access a number.\n"
    << "Both can be used instead of numbers during calculations.\n"
    << "They are both local to the mode you are using.\n";

    /// Welcome message for simple calc
    calcPtr->welcome();

    /// Set precision for all uses of cout
    /// Shows up to 15 places
    cout << setprecision(15);

    /// Take in input and loop
    string input = "";
    while (cin >> input && input != "exit")
    {
        /// Call virtual functions from base class pointer to get polymorphic
        /// Executes function based on type of object
        calcPtr->parseOperation(input);
        calcPtr->welcome();
    }

    return 0;
}
