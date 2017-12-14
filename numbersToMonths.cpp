/**
 * Programmer: Argin Aslanian
 * Purpose: This program will display the name of a month in either Italian or English
 *          given the number of the month by the user.
 *
 * A map with a key of string and value of a map with a key of int and a value of string is created.
 *      The key of the map is the language.
 *      The value of the map is another map, with a key that is the number of the month, and a value
 *                                           that is the name of the month, in that language.
 *
 * Constraints & Assumptions.
 *  1. The user will enter either 'English' or 'Italian'.
 *  2. The user will enter numbers ONLY between 1 and 12.
 *  3. If the user enters another value, display appropriate message.
 */

#include <iostream>
#include <map>
using namespace std;

int main() {

    //Create the map.
    map<string, map<int, string>> months = {

            {"Italian",
                    {
                            {1, "Gennaio"},
                            {2, "Febbraio"},
                            {3, "Marzo"},
                            {4, "Aprile"},
                            {5, "Maggio"},
                            {6, "Giugno"},
                            {7, "Luglio"},
                            {8, "Agosto"},
                            {9, "Settembre"},
                            {10, "Ottobre"},
                            {11, "Novembre"},
                            {12, "Dicembre"}
                    }

            },

            {"English",
                    {
                            {1, "January"},
                            {2, "February"},
                            {3, "March"},
                            {4, "April"},
                            {5, "May"},
                            {6, "June"},
                            {7, "July"},
                            {8, "August"},
                            {9, "September"},
                            {10, "October"},
                            {11, "November"},
                            {12, "December"}
                    }
            }

    };

    //Declare variables.
    string lang;
    int num;

    //Get language.
    cout << "Choose Language: Italian or English? " << endl;
    cin >> lang;

    //Get number of the month.
    cout << "Choose the number of the month: " << endl;
    cin >> num;

    //Check if the language entered exists in the map.
    if (months.count(lang) > 0) {

        //If it does, check if the number of the month entered exists in the map.
        if (months[lang].count(num) > 0) {

            //If it does, display to the user.
            cout << "Month number " << num << " in " << lang << " is " << months[lang][num] << "." << endl;

        } else {

            //If the number of the month does not exist, display appropriate message.
            cout << "Error: You entered an invalid value. " << endl;

        }

    } else {

        //If the language entered did not exist, display appropriate message.
        cout << "Error: You entered an unsupported language for this program. " << endl;

    }

    return 0;
}