string timeConversion(string s) {
    string amOrPm{s.substr(8,2)};
    int hr = stoi(s.substr(0,2));
    if(amOrPm == "AM"){
        if(hr == 12 ){
            hr = 0; 
        }                  
    }else{
        if(hr != 12 )
            hr = (stoi(s.substr(0,2)) + 12);    
    }
    if(hr < 10)
        return  "0" + to_string(hr) + s.substr(2,6);
    return  to_string(hr) + s.substr(2,6);

}

// Conrtibuted by Arindam Hazra