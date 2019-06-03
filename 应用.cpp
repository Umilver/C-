#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    string number;
    char X;
    int year;
    Student(string,string,char,int);    
    void xianshi(void);    
};
Student::Student(string N,string n,char x,int y)   
{
    name = N;
    number = n;
    X = x;
    year = y;
}

void Student::xianshi()    
{
    cout<<name<<endl;
    cout<<number<<endl;
    cout<<X<<endl;
    cout<<year<<endl;
}

int main()                          
{
    cout<<"输入姓名：";
    string N;
    cin>>N;
    cout<<"输入学号：";
    string n;
    cin>>n;
    cout<<"输入性别（M 或 W）:";
    char x;
    cin>>x;
    cout<<"输入年龄：";
    int y;
    cin>>y;
    Student S(N,n,x,y);              
    S.xianshi();                       
    return 0;
}
