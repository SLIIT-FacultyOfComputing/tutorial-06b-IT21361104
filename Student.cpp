#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int Id, char sName[]) {
  studentId = Id;
  //name = sName;
  strcpy(name, sName);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student Id : "<<studentId<<endl;
  cout<<"Student name : "<<name<<endl;
}
