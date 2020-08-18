long aVeryBigSum(vector<long> ar) {
    long result{0};
    for(int i=0; i< ar.size(); i++){
        result += ar.at(i);
    }
    return result;
}

// Conrtibuted by Arindam Hazra