#include "proj1.h"

void Proj1::execute(const string& file1) {

    ifstream currFile(file1);
    string currLine;
    bool q1Bool = false;

    while (q1Bool == false) {
        while (getline(currFile, currLine)) {
      
        stringstream line(currLine);
        string lineContent;
        bool foundLine = false;

        line >> lineContent;

            for (char ch : lineContent) {
                if (ch == 'A' || ch == 'B' || ch == 'C') {
                    this->abc = lineContent;
                    q1Bool = true;
                    foundLine = true;
                    break;
                }
            }

            if (foundLine) {
                break;
            }
        }
    }

    while (getline(currFile, currLine)) {
        if (currLine.empty()) {
            continue;
        }
    
        stringstream line(currLine);
        string lineContent;
        line >> lineContent;

        bool is_number = !lineContent.empty() && (lineContent.find_first_not_of("0123456789") == string::npos);

        if (is_number) {
            // cout << lineContent << " " << endl;
            this->qb2Vect.push_back(stoi(lineContent));
        }

    }

}
    


void Proj1::questionb1(ofstream& outFile) { //const string& outputFile

    for (int i = 0; i < 3; i++) {
        this->abcArray[i] = 0;
    }
    for (char ch : this->abc) {
        if (ch == 'A') {
            this->abcArray[0]++;
        
        } else if (ch == 'B') {
            this->abcArray[1]++;
        
        } else if (ch == 'C') {
            this->abcArray[2]++;
        
        }

    }

    outFile << "//Part B.1" << endl << endl;

    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            for (int a = 0; a < this->abcArray[i]; a++) {
                outFile << "A";

            }
        } else if (i == 1) {
            for (int b = 0; b < this->abcArray[i]; b++) {
                outFile << "B";

            }
        } else if (i == 2) {
            for (int c = 0; c < this->abcArray[i]; c++) {
                outFile << "C";

            }
        }
        
    }

    outFile << endl << endl;
    
 }

void Proj1::questionb2(ofstream& outFile) {

    outFile << "// Part B.2" << endl << endl;

    sort(this->qb2Vect.begin(), this->qb2Vect.end());

    // 
    for (int i = 0; i < (int)this->qb2Vect.size(); i++) {
        for (int j = i + 1;j < (int)this->qb2Vect.size(); j++) {
            int diff = this->qb2Vect[j] - this->qb2Vect[i]; 
            
            if (binary_search(this->qb2Vect.begin(), this->qb2Vect.end(), diff) && diff != this->qb2Vect[j] && diff != this->qb2Vect[i]) { 
                outFile << this->qb2Vect[j] << "-" << this->qb2Vect[i] << "=" << diff << endl;
            }

        }

    }

    outFile << endl;

}
