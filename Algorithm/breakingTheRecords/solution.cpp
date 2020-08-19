vector<int> breakingRecords(vector<int> scores) {
    //res stores lowest and highest scores changes at 0 and 1 index respectively
    vector<int> res{0,0}; 
    int maxScr{scores.at(0)};
    int minScr{scores.at(0)};
    for(int i=1; i<scores.size();i++){
        if(maxScr < scores.at(i)){
            maxScr = scores.at(i);
            res.at(0)++; //Incrementing lowest score changes
        }
        if(minScr > scores.at(i)){
            minScr = scores.at(i);
            res.at(1)++; //Incrementing highest score changes
        }
    }
    return res;
}


// Contributed By Arindam Hazra