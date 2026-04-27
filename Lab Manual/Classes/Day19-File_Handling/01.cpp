// WAP to read the data from console and and write the data into a .txt file named Student.txt
// I want to read the data from student.txt and print the output on console screen
// To Work with file Handling we need fstream header file to work with the files
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    cout << "Enter the name of the student: ";
    string name;
    cin >> name;
    cout << "Enter the age of the student: ";
    int age;
    cin >> age;
    ofstream file;
    file.open("Student.txt"); 
    file << "Name: " << name << endl;
    file << "Age: " << age << endl;
    file.close(); 
    ifstream fin;// fin is the input file stream object which is or which will be reading data from the file
    fin.open("Student.txt"); 
    string line;
    while (getline(fin, line)) { 
        cout << line << endl; // Print the line to console
    }
    fin.close(); 
    return 0;
}