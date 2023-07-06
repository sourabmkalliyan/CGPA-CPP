#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

double cgpaCalculation(){
    int nsubjects{}; //No of subjects
    cout << "Enter the Total Number of Subjects: ";
    cin >> nsubjects;
    int grade[nsubjects]; // Array to save Grade Point
    float credit[nsubjects]; // Array to save Credit Point
    float cgpa{0};
    for (int i=0; i<nsubjects; i++){
        cout << "Enter the Grade Point of subject " << i+1 << endl;
        cin>>grade[i];
        cout << "Enter the credit of subject " << i+1 << endl;
        cin>> credit[i];
    }
    float product{0};
    float totalSum{0};
    for(int j=0; j<nsubjects; j++){
        product = grade[j] * credit[j];
        totalSum += product;
    }
    float totalCredit{0};
    for(int k=0; k<nsubjects; k++){
        totalCredit += credit[k];
    }
    cgpa = totalSum/totalCredit;
    return cgpa;
}
int main(){
    int nG; // Grade System
    cout << "*********************************" << endl;
    cout << "CGPA & Mark Percentage Calculator" << endl;
    cout << "*********************************" << endl;
    cout << "*********************************" << endl;
    tryAgain:cout << "Your institute is following which grading system?" << endl;
    cout << "* 4 GPA System *" << endl;
    cout << "* 10 GPA System *" << endl;
    cin >> nG; // Collecting Number of subjects
    if (nG == 4) {
        cout << "Sorry, we are only provide this serivice for 10 GPA System" << endl;
    }
    else if (nG == 10) {
        double cgpa = cgpaCalculation();
        cout << "Your CGPA is " << roundf(cgpa*100)/100 << endl;
        cout << "Your Mark Percentage is " << roundf(cgpa*9.5*100)/100 << " %" << endl;
    }
    else {
        cout << "Sorry, Invalid entry. Try again" << endl;
        goto tryAgain;
    }
}
