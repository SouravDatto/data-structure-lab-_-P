#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
        string name;

  double CGPA;

  void showStudentinfo()
  {
      cout<< name <<endl;
      cout<< CGPA<<endl;
  }

  void setvalue(string x, double y)
{
    name = x;
    CGPA = y;

}
};

int main()
{



    Student s1;
    Student s2;
    Student s3;
    Student s4;
    Student s5;

    s1.setvalue("John",3.75);
    s2.setvalue("sourav",3.50);
    s3.setvalue("RIYA",3.97);
    s4.setvalue("kingshuk",3.8);
    s5.setvalue("prantika",4.00);


Student student[5] = {s1,s2,s3,s4,s5};


int min_index =0;
    Student temp;

    for(int i=0; i<5;i++){
        cout<<student[i].CGPA<<" ";
    }
    cout<<endl<<"---------"<<endl;

    for(int i=0; i<5; i++){
        min_index = i;

        for(int j=i+1; j<5; j++){
            if(student[min_index].CGPA > student[j].CGPA){
                min_index = j;
            }
        }

        temp = student[min_index];
        student[min_index] = student[i];
        student[i] = temp;
    }

    for(int i=0; i<5;i++){
        cout<<student[i].CGPA<<" ";
    }

    cout<<endl;

    return 0;
}










