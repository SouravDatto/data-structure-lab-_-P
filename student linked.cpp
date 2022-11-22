#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int roll;
    string Name;
    string Dept;
    int Marks;
    Node* next;
};


Node* head = new Node();

bool check(int x)
{
    // Base Case
    if (head == NULL)
        return false;

    Node* t = new Node;
    t = head;


    while (t != NULL) {
        if (t->roll == x)
            return true;
        t = t->next;
    }

    return false;
}


void Insert_Record(int roll, string Name,
                   string Dept, int Marks)
{

    if (check(roll)) {
        cout << "Student with this "
             << "record Already Exists\n";
        return;
    }


    Node* t = new Node();
    t->roll = roll;
    t->Name = Name;
    t->Dept = Dept;
    t->Marks = Marks;
    t->next = NULL;


    if (head == NULL
        || (head->roll >= t->roll)) {
        t->next = head;
        head = t;
    }

    else {
        Node* c = head;
        while (c->next != NULL
               && c->next->roll < t->roll) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }

    cout << "Record Inserted "
         << "Successfully\n";
}


void Search_Record(int roll)
{

    if (!head) {
        cout << "No such Record "
             << "Available\n";
        return;
    }


    else {
        Node* p = head;
        while (p) {
            if (p->roll == roll) {
                cout << "Roll Number\t"
                     << p->roll << endl;
                cout << "Name\t\t"
                     << p->Name << endl;
                cout << "Department\t"
                     << p->Dept << endl;
                cout << "Marks\t\t"
                     << p->Marks << endl;
                return;
            }
            p = p->next;
        }

        if (p == NULL)
            cout << "No such Record "
                 << "Available\n";
    }
}


void Show_Record()
{
    Node* p = head;
    if (p == NULL) {
        cout << "No Record "
             << "Available\n";
    }
    else {
        cout << "Index\tName\tCourse"
             << "\tMarks\n";

        // Until p is not NULL
        while (p != NULL) {
            cout << p->roll << "    \t"
                 << p->Name << "\t"
                 << p->Dept << "\t"
                 << p->Marks << endl;
            p = p->next;
        }
    }
}


int main()
{
    head = NULL;
    string Name, Course;
    int Roll, Marks;


    while (true) {
        cout << "\n\t\tWelcome to Student Record "
                "Management System\n\n\tPress\n\t1.to "
                "create a new Record\n\t2.to Search a Student "
                "Record\n\t3. to view all students "
                "record\n\t4. to Exit\n";
        cout << "\nEnter your Choice\n";
        int Choice;


        cin >> Choice;
        if (Choice == 1) {
            cout << "Enter Name of Student\n";
            cin >> Name;
            cout << "Enter Roll Number of Student\n";
            cin >> Roll;
            cout << "Enter Course of Student \n";
            cin >> Course;
            cout << "Enter Total Marks of Student\n";
            cin >> Marks;
            Insert_Record(Roll, Name, Course, Marks);
        }

        else if (Choice == 2) {
            cout << "Enter Roll Number of Student whose "
                    "record you want to Search\n";
            cin >> Roll;
            Search_Record(Roll);
        }
        else if (Choice == 3) {
            Show_Record();
        }
        else if (Choice == 4) {
            exit(0);
        }
        else {
            cout << "Invalid Choice "
                 << "Try Again\n";
        }
    }
    return 0;
}
