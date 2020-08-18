void plusMinus(vector<int> arr) {
    int noOfPlus{0}, noOfMinus{0}, noOfZeros{0};
    int sizeOfArr = arr.size();
    for(int i = 0; i< sizeOfArr; i++){
        if(arr.at(i) > 0)
            noOfPlus++;
        else if(arr.at(i) < 0)
            noOfMinus++;
        else
            noOfZeros++;
    }
    cout << float(noOfPlus)/sizeOfArr << endl << float(noOfMinus)/sizeOfArr<< endl << float(noOfZeros)/sizeOfArr;
}

// Contributed By Arindam Hazra