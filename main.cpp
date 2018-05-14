//This program will calculate the final grade average

#include <iostream>
#include <iomanip>

using  namespace std;

int main()

{
    double quiz1, quiz2, midTerm, finalExam;
    double quizWeight, midTermWeight, finalWeight, finalGrade;
    char letterGrade;
    
    cout<<"Enter your first quiz score\n";
    cin>> quiz1;
    if ((quiz1 >10) || (quiz1<0))
    {
        cout<<"ERROR: Enter valid quiz one score (0 to 10)!\n";
        return 0;
    }
    cout<<"Enter your second quiz score\n";
    cin>> quiz2;
    if ((quiz2 >10) || (quiz2<0))
    {
        cout<<"ERROR: Enter valid quiz two score (0 to 10)!\n";
        return 0;
    }
    cout<<"Enter your midterm exam score\n";
    cin>> midTerm;
    if ((midTerm >100) || (midTerm<0))
    {
        cout<<"ERROR: Enter valid midterm score (0 to 100)!\n";
        return 0;
    }
    cout<<"Enter you final exam score\n";
    cin>> finalExam;
    if ((finalExam >100) || (finalExam<0))
    {
        cout<<"ERROR: Enter valid final exam score (0 to 100)!\n";
        return 0;
    }
    
    quizWeight = (( ((quiz1)/10) + ((quiz2)/10) ) / 2) * 0.25;
    midTermWeight = (midTerm / 100) * 0.25;
    finalWeight = (finalExam / 100) * 0.50;
    
    finalGrade = (quizWeight + midTermWeight + finalWeight) * 100;
    
    
    if (finalGrade < 60)
        letterGrade = 'F';
    else if (finalGrade >= 60 && finalGrade < 70)
        letterGrade = 'D';
    else if (finalGrade >= 70 && finalGrade < 80)
        letterGrade = 'C';
    else if (finalGrade >= 80 && finalGrade < 90)
        letterGrade = 'B';
    else
        letterGrade = 'A';
    

    cout<<"\n\n\nQuiz One Score: " <<setw(15) <<quiz1 <<endl<<endl;
    cout<<"Quiz Two Score: " <<setw(15) <<quiz2 <<endl<<endl;
    cout<<"Midterm Exam Score: " <<setw(11) <<midTerm <<endl<<endl;
    cout<<"Final Exam Score: " <<setw(13) <<finalExam <<endl<<endl;
    cout<<"Final Average: " <<setw(15) <<finalGrade << "%" <<endl<<endl;
    cout<<"Final Letter Grade: " <<setw(11) <<letterGrade <<endl<<endl;
    
    switch (letterGrade)
    {
        case 'A':
            cout<< "Great job!" <<endl<<endl;
            break;
        case 'B':
            cout<< "Good job" <<endl<<endl;
            break;
        case 'C':
            cout<< "Fair job, try harder" <<endl<<endl;
            break;
        case 'F':
            cout<< "You failed!" <<endl<<endl;
            break;
        default:
            cout<< "invalid" <<endl<<endl;
    }
    
    return 0;

}


