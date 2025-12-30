#include <iostream>
#include <vector>

int main() {
    double* grade1 = new double(87.5);
    double* grade2 = new double(92.0);
    double* grade3 = new double(76.5);
    double* grade4 = new double(88.0);
    double* grade5 = new double(95.5);
    double* grade6 = new double(81.0);

    std::vector<double*> grades;
    grades.push_back(grade1);
    grades.push_back(grade2);
    grades.push_back(grade3);
    grades.push_back(grade4);
    grades.push_back(grade5);
    grades.push_back(grade6);

    for (const auto& grade : grades) {
        std::cout << *grade << '\n';
    }
    double* largestGrade = grades[0];
    double total = 0.0;
    for (const auto& grade : grades) {
        total += *grade;
        if (*largestGrade < *grade) {
            largestGrade = grade;
        }
    }
    double average = total / static_cast<double>(grades.size());
    std::cout << "Largest grade: " << *largestGrade << '\n';
    std::cout << "Average: " << average << '\n';

    for (auto*& grade : grades) {
        delete grade;
        grade = nullptr;
    }
    grades.clear();
    return 0;
}