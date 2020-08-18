int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size(); //Row size and column size is same
    int diagonal1{0}, diagonal2{0};
    for(int i = 0; i< n; i++){
        for(int j=0; j < n; j++){
            if(j == i)
                diagonal1 += arr[i][j];
            if(j == n-1-i)
                diagonal2 += arr[i][j];
        }
    }
    
    return (diagonal1 - diagonal2) < 0 ? 
            (diagonal1 - diagonal2) * (-1) : 
            (diagonal1 - diagonal2);
}

// Contributed By Arindam Hazra