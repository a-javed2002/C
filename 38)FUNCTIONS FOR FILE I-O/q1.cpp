#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Book
{
    int accession_number;
    string author;
    string title;
    int count;
    bool issued;
};

vector<Book> library;

void displayBook(int index)
{
    cout << "Accession number: " << library[index].accession_number << endl;
    cout << "Author: " << library[index].author << endl;
    cout << "Title: " << library[index].title << endl;
    cout << "Count: " << library[index].count << endl;
    cout << "Issued: " << (library[index].issued ? "Yes" : "No") << endl;
}

void addBook()
{
    Book book;
    cout << "Enter accession number: ";
    cin >> book.accession_number;
    cout << "Enter author: ";
    cin >> book.author;
    cout << "Enter title: ";
    cin >> book.title;
    cout << "Enter count: ";
    cin >> book.count;
    book.issued = false;
    library.push_back(book);
    cout << "\nBook added successfully....!!!\n" << endl;
}

void displayBooksByAuthor(string author)
{
    int count=0;
    cout << "Books by " << author << ":" << endl;
    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].author == author)
        {
            displayBook(i);
            count++;
        }
    }
    if (count==0)
    {
        cout<<"No Books Available"<<endl;
    }
}

void displayBooksByTitle(string title)
{
    int count = 0;
    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].title == title)
        {
            count += library[i].count;
        }
    }
    cout << "Number of books with title '" << title << "': " << count << endl;
}

void displayTotalBooks()
{
    int total = 0;
    for (int i = 0; i < library.size(); i++)
    {
        total += library[i].count;
    }
    cout << "Total number of books in the library: " << total << endl;
}

void issueBook(int index)
{
    if (library[index].issued)
    {
        cout << "Book already issued." << endl;
    }
    else if (library[index].count == 0)
    {
        cout << "No books available." << endl;
    }
    else
    {
        library[index].count--;
        library[index].issued = true;
        cout << "Book issued successfully." << endl;
    }
}

int main()
{
    int choice, number;
    string author, title;
    while (true)
    {
        cout << "1. Display book information" << endl;
        cout << "2. Add a new book" << endl;
        cout << "3. Display all the books in the library of a particular author" << endl;
        cout << "4. Display the number of books of a particular title" << endl;
        cout << "5. Display the total number of books in the library" << endl;
        cout << "6. Issue a book" << endl;
        cout << "7. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            if ((library.size()) > 0)
            {
                for (int i = 0; i < library.size(); i++)
                {
                    cout << (i + 1) << ". Accession Number: " << library[i].accession_number;
                    cout << "\t||\tTitle: " << library[i].title;
                    cout << "\t||\tAuthor: " << library[i].author;
                    cout << "\t||\tCount: " << library[i].count;
                    if (library[i].issued == 0)
                    {
                        cout << "\t||\tIssued: No...!!!" << endl;
                    }
                    else
                    {
                        cout << "\t||\tIssued: Yes...!!!" << endl;
                    }
                }
            }
            else
            {
                cout << "No Books In Library...!!!" << endl;
            }
            break;
        case 2:
            addBook();
            break;
        case 3:
            cout << "Enter Author Name" << endl;
            cin >> author;
            displayBooksByAuthor(author);
            break;
        case 4:
            cout << "Enter Title" << endl;
            cin >> title;
            displayBooksByTitle(title);
            break;
        case 5:
            displayTotalBooks();
            break;
        case 6:
            if ((library.size()) > 0)
            {
                for (int i = 0; i < library.size(); i++)
                {
                    cout << (i + 1) << ". Accession Number: " << library[i].accession_number;
                    cout << "\t||\tTitle: " << library[i].title;
                    cout << "\t||\tAuthor: " << library[i].author << endl;
                }
                cout << "Enter Number" << endl;
                cin >> number;
                if (number > 0 && number <= (library.size()))
                {
                    issueBook(number - 1);
                }
                else
                {
                    cout << "Invalid Number" << endl;
                }
            }
            else
            {
                cout << "No Books In Library...!!!" << endl;
            }
            break;
        case 7:
            return 0;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
    return 0;
}