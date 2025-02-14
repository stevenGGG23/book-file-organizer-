Description of the Code
This program reads book information from a file named "library.dat" and displays it in a formatted table. Each book record contains details such as title, author, rating, purchase price, and publication year. The program also counts and displays the total number of books read from the file.

How the Program Works:
File Handling:

The program attempts to open "library.dat" and ensures the file exists using assert(myIn).
Reading Data:

Each book’s details are read using getline() and formatted input extraction (>>).
The program reads title, author, rating (with a word like "stars"), date (day, month, year), price, and condition.
Displaying Data:

A function DisplayTableHeading() prints the table headers.
A function DisplayOneLine() prints each book’s information in a formatted way.
Counting Books:

The program keeps track of the number of books and prints the total count at the end.
# book-file-organizer-
