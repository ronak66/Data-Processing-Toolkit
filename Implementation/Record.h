#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef RECORD_H_
#define RECORD_H_

class Record {
    private:
        int _numVariables;
        int _numNonNumericalVariables;
        int _numNumericalVariables;
        vector<string> _nonFeatureVector; 
        vector<double> _featureVector;
    public:
        Record(int y, int n, int N):_numVariables(y), _numNonNumericalVariables(n), _numNumericalVariables(N) {}
        Record(int, int, int, vector<string>, vector<double>);
        Record(const Record&);
        ~Record();
        void setRecord(string, int);
};

#endif // !RECORD_H_