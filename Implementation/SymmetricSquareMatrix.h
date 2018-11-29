#include<iostream>
#include <vector>
using namespace std;

#ifndef SYMMETRIC_SQUARE_MATRIX_H_
#define SYMMETRIC_SQUARE_MATRIX_H_

class SymmetricSquareMatrix{
    private:
        std::vector<std::vector<double>> _data;
        int _numRows;
        int _numColums;

    public:
        SymmetricSquareMatrix(std::vector<std::vector<double>> d){
            _data = d;
            _numRows = d.size();
            _numColums = d[0].size();
        }
        SymmetricSquareMatrix(){}
        SymmetricSquareMatrix(const SymmetricSquareMatrix &);
        ~SymmetricSquareMatrix();
        double getElementOfMatrix(int i, int j){
            return _data[i][j];
        }
        int getNumRows(){return _numRows;}
        int getNumColums(){return _numColums;}
        void setElementOfMatrix(int i, int j, double value){
            _data[i][j] = value;
        }
        void setNumRows(int rows){_numRows = rows;}
        void setNumColums(int colums){_numColums = colums;}
};

#endif // !SYMMETRIC_SQUARE_MATRIX_H_
