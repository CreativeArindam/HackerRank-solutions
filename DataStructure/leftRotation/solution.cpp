#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    /*------MY CODE STARTS HERE----*/
    vector<int> tempArray(d);
    int tempVar;

    //Shifting all element d times to the left
    for(int i; i<d;i++){
        tempVar = a.at(0); //Storing the first element

        //Shifting all elements(starts from 2nd element) 1 unit
        for(int j=1; j<a.size();j++){
            a.at(j-1) = a.at(j);
        }
        a.back() = tempVar; //Putting the 1st element to the end
    }

    // Printing the new Array
    for(int i=0; i<a.size();i++){
        cout << a.at(i) << " ";
    }
    /*------MY CODE ENDS HERE----*/

    /*My code got 17.78 out of 20 because it failed in test 8. Please Fork and add the optimised code if you can*/
    // Conrtibuted by Arindam Hazra

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
