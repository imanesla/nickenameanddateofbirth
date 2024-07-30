#include "dateofbirth.h"
#include <iostream>
#include <iomanip> // Für std::setprecision
using namespace std;
DateOfBirth::DateOfBirth() {}

string DateOfBirth :: generateNickname(const string& firstName, const string& lastName) {
    return firstName.substr(0, 3) + lastName.substr(0, 3);
}
void DateOfBirth :: Nikname()
{
    // Eingaben einlesen
    cout << "Geben Sie Ihren Vornamen ein: ";
    cin >> firstName;
    cout << "Geben Sie Ihren Nachnamen ein: ";
    cin >> lastName;
    // Nickname generieren
    string nickname = generateNickname(firstName, lastName);
    cout << "Ihr Nickname ist: " << nickname << endl;
}

double DateOfBirth ::calculateAge(int birthYear, int birthMonth, int currentYear, int currentMonth)
{
        int yearDifference = currentYear - birthYear;
        int monthDifference = currentMonth - birthMonth;
        double age = yearDifference + (monthDifference / 12.0);
        return age;
}
void DateOfBirth::dateofbirth()
{
    cout << "Geben Sie Ihr Geburtsjahr ein: ";
    cin >> birthYear;
    cout << "Geben Sie Ihren Geburtsmonat ein (1-12): ";
    cin >> birthMonth;
    // Alter berechnen
    double age = calculateAge(birthYear, birthMonth, semesterStartYear, semesterStartMonth);
    cout << std::fixed << std::setprecision(1); // Setze die Genauigkeit auf eine Nachkommastelle
    cout << "Ihr Alter zum Semesterbeginn: " << age << " Jahre" <<endl;
}
