#include <iostream>
using namespace std;

class Movie
{
public:
    string name;
    string showtime;

    void displayMovies()
    {
        cout << "Movies currently playing:" << endl;
        cout << name << " at " << showtime << endl;
    }
};

class Ticket
{
private:
    int ticketID;
    bool sold;

public:
    int row;
    int seat;

    Ticket()
    {
        ticketID = stoi(getStudentID().substr(4, 2));
        sold = false;
    }

    bool isSold()
    {
        return sold;
    }

    void updateStatus()
    {
        sold = true;
    }

    void displayTicket()
    {
        cout << "Ticket details:" << endl;
        cout << "Row: " << row << endl;
        cout << "Seat: " << seat << endl;
        cout << "Ticket ID: " << ticketID << endl;
        cout << "Sold: " << sold << endl;
    }

    string getStudentID()
    {
        string id;
        cout << "Enter your student ID (22k-1234): ";
        cin >> id;
        return id;
    }
};

int main()
{
    Movie movie1;
    movie1.name = "Wednesday";
    movie1.showtime = "8:00pm";

    movie1.displayMovies();

    Ticket ticket1;
    ticket1.row = 4;
    ticket1.seat = 12;

    if (!ticket1.isSold())
    {
        ticket1.updateStatus();
        ticket1.displayTicket();
    }

    return 0;
}
