#include <iostream>
#include <vector>
using namespace std;

class DataScientist
{
private:
    string firstName;
    string lastName;
    string country;
    string highestEducation;
    int age;
    int numQuestions;
    int numAnswers;
    int id;

public:
    static int count; // Total number of Data Scientists
    static int nextID;

    // Parameterized constructor
    DataScientist(string first, string last, string edu, int age, string country)
        : firstName(first), lastName(last), highestEducation(edu), age(age),
          country(country), numQuestions(0), numAnswers(0), id(nextID)
    {
        nextID++; // increment not working
        count++;
    }

    // Getter functions
    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    string getCountry()
    {
        return country;
    }

    int getAge()
    {
        return age;
    }

    int getNumQuestions()
    {
        return numQuestions;
    }

    int getNumAnswers()
    {
        return numAnswers;
    }

    int getId()
    {
        return id;
    }

    // Setter functions
    void setFirstName(string first)
    {
        this->firstName = first;
    }

    void setLastName(string last)
    {
        this->lastName = last;
    }

    void setCountry(string country)
    {
        this->country = country;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setHighestEducation(int edu)
    {
        this->highestEducation = edu;
    }

    // Other member functions
    void AskQuestion()
    {
        numQuestions++;
    }

    void AnswerProblem()
    {
        numAnswers++;
    }
};

int DataScientist::nextID;
int DataScientist::count = 0;

class Admin
{
private:
    string firstName;
    string lastName;
    string country;
    int age;
    int id;

public:
    static int nextID;

    // Parameterized constructor
    Admin(string first, string last, int age, string country)
        : firstName(first), lastName(last), age(age), country(country),
          id(nextID)
    {
        nextID++;
    }

    // Getter functions
    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    string getCountry()
    {
        return country;
    }

    int getAge()
    {
        return age;
    }

    int getId()
    {
        return id;
    }

    // Setter functions
    void setFirstName(string first)
    {
        firstName = first;
    }

    void setLastName(string last)
    {
        lastName = last;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setCountry(string country)
    {
        this->country = country;
    }

    // Member function to display total number of Data Scientists
    void TotalUser()
    {
        cout << "Total number of Data Scientists: " << DataScientist::count << endl;
    }
};

int Admin::nextID = 100;

int main()
{
    string x;
    cout << "Enter your student ID (22k-1234): ";   //use for Data Scientist ID
    cin >> x;
    DataScientist::nextID = stoi(x.substr(5, 1) + x.substr(7, 1));
    // cout << DataScientist::nextID << endl;

    // Creating an Admin object
    Admin admin("Yousuf", "Raza", 30, "Pakistan");

    // Creating Data Scientist objects
    DataScientist ds1("Aisha", "Ejaz", "MS", 25, "Canada");
    DataScientist ds2("Hina", "Khan", "PhD", 35, "Australia");

    // Displaying Admin Details
    cout << "Admin 1: "
         << ", ID: " << admin.getId() << ", " << admin.getFirstName() << " " << admin.getLastName() << ", "
         << admin.getAge() << " years old, from " << admin.getCountry() << endl;

    // Displaying the user count
    admin.TotalUser();

    // Displaying the details of the Data Scientists
    ds1.AskQuestion();
    cout << "Data Scientist 1: "
         << "ID: " << ds1.getId() << ", " << ds1.getFirstName() << " " << ds1.getLastName() << ", "
         << ds1.getAge() << " years old, from " << ds1.getCountry() << ", Questions: " << ds1.getNumQuestions() << ", Answers: " << ds1.getNumAnswers() << endl;

    ds2.AskQuestion();
    ds2.AskQuestion();
    ds2.AnswerProblem();
    cout << "Data Scientist 2: "
         << "ID: " << ds2.getId() << ", " << ds2.getFirstName() << " " << ds2.getLastName() << ", "
         << ds2.getAge() << " years old, from " << ds2.getCountry() << ", Questions: " << ds2.getNumQuestions() << ", Answers: " << ds2.getNumAnswers() << endl;
}