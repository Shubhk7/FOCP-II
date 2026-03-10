#include <iostream>
using namespace std;

class Vehicle
{
    string VNum, Owner, type;
    int Registration_Free;
    public: 
    Vehicle(){
        VNum = "Not Assigned";
        Owner = "Unknown";
        type = "General";
        Registration_Free = 0;
    }
    Vehicle(string num, string own){
        type = "General";
        Registration_Free = 500;
    }
    Vehicle(string num, string own, string t, int fees){
        VNum = num;
        Owner = own;
        type = t;
        Registration_Free = fees;
    }
    void Display(){
        cout << "Vehicle Number: " << VNum << "\nOwner: " << Owner << "\nType: " << type << "\nRegistration Free: " << Registration_Free << endl;
        cout << "-----------------------------" << endl;
    }
};

int main(){
    Vehicle v1;
    Vehicle v2("DL12GD4106", "Namrata Singh");
    Vehicle v3("HR55AS4106", "Namrata Singh", "MUV", 2000);

    v1.Display();
    v2.Display();
    v3.Display();

    return 0;
}