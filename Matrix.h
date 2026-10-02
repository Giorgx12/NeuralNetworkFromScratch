#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
class Matrix{
    private:
        int rows;
        int cols;
        std::vector<float> data;
    public:
        Matrix(int r, int c){
            rows = r;
            cols = c;
            data.resize(rows * cols, 0.0f);
        }    
        float& operator()(int r, int c) {
            return data[r * cols + c];
        }
        const float& operator()(int r, int c) const {
            return data[r * cols + c];
        }
        int getRows() const { 
            return rows;
        }
        int getCols() const {
            return cols; 
        }
};

#endif