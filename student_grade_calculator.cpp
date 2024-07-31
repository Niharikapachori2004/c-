#include <iostream>

using namespace std;

int main() {
    int num_subjects;
    float total_grade = 0.0, grade;

    // Enter the number of subjects
    cout << "Enter the number of subjects: ";
    cin >> num_subjects;

    // Input grades for each subject
    for (int i = 1; i <= num_subjects; ++i) {
        cout << "Enter the grade for subject " << i << ": ";
        cin >> grade;
        total_grade += grade;
    }

    // Calculate the average grade
    float average_grade = total_grade / num_subjects;

    // Display the average grade
    cout << "\nThe average grade of the student is: " << average_grade << endl;

    return 0;
}
