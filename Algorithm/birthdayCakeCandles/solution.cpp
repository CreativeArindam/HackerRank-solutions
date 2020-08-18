int birthdayCakeCandles(vector<int> ar) {
    unsigned count{1},tall{ar.at(0)};
    for(int i = 1; i < ar.size(); i++){
        if(ar.at(i) > tall){
            tall = ar.at(i);
            count = 1;
        }else if(ar.at(i) == tall){
            count++;
        }
    }
    return count;
}

// Contributed By Arindam Hazra