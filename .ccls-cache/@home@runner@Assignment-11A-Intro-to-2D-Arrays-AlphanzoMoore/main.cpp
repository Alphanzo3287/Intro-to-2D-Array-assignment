// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// AssAssignment 11A: Intro to 2D Arraysignment 11A: Intro to 2D Arrays

#include <iostream>
using namespace std;

int main() {
  int numberList[5];
  int numberGrid[3][2];

  // Prompt the user to input values for the 1D array
  cout << "Enter 5 integers for the 1D array: ";
  for (int i = 0; i < 5; i++) {
    cin >> numberList[i];
  }

  // Prompt the user to input values for the 2D array
  cout << "Enter 6 integers for the 3x2 2D array: ";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> numberGrid[i][j];
    }
  }

  cout << "1D array:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << numberList[i] << ", ";
  }
  cout << endl;

  cout << "2D array:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << numberGrid[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
