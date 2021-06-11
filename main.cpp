/* What this tool does:
 *
 * This takes input from the user to find how much it will cost for us (justin's cleaning service) to clean
 * a room.
 *
 * Requirements:
 *
 * Charges $40 per small room
 * Charges $60 per large room
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
    const int costPerRoom_small {40};
    const int costPerRoom_large {60};
    const float salesTax {0.06};
    const int estimateExpiry {30};
    //////

    //Intro
    cout << "Hello from Justin's Cleaning Service!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Service Prices:  " << endl;
    cout << "       $" << costPerRoom_small << " For a small room." << endl;
    cout << "       $" << costPerRoom_large << " For a large room." << endl;
    cout << "\n  !!   Sales tax is " << salesTax * 100 << "%   !! " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    //first prompt
    cout << "How many small rooms will you need serviced?" << endl;
    int smallRooms {0};
    cin >> smallRooms;


    //Second prompt
    cout << "How many large rooms will you need serviced?" << endl;
    int largeRooms {0};
    cin >> largeRooms;



    //Calculate cost
    int laborCost_small { smallRooms * costPerRoom_small };
    int laborCost_large { largeRooms * costPerRoom_large };
    int totalLabor { laborCost_large + laborCost_small };
    float calculatedTax {  totalLabor * salesTax };


    //Display to the user the cost
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!! Estimates are valid for " << estimateExpiry << " days. !!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "\n-----------------------------------------" << endl;
    cout << "    " << smallRooms << " * Small Rooms        =   $" << laborCost_small << endl;
    cout << "    " << largeRooms << " * Large Rooms        =   $" << laborCost_large << endl;
    cout << "-----------------------------------------" << endl;
    cout << "    Total Cost of labor:       $" << totalLabor << endl;
    cout << "                           +    " << endl;
    cout << "              Sales tax:       $" << calculatedTax << endl;
    cout << "                           =    " << endl;
    cout << "                  Total:       $" << totalLabor + calculatedTax << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;



    return 0;
}
