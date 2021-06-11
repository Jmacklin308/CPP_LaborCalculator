/* What this tool does:
 *
 * This takes input from the user to find how much it will cost for us (justin's cleaning service) to clean
 * a room.
 *
 * Requirements:
 *
 * Charges $40 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 *
 * ~~~~~~~~~~~~~Pseudocode~~~~~~~~~~~~~
 *  Prompt the user for how many rooms they want serviced
 *  Display the number of rooms
 *  Display the price per room
 *
 *  display the cost of labor: (number of rooms * cost per room )
 *  display tax: number of rooms * sales tax of 6% ( x * 0.06)
 *  display the total estimate : the cost of labor + tax
 *  Display that "estimates are valid for 30 days"
 *
 *
 * */

#include <iostream>
using namespace std;

int main() {

    ///////Constants needed
    const int costPerRoom {40};
    const float salesTax {0.06};
    const int estimateExpiry {30};
    //////

    //Intro
    cout << "Hello from Justin's Cleaning Service!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Important info: " << endl;
    cout << "Labor cost is $" << costPerRoom << " per room." << endl;
    cout << "Sales tax is " << salesTax * 100 << "% " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    //first prompt
    cout << "How many rooms will you need serviced?" << endl;
    cout << "Enter Here: ";
    int rooms {0};
    cin >> rooms;


    //calulate cost
    int laborCost { rooms * costPerRoom };
    float calculatedTax { laborCost * salesTax };


    //Display to the user the cost
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "Cost of labor is:          $" << laborCost << endl;
    cout << "Sales tax is:              $" << calculatedTax << endl;
    cout << "Total cost is:             $" << laborCost + calculatedTax << endl;
    cout << "Estimates are valid for " << estimateExpiry << " days." << endl;



    return 0;
}
