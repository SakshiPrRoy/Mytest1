#include<iostream>
#include<fstream>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
//The date Class displays the date
class date
{
 int dd, mm, yyyy;
};
 
//The class displays all the details of employee
class emp
{
	public:
		int id , aadharcardno , panno;
		date bdate;
		char name[10],add[10],gen,design[10],dept[10];
		float bsal,dsal,hsal,totalsalary,totalincome;
   void insert()
   {
   cout << "\nEnter Employee ID :: ";
  cin >> id;
   	cout<<"Enter Aadhar card no :: "<<endl;
   	cin>>aadhar card no;
   	cout<<"Enter PAN no ::"<<endl;
   	cin>>pan no;
   	cout<<"Enter Employee Name ::"<<endl;
   	cin>>name;
   	cout<<"Enter Employee Designation ::"<<endl;
   	cin>>design;
   	cout<<"Enter Employee Department ::"<<endl;
   	cin>>dept;
   	cout<<"Enter Employee Basic Salary ::"<<endl;
   	cin>>bsal;
   	cout<<"Enter Employee DA Salary ::"<<endl;
   	cin>>dsal;
   	cout<<"Enter Employee HR Salary ::"<<endl;
   	cin>>hsal;
   	totalsalary= bsal + dsal + hsal;
   	totalincome = totalsalary + 1000 - (12 * 200) - ((3 * totalsalary) / 100);
   }
   void display()
{
	 cout << "\nName :: " << name;
    cout << "\nTotal Salary :: " << totalsalary;
    cout << "\nTotal Income :: " << totalincome;
 }
    float calctax(float income)
     {
      return 0;
     }
 
};
 
    class maleemp :public emp
    {
      public:
     maleemp()
    {
     gen = 'm';
     }
    float calctax(float income)
 {
  if (income<150000)
  {
   return 0;
  }
  else if (income>150000 && income<300000)
  {
   return (10 * income) / 100;
  }
  else if (income>300000 && income<500000)
  {
   return (20 * income) / 100;
  }
  else if (income>500000 && income < 1000000)
  {
   return (30 * income) / 100;
  }
  else
  {
   return (40 * income) / 100;
  }
 }
};
 
class femaleemp :public emp
{
public:
 femaleemp()
 {
  gen = 'f';
 }
 float calctax(float income)
 {
  if (income<180000)
  {
   return 0;
  }
  else if (income>180000 && income<300000)
  {
   return (10 * income) / 100;
  }
  else if (income>300000 && income<500000)
  {
   return (20 * income) / 100;
  }
  else if (income>500000 && income < 1000000)
  {
   return (30 * income) / 100;
  }
  else
  {
   return (40 * income) / 100;
  }
 }
};
 
 
 
 
int main()
{
 maleemp m;
 femaleemp f;
 float mtax, ftax;
 char g;
 
 cout << "Enter Gender of Employee (m/f) :: ";
 cin >> g;
 
 if (g == 'm')
 {
  m.insert();
  mtax = m.calctax(m.totalincome);
  cout << "\nTax of M :: " << mtax;
 }
 else
 {
  f.insert();
  ftax = f.calctax(f.totalincome);
  cout << "\nTax of F :: " << ftax;
 }
 getch();
 return 0;
}
