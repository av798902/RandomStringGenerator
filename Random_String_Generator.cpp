#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
    //Try to change the title of the console
    SetConsoleTitle("Random String Generator Version 1.0");
    //Set the "seed" for random numbers
    srand(time(0));

    int randomStringLength;

    cout << "This is a random alpha-numeric string generator\n";
    cout << "Enter the desired length of the string ranging from 8 - 32 characters: ";
    cin >> randomStringLength;
    cout << "\n\n";

    while (randomStringLength < 8 || randomStringLength > 32)
    {
        cout << "The string length must be between 8 and 32 characters. Enter again: ";
        cin >> randomStringLength;
    }

    char stringArray[randomStringLength];

    //Present a "timer" on the console while using it to
    //get each value that will be used in the character array
    int timer = randomStringLength - 1;

    //For loop to set values into the array
    //NOTE: Increase efficienty later
    for (int i = 0; i < randomStringLength; i++)
    {
        int randomNumber = rand() % 62 + 1;

        if (randomNumber == 1)
            stringArray[i] = 'a';
        if (randomNumber == 2)
            stringArray[i] = 'b';
        if (randomNumber == 3)
            stringArray[i] = 'c';
        if (randomNumber == 4)
            stringArray[i] = 'd';
        if (randomNumber == 5)
            stringArray[i] = 'e';
        if (randomNumber == 6)
            stringArray[i] = 'f';
        if (randomNumber == 7)
            stringArray[i] = 'g';
        if (randomNumber == 8)
            stringArray[i] = 'h';
        if (randomNumber == 9)
            stringArray[i] = 'i';
        if (randomNumber == 10)
            stringArray[i] = 'j';
        if (randomNumber == 11)
            stringArray[i] = 'k';
        if (randomNumber == 12)
            stringArray[i] = 'l';
        if (randomNumber == 13)
            stringArray[i] = 'm';
        if (randomNumber == 14)
            stringArray[i] = 'n';
        if (randomNumber == 15)
            stringArray[i] = 'o';
        if (randomNumber == 16)
            stringArray[i] = 'p';
        if (randomNumber == 17)
            stringArray[i] = 'q';
        if (randomNumber == 18)
            stringArray[i] = 'r';
        if (randomNumber == 19)
            stringArray[i] = 's';
        if (randomNumber == 20)
            stringArray[i] = 't';
        if (randomNumber == 21)
            stringArray[i] = 'u';
        if (randomNumber == 22)
            stringArray[i] = 'v';
        if (randomNumber == 23)
            stringArray[i] = 'w';
        if (randomNumber == 24)
            stringArray[i] = 'x';
        if (randomNumber == 25)
            stringArray[i] = 'y';
        if (randomNumber == 26)
            stringArray[i] = 'z';
        if (randomNumber == 27)
            stringArray[i] = 'A';
        if (randomNumber == 28)
            stringArray[i] = 'B';
        if (randomNumber == 29)
            stringArray[i] = 'C';
        if (randomNumber == 30)
            stringArray[i] = 'D';
        if (randomNumber == 31)
            stringArray[i] = 'E';
        if (randomNumber == 32)
            stringArray[i] = 'F';
        if (randomNumber == 33)
            stringArray[i] = 'G';
        if (randomNumber == 34)
            stringArray[i] = 'H';
        if (randomNumber == 35)
            stringArray[i] = 'I';
        if (randomNumber == 36)
            stringArray[i] = 'J';
        if (randomNumber == 37)
            stringArray[i] = 'K';
        if (randomNumber == 38)
            stringArray[i] = 'L';
        if (randomNumber == 39)
            stringArray[i] = 'M';
        if (randomNumber == 40)
            stringArray[i] = 'N';
        if (randomNumber == 41)
            stringArray[i] = 'O';
        if (randomNumber == 42)
            stringArray[i] = 'P';
        if (randomNumber == 43)
            stringArray[i] = 'Q';
        if (randomNumber == 44)
            stringArray[i] = 'R';
        if (randomNumber == 45)
            stringArray[i] = 'S';
        if (randomNumber == 46)
            stringArray[i] = 'T';
        if (randomNumber == 47)
            stringArray[i] = 'U';
        if (randomNumber == 48)
            stringArray[i] = 'V';
        if (randomNumber == 49)
            stringArray[i] = 'W';
        if (randomNumber == 50)
            stringArray[i] = 'X';
        if (randomNumber == 51)
            stringArray[i] = 'Y';
        if (randomNumber == 52)
            stringArray[i] = 'Z';
        if (randomNumber == 53)
            stringArray[i] = '0';
        if (randomNumber == 54)
            stringArray[i] = '1';
        if (randomNumber == 55)
            stringArray[i] = '2';
        if (randomNumber == 56)
            stringArray[i] = '3';
        if (randomNumber == 57)
            stringArray[i] = '4';
        if (randomNumber == 58)
            stringArray[i] = '5';
        if (randomNumber == 59)
            stringArray[i] = '6';
        if (randomNumber == 60)
            stringArray[i] = '7';
        if (randomNumber == 61)
            stringArray[i] = '8';
        if (randomNumber == 62)
            stringArray[i] = '9';

        Sleep(1000);

        //Using the "\b" escape sequence to give the impression that the console is refreshing
        //as it updates its "timer"
        if (timer >=10)
        {
            cout << "Random string will be generated in: " << timer
                <<  "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        }

        else
        {
            cout << "Random string will be generated in: 0" << timer
                <<  "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        }

        timer--;
    }

    cout << "\n\n";

    int output = 0;

    while (output < randomStringLength)
    {
        cout << stringArray[output];
        output++;
    }

    cout << "\n\nPress ENTER to exit";

    cin.ignore();
    cin.get();
    return 0;
}
