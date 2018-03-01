#include <iostream>

using namespace std;

class Info{
private:
    string *name;
    int *grade;

public:
//Constructor
  Info(string nName, int nGrade){

        name = new string;
        grade = new int;

        *name = nName;
        *grade = nGrade;

        cout <<  "Constructor is called " << endl;
    }

    void dispalyInfo(){
        cout << *name << " : " << *grade << endl;
    }

    //Destructor -> deallocate memory(pointer)
    ~Info(){
        delete name;
        delete grade;
        cout << "All memory are released. " << endl; }

};

int main() {
    //Create object (pointer)
   Info *student1;
   student1 = new Info("SAYOLI", 100);
   student1->dispalyInfo();

    //Delete object
    delete student1;

    return 0;
}