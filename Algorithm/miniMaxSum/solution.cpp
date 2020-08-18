void miniMaxSum(vector<int> arr) {
    int minIndex{0}, maxIndex{0};
    long minSum{0},maxSum{0};
    for(int i =1; i<arr.size();i++){
        if(arr.at(i) < arr.at(minIndex))
            minIndex = i;
        if(arr.at(i) > arr.at(maxIndex))
            maxIndex = i;
    }

    for(int i=0; i< arr.size();i++){
        if(i != maxIndex)
            minSum += arr.at(i);
        if(i != minIndex)
            maxSum += arr.at(i);
    }

    cout << minSum << " " << maxSum;
}

// Conrtibuted by Arindam Hazra