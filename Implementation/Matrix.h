#include<iostream>
#include "Record.h"
#include <vector>
using namespace std;

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
    private: 
        int _numRows;  
        int _numCols;
        vector<Record> _data;

    public: 
        Matrix(int M, int N):_numRows(M), _numCols(N) {} 
        Matrix(int, int, std::vector<Record>);
        Matrix(const Matrix&);
        ~Matrix();
        void addRecord(Record);
};

#endif // !MATRIX_H_