int simpleArraySum(vector<int> ar) {
    int sum{0};
    for(int i=0; i<ar.size(); i++){
        sum += ar.at(i);
    }
    return sum;
}

// Contributed By Arindam Hazra