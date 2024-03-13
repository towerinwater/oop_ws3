double* dynamicArray(int N, double M){
    double* pArr = new double[N];

    for(int i = 0; i < M; i++){
        pArr[i] = M;
    }
    
    return pArr;
}