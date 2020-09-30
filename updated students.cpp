#include<iostream>
using namespace std;
class students
{
private:
int marks;
string name;
public:
string getname(){
    return name;
}
int getsdata(){
    return marks;
}
int one(){
    cout<<"ENTER THE FIRST NAME : ";
    cin>>name;
    cout<<"MARKS OF ALL SUBJECTS : ";
    cin>>marks;
    return marks;
}
int two(){
    cout<<"ENTER THE SECOND NAME : ";
    cin>>name;
    cout<<"MARKS OF ALL SUBJECTS  : ";
    cin>>marks;
    return marks;
}
};
int main(){
    students student1;
    student1.one();
    students student2;
    student2.two();
if(student1.getsdata() > student2.getsdata()){
    cout<<student1.getname()<<"'S MARKS ARE GREATER THAN "<<student2.getname()<<"'S MARKS"<<endl;
}
else if(student1. getsdata()< student2.getsdata()){
    cout<<student1.getname()<<"'S MARKS ARE LESSER THAN "<<student2.getname()<<"'S MARKS"<<endl;
}
else if(student1. getsdata()== student2.getsdata()){
    cout<<student1.getname()<<"'S MARKS IS EQUAL TO "<<student2.getname()<<"'S MARKS"<<endl;
}
}
