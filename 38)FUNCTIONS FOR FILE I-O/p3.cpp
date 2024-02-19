#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class HeartRates
{
private:
    string firstName;
    int id;
    int birthMonth;
    int birthDay;
    int birthYear;

public:
    HeartRates(string fName, int idNum, int bMonth, int bDay, int bYear)
    {
        firstName = fName;
        id = idNum;
        birthMonth = bMonth;
        birthDay = bDay;
        birthYear = bYear;
    }

    void setFirstName(string fName)
    {
        firstName = fName;
    }

    string getFirstName()
    {
        return firstName;
    }

    void setId(int idNum)
    {
        id = idNum;
    }

    int getId()
    {
        return id;
    }

    void setBirthMonth(int bMonth)
    {
        birthMonth = bMonth;
    }

    int getBirthMonth()
    {
        return birthMonth;
    }

    void setBirthDay(int bDay)
    {
        birthDay = bDay;
    }

    int getBirthDay()
    {
        return birthDay;
    }

    void setBirthYear(int bYear)
    {
        birthYear = bYear;
    }

    int getBirthYear()
    {
        return birthYear;
    }

    int getAge()
    {
        time_t now = time(nullptr);
        tm birthDate = {0};
        birthDate.tm_year = birthYear - 1900;
        birthDate.tm_mon = birthMonth - 1;
        birthDate.tm_mday = birthDay;
        time_t birthTime = mktime(&birthDate);
        double seconds = difftime(now, birthTime);
        return static_cast<int>(floor(seconds / 31536000.0));
    }

    int getMaximumHeartRate()
    {
        return 220 - getAge();
    }

    pair<int, int> getTargetHeartRate()
    {
        int maxHeartRate = getMaximumHeartRate();
        int lowTarget = static_cast<int>(round(maxHeartRate * 0.50));
        int highTarget = static_cast<int>(round(maxHeartRate * 0.85));
        return make_pair(lowTarget, highTarget);
    }
};

int main()
{
    string fName, stdId;
    int idNum, bMonth, bDay, bYear;
    cout << "Enter first name: ";
    cin >> fName;
    cout << "Enter your Student ID (22k-1234): ";
    cin >> stdId;
    idNum = (int)stoi(stdId.substr(6, 1));
    // cout << "Id is " << idNum << endl;
    cout << "Enter birth month (1-12): ";
    cin >> bMonth;
    cout << "Enter birth day (1-31): ";
    cin >> bDay;
    cout << "Enter birth year (1960-2023): ";
    cin >> bYear;

    HeartRates person(fName, idNum, bMonth, bDay, bYear);

    cout << "Name: " << person.getFirstName() << endl;
    cout << "Date of Birth: " << person.getBirthMonth() << "/" << person.getBirthDay() << "/" << person.getBirthYear() << endl;
    cout << "Age: " << person.getAge() << " Years" << endl;
    cout << "Maximum Heart Rate: " << person.getMaximumHeartRate() << " bpm" << endl;
    pair<int, int> targetRate = person.getTargetHeartRate();
    cout << "Target Heart Rate Range: " << targetRate.first << "-" << targetRate.second << " bpm" << endl;
    return 0;
}
