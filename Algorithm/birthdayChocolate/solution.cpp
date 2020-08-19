int birthday(vector<int> s, int d, int m) {
    int count{0};
    int sum{0};
    for(int i=0; i <= s.size() - m; i++){
        sum = 0;
        for(int j = i; j < i+m; j++){
            sum+=s[j];
        }
        if(sum == d){
            count++;
        }
    }
    return count;
}


// Contributed By Arindam Hazra