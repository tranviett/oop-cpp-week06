#include <iostream>
using namespace std;

// === STEP 1: Hàm không tham số, không trả về giá trị ===
void showMenu() {
    cout << "===== MENU =====" << endl;
    cout << "1. Display students" << endl;
    cout << "2. Show statistics" << endl;
    cout << "3. Exit" << endl;
    cout << "================" << endl;
}

// === STEP 2: Hàm có 1 tham số (int id), không trả về giá trị ===
void showStudentID(int id) {
    cout << "Student ID: " << id << endl;
}

int main() {
    // Gọi hàm Step 1
    showMenu();

    // Nhập và gọi hàm Step 2
    int id;
    cout << "\nEnter student ID: ";
    cin >> id;
    showStudentID(id);

    return 0;
}