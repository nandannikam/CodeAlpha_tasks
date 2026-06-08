# include <iostream>
using namespace std;

float total_gpa = 0.0;

float cal(){
   
    int courses;
    cout << "Enter the number of courses - ";
    cin >> courses;
    float total_credits = 0;
    float total_gp = 0.0;

    float gp;

    for (int i=1; i<=courses;i++){
        float credit;
        cout << "Enter the credits for the course " << i << " - ";
        cin >> credit;
        total_credits += credit;

    char g;
    while (true) {
        cout << "Enter the grade for course " << i << " - ";
        cin >> g;

        if(g=='A'||g=='a'){ gp = credit * 4.0; break; }
        else if(g=='B'||g=='b'){ gp = credit * 3.0; break; }
        else if(g=='C'||g=='c'){ gp = credit * 2.0; break; }
        else if(g=='D'||g=='d'){ gp = credit * 1.0; break; }
        else if(g=='F'||g=='f'){ gp = 0; break; }
        else {
            cout << "Invalid grade! Try again.\n";
        }
    }

        cout << "Grade of course " << i << " - " <<g << endl;

        total_gp += gp;      
    }

    if (total_credits == 0) {
        cout << "Error: Total credits cannot be zero." << endl;
        return 0;
    }

    float gpa = total_gp / total_credits;
    
    return gpa;
}

void cgpa(int s){

    float final_cgpa = total_gpa/s;

    cout << " " << endl;
    cout << "CGPA of the candidate is - " << final_cgpa << endl;
}

int main(){

    int sem;

    cout << "--- WELCOME TO GPA & CGPA CALCULATOR ---" << endl;
    cout << " " << endl; 
    cout << "Enter the number of semester - ";
    cin >> sem;

    if (sem <= 0) {
        cout << "Invalid number of semesters!" << endl;
        return 0;
    }

    for (int l=0; l<sem; l++){
        cout << " " << endl;
        cout << "--SEMESTER - " << (l+1) << "--"<< endl;
        cout << " " << endl;
        float sem_gpa = cal();
        total_gpa += sem_gpa;

        cout << "GPA for semester " << (l+1) << " - " << sem_gpa << endl;
    }

    cgpa(sem);

    return 0;
}
