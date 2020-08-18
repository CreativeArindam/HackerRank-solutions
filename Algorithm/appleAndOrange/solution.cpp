void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    //Counting the apples
    int appleCount{0};
    for(int i=0; i < apples.size(); i++){
        if(apples.at(i) + a >= s && apples.at(i) + a <= t)
            appleCount++;
    }
    cout << appleCount << endl;

    //Counting the oranges
    int orangeCount{0};
    for(int i =0 ; i < oranges.size(); i++){
        if(oranges.at(i) + b >= s && oranges.at(i) + b <= t)
            orangeCount++;
    }
    cout << orangeCount << endl;

}

// Conrtibuted by Arindam Hazra