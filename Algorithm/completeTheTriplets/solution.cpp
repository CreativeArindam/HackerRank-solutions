vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result = {0,0};
    for(int i=0; i <3 ; i++){
        if(a.at(i) > b.at(i)){
            result[0]++;
        }else if(b.at(i) > a.at(i)){
            result[1]++;
        }
    }
    return result;
}

// Contributed By Arindam Hazra