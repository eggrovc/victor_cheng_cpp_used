#include "proj1.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Invalid Arguments" << endl;
        return 0;
    }

    Proj1 projexec;

    projexec.execute(argv[1]);

    ofstream outFile;
    outFile.open(argv[2]);

    auto start = chrono::high_resolution_clock::now();
    projexec.questionb1(outFile);
    
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    outFile << "Execution Time: " << duration.count() << " microseconds." << endl << endl << endl;

    start = chrono::high_resolution_clock::now();
    projexec.questionb2(outFile);

    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(end - start);

    outFile << "Execution Time: " << duration.count() << " microseconds." << endl;
    
    return 0;
}