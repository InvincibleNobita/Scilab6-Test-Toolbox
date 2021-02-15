

float** trans(int array[1000][1000]) {
    int n=1000,m=1000;
    int transpose[m][n];
    
    for (int i = 0; i < n ; ++i)
        for (int j = 0; j < m; ++j) {
            transpose[j][i] = array[i][j];
        }
    return 0;
}