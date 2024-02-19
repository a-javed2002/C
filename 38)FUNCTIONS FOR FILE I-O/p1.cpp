#include <iostream>
#include <string>
using namespace std;

class Radiator
{
private:
    int RadiatorID;
    bool isOn;

public:
    static int nextID;

    Radiator()
    {
        // Assign unique ID value incremented by 15 for each new object
        RadiatorID = nextID;
        nextID += 15;
        isOn = false;
    }

    int getRadiatorID()
    {
        return RadiatorID;
    }

    int status()
    {
        return isOn;
        ;
    }

    void heats()
    {
        isOn = true;
    }
};

int Radiator::nextID;

class Room
{
private:
    string roomName;
    int seatingCapacity;
    int numRadiators;
    Radiator *radiators[2];

public:
    Room(string name)
    {
        roomName = name;
        seatingCapacity = 12;
        numRadiators = 0;
    }

    string isHeatedBy(Radiator &radiator)
    {
        cout << "Room Name:" << roomName << endl;
        cout << "seating Capacity:" << seatingCapacity << endl;
        cout << "Num Radiators:" << numRadiators << endl;
        cout << "Radiator ID:" << radiator.getRadiatorID() << endl;
        cout << "Status:" << radiator.status() << endl;
        for (int i = 0; i < numRadiators; i++)
        {
            if (radiators[i]->getRadiatorID() == radiator.getRadiatorID())
            {
                return "Radiator already added to room.";
            }
        }

        if (numRadiators == 2)
        {
            return "Cannot add Radiator. Room has a maximum number of radiators.";
        }
        else
        {
            radiators[numRadiators] = &radiator;
            radiator.heats();
            numRadiators++;
            return "Radiator successfully added to room.";
        }
    }
};

int main()
{
    string x;
    cout << "Enter your student ID (22k-1234): "; // use for Data Scientist ID
    cin >> x;
    Radiator::nextID = stoi(x.substr(5, 1) + x.substr(7, 1));
    // cout << Radiator::nextID << endl;

    Room room("Room-1");
    Radiator rd1, rd2;
    cout << room.isHeatedBy(rd1) << endl;
    cout << "---------------------------------------------" << endl;
    cout << room.isHeatedBy(rd2) << endl;
    cout << "---------------------------------------------" << endl;
    cout << room.isHeatedBy(rd1) << endl;
    cout << "---------------------------------------------" << endl;
    cout << room.isHeatedBy(rd2) << endl;
    cout << "---------------------------------------------" << endl;
    return 0;
}
