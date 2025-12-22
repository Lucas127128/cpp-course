#include <iostream>
#include <string>

using namespace std;

double calculateMarks(int marks[6], int &total) {
  for (int i = 0; i < 6; ++i) {
    total += marks[i];
  }
  return total;
  return 0;
}

class student {
private:
  int ICT;
  int Chinese;
  int RE;
  int CS;
  int English;
  int Math;

public:
  int total = 0;
  double Average = 0;
  int weightedTotal = 0;
  double weightedAverage = 0;
  bool pass = true;
  bool honor = false;
  bool excellent = true;
  string Name;
  int Age;
  int id = 0;
  student(int marks[6], string name, int age, int ID) {
    id = ID;
    ICT = marks[0];
    Chinese = marks[1];
    RE = marks[2];
    CS = marks[3];
    English = marks[4];
    Math = marks[5];
    Age = age;
    Name = name;

    calculateMarks(marks, total);
    Average = (double)total / 6;
    weightedTotal =
        ICT * 3 + Chinese * 2 + RE * 1 + CS * 1 + English * 2 + Math * 3;
    weightedAverage = (double)weightedTotal / 12;
    for (int i = 0; i < 6; ++i) {
      if (marks[i] < 50) {
        pass = false;
      }
      if (marks[i] < 70) {
        excellent = false;
      }
    }
    if (weightedAverage >= (double)80 && pass == true) {
      honor = true;
    }
  }
};

void displayGradeReport(const student &Student) {
  cout << "-----Report for " << Student.Name << " -----" << '\n';
  cout << "Age: " << Student.Age << '\n';
  cout << "Weighted Average: " << Student.weightedAverage << '\n';
  if (Student.pass == true) {
    cout << "Status: Pass" << "\n";
  } else {
    cout << "Need improvement" << '\n';
  }
  if (Student.honor == true) {
    cout << "Honours" << '\n';
  }

  if (Student.excellent == true) {
    cout << "Excellent" << '\n';
  }
  cout << "" << '\n';
}

void displayBestStudent(const student &Student1, const student &Student2) {
  string bestStudent = "";
  if (Student1.weightedAverage > Student2.weightedAverage) {
    bestStudent = Student1.Name;
  } else if (Student2.weightedAverage > Student1.weightedAverage) {
    bestStudent = Student2.Name;
  }
  cout << "----- Top Performer -----" << '\n';
  cout << bestStudent << " is the top performer.";
}

int askForMarks(int &Subject, string subject) {
  cout << "What is your marks of " << subject << "? ";
  cin >> Subject;
  cout << "" << '\n';
  return Subject;
}

void askForAllMarks(int ICT, int Chinese, int RE, int CS, int English, int Math,
                    int Marks[6]) {
  askForMarks(ICT, "ICT");
  askForMarks(Chinese, "Chinese");
  askForMarks(RE, "RE");
  askForMarks(CS, "CS");
  askForMarks(English, "English");
  askForMarks(Math, "Math");
  Marks[0] = ICT;
  Marks[1] = Chinese;
  Marks[2] = RE;
  Marks[3] = CS;
  Marks[4] = English;
  Marks[5] = Math;
}

int main() {
  int ICT, Chinese, RE, CS, English, Math = 0;
  int studentQuantity = 0;
  cout << "What is the number of student? ";
  cin >> studentQuantity;
  cout << "" << '\n';
  for (int i = 1; i < studentQuantity + 1; i++) {
    string name = "";
    int ages = 0;
    int Marks[6] = {0, 0, 0, 0, 0, 0};
    cout << "What is this student name? ";
    cin >> name;
    cout << "What is this student ages? ";
    cin >> ages;
    askForAllMarks(ICT, Chinese, RE, CS, English, Math, Marks);
    student Student(Marks, name, ages, i);
    displayGradeReport(Student);
  }
  return 0;
}