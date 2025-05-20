#include <iostream>
using namespace std;

int main() {
    int k, j, l, m, n;
    string gradeMath, gradeStats, gradeProg, gradePhysics, gradeComm;

    cout << "Enter your score for Mathematics: ";
    cin >> k;
    cout << "Enter your score for Statistics: ";
    cin >> j;
    cout << "Enter your score for Programming Technique: ";
    cin >> l;
    cout << "Enter your score for Physics: ";
    cin >> m;
    cout << "Enter your score for Communicative Skills: ";
    cin >> n;
     cout << "\n\n";

    if (k >= 80) {
        gradeMath = "A";
    } else if (k >= 75 && k <= 79) {
        gradeMath = "B+";
    } else if (k >= 70 && k <= 74) {
        gradeMath = "B";
    } else if (k >= 65 && k <= 69) {
        gradeMath = "C+";
    } else if (k >= 60 && k <= 64) {
        gradeMath = "C";
    } else if (k >= 55 && k <= 59) {
        gradeMath = "D+";
    } else if (k >= 50 && k <= 54) {
        gradeMath = "D";
    } else if (k < 50) {
        gradeMath = "E";
    }

    if (j >= 80) {
        gradeStats = "A";
    } else if (j >= 75 && j <= 79) {
        gradeStats = "B+";
    } else if (j >= 70 && j <= 74) {
        gradeStats = "B";
    } else if (j >= 65 && j <= 69) {
        gradeStats = "C+";
    } else if (j >= 60 && j <= 64) {
        gradeStats = "C";
    } else if (j >= 55 && j <= 59) {
        gradeStats = "D+";
    } else if (j >= 50 && j <= 54) {
        gradeStats = "D";
    } else if (j < 50) {
        gradeStats = "E";
    }

    if (l >= 80) {
        gradeProg = "A";
    } else if (l >= 75 && l <= 79) {
        gradeProg = "B+";
    } else if (l >= 70 && l <= 74) {
        gradeProg = "B";
    } else if (l >= 65 && l <= 69) {
        gradeProg = "C+";
    } else if (l >= 60 && l <= 64) {
        gradeProg = "C";
    } else if (l >= 55 && l <= 59) {
        gradeProg = "D+";
    } else if (l >= 50 && l <= 54) {
        gradeProg = "D";
    } else if (l < 50) {
        gradeProg = "E";
    }

    if (m >= 80) {
        gradePhysics = "A";
    } else if (m >= 75 && m <= 79) {
        gradePhysics = "B+";
    } else if (m >= 70 && m <= 74) {
        gradePhysics = "B";
    } else if (m >= 65 && m <= 69) {
        gradePhysics = "C+";
    } else if (m >= 60 && m <= 64) {
        gradePhysics = "C";
    } else if (m >= 55 && m <= 59) {
        gradePhysics = "D+";
    } else if (m >= 50 && m <= 54) {
        gradePhysics = "D";
    } else if (m < 50) {
        gradePhysics = "E";
    }

    if (n >= 80) {
        gradeComm = "A";
    } else if (n >= 75 && n <= 79) {
        gradeComm = "B+";
    } else if (n >= 70 && n <= 74) {
        gradeComm = "B";
    } else if (n >= 65 && n <= 69) {
        gradeComm = "C+";
    } else if (n >= 60 && n <= 64) {
        gradeComm = "C";
    } else if (n >= 55 && n <= 59) {
        gradeComm = "D+";
    } else if (n >= 50 && n <= 54) {
        gradeComm = "D";
    } else if (n < 50) {
        gradeComm = "E";
    }

    cout << "Your grade for Mathematics is: " << gradeMath << "\n\n";
    cout << "Your grade for Statistics is: " << gradeStats << "\n\n";
    cout << "Your grade for Programming Technique: " << gradeProg << "\n\n";
    cout << "Your grade for Physics is: " << gradePhysics << "\n\n";
    cout << "Your grade for Communicative Skills is: " << gradeComm << "\n\n";

    return 0;
}
