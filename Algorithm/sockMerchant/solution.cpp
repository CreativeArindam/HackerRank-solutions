int sockMerchant(int n, vector<int> ar) {
    int count{0};
    for(int i=0; i<n; i++){
        if(ar.at(i) != 0){
            for(int j = i+1; j<n; j++){
                if(ar.at(i) == ar.at(j)){
                    count++;
                    ar.at(i) = ar.at(j) = 0;
                    break; //If pair matched stop
                }
            }
        }
    }
    return count;
}

// Contributed By Arindam Hazra