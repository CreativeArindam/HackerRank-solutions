vector<int> gradingStudents(vector<int> grades) {
    for(int i; i<grades.size(); i++){
        int grade = grades.at(i);
        if(grade >= 38 && grade % 5 >= 3){
            grades.at(i) += (5 - (grade % 5));
        }
    }
    return grades;
}

// Contributed By Arindam Hazra