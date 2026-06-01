# include <iostream>
using namespace std;

float gpa = 0.0;
float total_gpa = 0.0;

float cal(){
   
    int courses;
    cout << "Enter the number of courses - ";
    cin >> courses;
    float total_credits = 0;
    float total_gp = 0.0;

    float gp;

    for (int i=1; i<=courses;i++){
        int credit;
        cout << "Enter the credits for the course " << i << " - ";
        cin >> credit;
        total_credits += credit;

        char g;
        cout << "Enter the grade for course " << i << " - ";
        cin >> g;


        if(g == 'A'|| g == 'a'){
            gp = credit * 4.0;
        } else if (g == 'B'|| g == 'b'){
            gp = credit * 3.0;
        } else if (g == 'C'|| g == 'c'){
            gp = credit * 2.0;
        } else if (g == 'D'|| g == 'd'){
            gp = credit * 1.0;
        } else if (g == 'F'|| g == 'f'){
            gp = credit * 0;
        } else {
            gp = 0;
            cout << "Enter a valid grade." << endl;
        }

        cout << "Grade of course" << i << " - " <<g << endl;

        total_gp += gp;      
    }

    gpa = total_gp / total_credits;
    
    return gpa;
}

void cgpa(int s){

    float cgpa = total_gpa/s;
    cout << "CGPA of the candidate is - " << cgpa << endl;
}

int main(){

    int sem;
    cout << "Enter the number of semester - ";
    cin >> sem;

    for (int l=0; l<sem; l++){
        total_gpa += cal();
        cout << "GPA for semester" << l << " - " <<gpa << endl;
    }

    cgpa(sem);

    return 0;
}