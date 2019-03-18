//1. Implement Inheritance as shown in the diagram. Class Student has members functions student_Details() and display_Student_Details() and name, roll no, and gender as data members. Internal_Exam and External_Exam classes have separate functions to get and display Internal and External marks for 6 subjects. Define Result class to evaluate and display the results suitably (40%  Internal + 60% External).

#include<iostream>
using namespace std;

class Student
{
 protected:
 
    char name[50];
    char gender;
     int rollno;
 
  
 
  
 public:  
  
   void student_Details()
   {
     cout<<"Enter your name\n";
     cin>>name;
     cout<<"\nEnter your gender\n";
     cin>>gender;
     cout<<"\nEnter your roll no.";
     cin>>rollno;
   }
  
   void display_student_Details()
   {
      cout<<"\nName    : "<<name;
      cout<<"\nGender  : "<<gender;
      cout<<"\nRoll no.: "<<rollno;
   }
 
};   // end of class student (PARENT CLASS)



class Internal_Exam:public Student
{

 public:
  
  float math,eng,chem,phy,ads,scm;
 
 

 void get_marks() 
 {
   cout<<"Enter Internal Marks out of 100\n";
   cout<<"Maths     :";
   cin>>math;
   cout<<"English   :";
   cin>>eng;
   cout<<"Chemistry :";
   cin>>chem;
   cout<<"Physics   :";
   cin>>phy;
   cout<<"ADS       :";
   cin>>ads;
   cout<<"SCM       :";
   cin>>scm;
  }

  
  void display_marks()
  {
    cout<<"\nMarks Entered\nMaths "<<math<<"English "<<eng<<"Chemistry "<<chem<<"Physics "<<phy<<"ADS "<<ads<<"SCM "<<scm;
  } 
};


  
  
  class External_Exams:public Student
{
  public:
  float math1,eng1,chem1,phy1,ads1,scm1;

 

 void get_marks1() 
 {
   cout<<"Enter External Marks out of 100\n";
   cout<<"Maths     :";
   cin>>math1;
   cout<<"English   :";
   cin>>eng1;
   cout<<"Chemistry :";
   cin>>chem1;
   cout<<"Physics   :";
   cin>>phy1;
   cout<<"ADS       :";
   cin>>ads1;
   cout<<"SCM       :";
   cin>>scm1;
  }

  
  void display_marks1()
  {
    cout<<"\nMarks Entered\nMaths "<<math1<<"English "<<eng1<<"Chemistry "<<chem1<<"Physics "<<phy1<<"ADS "<<ads1<<"SCM "<<scm1;
  } 
};
class result:public Internal_Exam,public External_Exams
{
   private:
   float a,b,c,d,e,f;
   float a1,b1,c1,d1,e1,f1,sum[6];
  
 public:
   void calculate()
 {
   a=math*40/100;
   b=eng*40/100; 
   c=chem*40/100;
   d=phy*40/100;
   e=ads*40/100;
   f=scm*40/100;
   
   a1=math1*60/100;     
   b1=eng1*60/100;
   c1=chem1*60/100;
   d1=phy1*60/100;
   e1=ads1*60/100;
   f1=scm1*60/100;
   
   sum[0]=a+a1;sum[1]=b+b1;sum[2]=c+c1;sum[3]=d+d1;sum[4]=e+e1;sum[5]=f+f1;
    }
    
   void show()
   {
     int i;float j;
   for(i=0;i<6;i++)
    {
    if(i==0)
      cout<<"\nMaths"<<endl;
      else if(i==1)
      cout<<"English"<<endl;
     else if(i==2)
     cout<<"Chemistry"<<endl;
    else if(i==3)
    cout<<"Physics"<<endl;
     else if(i==4)
    cout<<"Ads"<<endl;
    else if(i==5)
    cout<<"Scm"<<endl;
    cout<<sum[i]<<endl;
     
   }
   j=a+b+c+d+e+f+a1+b1+c1+d1+e1+f1;
    cout<<"C.G.P.A="<<j/600*100<<endl;
  }
 };
   int main(void)
  {
    result r;
 Internal_Exam a;
    a.student_Details(); 
    r.get_marks();
     r.get_marks1();
   r.display_marks();
  r.display_marks1();
  r.calculate();
   r.show();
  return 0;
}

