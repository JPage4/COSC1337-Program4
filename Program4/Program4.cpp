//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 4
//
//  File Name:         Program4.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          6/23/2021
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 4 & 5
//
//  Description:
//     <An explanation of what the program is designed to do>
//
//***************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void developerInfo();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    int hotelFloors = 0,
        roomsOnFloor = 0,
        roomsOccupied = 0;
    float totalRooms = 0.0,
        totalOccupied = 0.0,
        occupancyRate = 0.0;

    cout << "Floors on the hotel: ";
    cin >> hotelFloors;
    cout << endl;

    for (int index = 1; index <= hotelFloors; index++)
    {
        cout << "Rooms on floor " << index << ": ";
        cin >> roomsOnFloor;


        cout << "Rooms ooccupied: ";
        cin >> roomsOccupied;
        cout << endl;

        totalRooms += roomsOnFloor;
        totalOccupied += roomsOccupied;
    }
    occupancyRate = (totalOccupied / totalRooms) * 100;

    cout << "The hotel has " << totalRooms << " rooms" << endl;
    cout << "The hotel has " << totalOccupied << " occupied rooms" << endl;
    cout << "The hotel has " << totalRooms - totalOccupied << " unoccupied rooms" << endl;
    cout << "The hotel has " << occupancyRate << "% occupancy" << endl;
    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: Four"
        << endl
        << endl;
} // End of developer
