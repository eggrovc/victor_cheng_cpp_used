#ifndef PROJ1_H
#define PROJ1_H

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <chrono>
using namespace std;


class Proj1{
    
    public: 

    // Proj1();
        void execute(const string& file1);
        void questionb1(ofstream& outFile);
    
  
        void questionb2(ofstream& outFile);
        
    private:

        // QB1
        string abc;
        int abcArray[3];

        // QB2
        vector<int> qb2Vect;


        

};
#endif