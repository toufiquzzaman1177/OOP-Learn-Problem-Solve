#include <iostream>
#include <string>

using namespace std;

void printHeader() {
    cout << "===============================" << endl;
    cout << "          Curriculum Vitae" << endl;
    cout << "===============================" << endl;
}

void printPersonalInfo() {
    cout << "\nPersonal Information:" << endl;
    cout << "Name: John Doe" << endl;
    cout << "Email: johndoe@example.com" << endl;
    cout << "Phone: (555) 123-4567" << endl;
    cout << "Address: 123 Main St, Springfield, IL" << endl;
}

void printObjective() {
    cout << "\nCareer Objective:" << endl;
    cout << "A dedicated and results-driven software developer seeking to contribute my skills in software development and problem-solving to a dynamic team." << endl;
}

void printEducation() {
    cout << "\nEducation:" << endl;
    cout << "B.Sc. in Computer Science, Springfield University - 2020" << endl;
    cout << "GPA: 3.8/4.0" << endl;
}

void printSkills() {
    cout << "\nSkills:" << endl;
    cout << "- Proficient in C++, Java, and Python" << endl;
    cout << "- Experience with web development (HTML, CSS, JavaScript)" << endl;
    cout << "- Familiar with databases (MySQL, PostgreSQL)" << endl;
    cout << "- Strong problem-solving skills" << endl;
}

void printExperience() {
    cout << "\nWork Experience:" << endl;
    cout << "Software Developer Intern, XYZ Technologies - June 2019 to August 2019" << endl;
    cout << "Responsibilities: Developed and maintained internal software tools. Worked closely with senior developers on various projects." << endl;
    cout << "Achievements: Improved the performance of the internal software by 20% through code optimization." << endl;
}

void printLanguages() {
    cout << "\nLanguages:" << endl;
    cout << "English: Native" << endl;
    cout << "Spanish: Intermediate" << endl;
}

void printFooter() {
    cout << "\n===============================" << endl;
    cout << "          End of CV" << endl;
    cout << "===============================" << endl;
}

int main() {
    // Print the CV content
    printHeader();
    printPersonalInfo();
    printObjective();
    printEducation();
    printSkills();
    printExperience();
    printLanguages();
    printFooter();

    return 0;
}

