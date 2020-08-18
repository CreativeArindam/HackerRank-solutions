vector<int> reverseArray(vector<int> a) {
    int startIndex = 0, endIndex = a.size() - 1;
    while(startIndex < endIndex){
        
        /*This three horrible lines of code just swap two numbers */
        a.at(startIndex) = a.at(startIndex) ^ a.at(endIndex);
        a.at(endIndex) = a.at(startIndex) ^ a.at(endIndex);
        a.at(startIndex) = a.at(startIndex) ^ a.at(endIndex);
        
        startIndex++;
        endIndex--;
    }
    return a;
}

// Conrtibuted by Arindam Hazra