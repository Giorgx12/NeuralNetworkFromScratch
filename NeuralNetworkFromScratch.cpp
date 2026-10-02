class Matrix(){
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
}
