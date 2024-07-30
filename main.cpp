#include "dateofbirth.h"
#include <iostream>

using namespace std;

int main()
{
    try {
    DateOfBirth obj;
    char option;
    cout<<"Nikname -- 1 "<<endl;
    cout<<"Date of Birth --2 "<<endl;
    cout<<"\n4-Exit"<<endl;
    cout<<"\n-Enter Your Choise :  ";
    cin>>option;

    switch (option)
    {
    case '1':obj.Nikname();
        break;
    case '2': obj.dateofbirth();
        break;
    case '3':
        return 0;
        break;
    default:
        cout<<"Invalid Selection ...!!";
    }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << endl;
        return 1;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << endl;
        return 1;
    }
    return 0;
}
