#include<iostream>
using namespace std;
 class record
 {
     int Rollnum;
     string name;
     float m1,m2,m3;
     public:
     void getdata();
     void display();
     float average();

     record()
     {
         Rollnum = 100;
         name = "palsi bhesdadiya ";
         m1 = 80;
         m2 =70;
         m3 =90;

     }

 };
 void record:: getdata()
 {
     cin.ignore();
     cout<<"\n enter student name : ";
     getline(cin,name);
     cout<<" enter roll number : ";
     cin>>Rollnum;
     cout<<"mark of subject 1 : ";
     cin>>m1;
     cout<<" mark of subject 2 : ";
     cin>>m2;
     cout<<"  mark of subject 3 : ";
     cin>>m3;
 }
 float record:: average()
 {
     float average;
     average=(m1+m2+m3)/3.0;
     return average;

 }
 void record:: display()
 {
     cout<<"\n=============================================================\n";
     cout<<" Roll number : "<<Rollnum<<endl;
     cout<<" Student name: "<< name<<endl;
     cout<<" marks of all subjects : "<<m1<<"  "<<m2 <<"  "<<m3 <<endl;
     cout<<" average marks :" << average();
     cout<<"\n=============================================================\n";
 }

 int main()
 {
     record student[3];
     int i;
     for(i=0;i<3;i++)
     {
         student[i].display();
     }
     cout<<"enter student data:"<<endl;
      for(i=0;i<3;i++)
     {
         student[i].getdata();
     }
     cout<<"results"<<endl;
      for(i=0;i<3;i++)
     {
         student[i].display();
     }

 }
