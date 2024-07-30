#ifndef DATEOFBIRTH_H
#define DATEOFBIRTH_H
#include <string>
using namespace std;
class DateOfBirth
{
public :
    int Geburtsjahr;
    string firstName;
    string lastName;
    int birthYear, birthMonth;
    int semesterStartYear = 2024;
    int semesterStartMonth = 10; // Oktober
public:
    DateOfBirth();
    void Nikname();
    void Realname();
    void dateofbirth();
    double calculateAge(int birthYear, int birthMonth, int currentYear, int currentMonth);
    string generateNickname(const string& firstName, const string& lastName);
};

#endif // DATEOFBIRTH_H
