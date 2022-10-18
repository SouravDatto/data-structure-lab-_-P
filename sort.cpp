#include <iostream>
using namespace std;

class Student
{
   public:
    int studentID;
    string studentName;
    double CGPA;
    int completeCredits;

};
int main()
{
    Student S[5];
   int i, n = 0;
   Student temp;
   double num;
   int pass1=0;
   int count=0;
   int swap=0;

 cout<<"*********Student's Information*********"<<endl;
     for(i=0; i<5; i++)
   {
       cout << "  " << (i + 1) << "th Student's Info"<< endl;
       cout<<"Student ID: ";
       cin>>n;
                S[i].studentID = n;
                cout<<"Student's Name: ";
                cin>>S[i].studentName;
                cout<<"Credit Completed: ";
                cin>>S[i].completeCredits;
               cout<<"CGPA: ";
               cin>>S[i].CGPA;
    }
cout<<"*********Sorted By Credit*********"<<endl;
    for(int i=0; i<5; i++)
        {
        int min_index = i;
        for(int j=i+1; j<5; j++)
            {
            if(S[min_index].completeCredits > S[j].completeCredits)
            {
                min_index = j;
                count++;
            }
            }
        temp = S[min_index];
        S[min_index] = S[i];
        S[i] = temp;
        swap++;}
    cout<<"Number of Comparisons: "<<count<<endl;
    cout<<"Number of Swap: "<<swap<<endl;
    cout<<endl;

for(int i=0; i<5; i++)
{
cout<<"Student ID: "<<S[i].studentID<<" ";
cout<<"Student Name: "<<S[i].studentName<<" ";
cout<<"Completed Credit: "<<S[i].completeCredits<<" ";
cout<<"CGPA: "<<S[i].CGPA<<" ";
cout<<endl;

}
cout<<"*********Sorted By CGPA*********"<<endl;
for(int i=0; i<(5-1);i++)
{
for(int j=0; j<(5-i-1);j++)
    {
        if(S[j].CGPA>S[j+1].CGPA)
        {

        temp= S[j];
        S[j]=S[j+1];
        S[j+1]=temp;
        }

    }
    pass1++;
}
cout<<"Number of passes to sort: "<<pass1<<endl;
cout<<endl;
for(int i=0; i<5; i++)
    {
cout<<"Student ID: "<<S[i].studentID<<" ";
cout<<"Student Name: "<<S[i].studentName<<" ";
cout<<"Completed Credit: "<<S[i].completeCredits<<" ";
cout<<"CGPA: "<<S[i].CGPA<<" ";
cout<<endl;
}

cout<<endl;
cout<<endl;


cout<<"Enter the CGPA to search: ";
cin>>num;

   for(i=0;i<5;i++)
   {
       if(S[i].CGPA == num)
       {
cout<<"Student ID: "<<S[i].studentID<<" "<<endl;
cout<<"Student Name: "<<S[i].studentName<<" "<<endl;
cout<<"Completed Credit: "<<S[i].completeCredits<<" "<<endl;
cout<<"CGPA: "<<S[i].CGPA<<" "<<endl;

       }
       else{
            cout<<"value not found"<<endl;
   }
   cout<<endl;

}
}
