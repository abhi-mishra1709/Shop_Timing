#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour, minute;
    string time; // Morning or Evevning , AM or PM ?

    cout << "Enter the current hour and minute with AM or PM(Separate each with space):-\n-->";
    cin >> hour >> minute;

    cin.ignore();  // Prevents newline error.
    getline(cin, time);

    if (time == "am")
    {
        time = "AM";
    }

    else if (time == "pm")
    {
        time = "PM";
    }

    if ((hour < 1 || hour > 12) || (minute < 0 || minute > 59) || (time != "AM" && time != "PM"))
    {
        cout << "Invalid Input";
        return 0;
        // Ends code early, no need to go further.                 
    }

    else if (hour == 12 && time == "AM")
    {
        cout << "Shop is CLOSED";
    }

    else if (hour == 12 && time == "PM")
    {
        cout << "Shop is OPEN";
    }

    else if ((hour >= 8 && time == "AM") || (hour < 6 && time == "PM"))
    {
        cout << "Shop is OPEN";
        // wrong output for 12 AM and 12 PM , so these case specified earlier.
    }

    else
    {
        cout << "Shop is CLOSED";
    }
    return 0;
}