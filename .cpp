#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
using namespace std;

// Function prototypes
void DisplayTableHeading();
void DisplayOneLine(const string& title, const string& author, float rating, float price, int year);

int main() 
{
    // Declare necessary variables
    int year, day, month, count = 0;
    string title, author, starsWord, condition;
    float rating, price;

    // Open the file and check if it exists
    ifstream myIn("library.dat"); 
    assert(myIn);

    // Display the table heading
    DisplayTableHeading();

    // Read book records from the file
    while (myIn >> ws && getline(myIn, title)) 
    {
        getline(myIn, author);
        myIn >> rating >> starsWord; 
        myIn >> day >> month >> year;
        myIn >> price >> condition;
        myIn.ignore(); 

        // Display the book details
        DisplayOneLine(title, author, rating, price, year);

        // Increment book count
        count++;
    }

    // Display total number of books read
    cout << "\nTotal number of books read: " << count << endl;

    myIn.close();
    return 0;
}

// Description: Prints the heading of the output table
void DisplayTableHeading()
{
    cout << left;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(25) << "TITLE" 
         << setw(25) << "AUTHOR" 
         << "\tRATING\tPRICE\tYEAR" << endl;
    cout << string(70, '-') << endl; // Adds a separator line
}

// Description: Prints one line of book information
void DisplayOneLine(const string& title, const string& author, float rating, float price, int year)
{
    cout << setw(25) << title 
         << setw(25) << author 
         << "\t" << rating 
         << "\t" << price 
         << "\t" << year << endl;
}
