#include <iostream>
#include <string>
using namespace std;

void showMenu() {
    cout << "===== MENU =====" << endl;
    cout << "1. Display students" << endl;
    cout << "2. Show statistics" << endl;
    cout << "3. Exit" << endl;
    cout << "================" << endl;
}

void showStudentID(int id) {
    cout << "Student ID: " << id << endl;
}

void showScore(string name, double score) {
    cout << "Student: " << name << endl;
    cout << "Score  : " << score << endl;
    cout << "Keep going!" << endl;
}
int main() {
    showMenu();

    int id;
    cout << "\nEnter student ID: ";
    cin >> id;
    showStudentID(id);

    cin.ignore();

    string name;
    double score;

    cout << "\nEnter student name: ";
    getline(cin, name);
    cout << "Enter student score: ";
    cin >> score;

    cout << endl;
    showScore(name, score);
    return 0;
}