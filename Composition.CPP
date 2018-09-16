#include<iostream.h>
#include<conio.h>
#include<string.h>
class Date
{
private:
  int day, month, year;
public:
  void setDate (int d, int m, int y);
  void showDate ();
    Date (int d, int m, int y);
   ~Date ();

};
void Date::setDate (int d, int m, int y)
{
  day = d;
  month = m;
  year = y;
}

void Date::showDate ()
{
  cout << "day=" << day << "Month=" << month << "Year" << year << endl;
}

Date::Date (int d, int m, int y)
{
  cout << "constructor called";
  day = d;
  month = m;
  year = y;
}

Date::~Date ()
{
  cout << "Destructor called";
}

class student
{
private:
  char *fname;
  char *lname;
  Date dob;
  Date doa;
public:
   ~student ();
    student (char *fn, char *ln, int bd, int bm, int by, int ad, int am,
	     int ay);
  void showstudent ();
};

student::student (char *fn, char *ln, int bd, int bm, int by, int ad, int am,
		  int ay):
dob (bd, bm, by),
doa (ad, am, ay)
{
  fname = new char[strlen (fn) + 1];
  strcpy (fname, fn);
  lname = new char[strlen (fn) + 1];
  strcpy (lname, ln);
}

student::~student ()
{
  delete[]fname;
  delete[]lname;
  cout << "destructor called\n";
}

void
student::showstudent ()
{
  cout << fname << lname;
  dob.showDate ();
  doa.showDate ();
}

int main ()
{
  clrscr ();
  char fsname[7] = { 0 };
  char lsname[7] = { 0 };
  int bd = 0, bm = 0, by = 0, ad = 0, am = 0, ay = 0;
  cout << "enter first name\n";
  for (int i = 0; i < 7; i++)
    {
      cin >> fsname[i];
    }
  cout << "enetr last name\n";
  for (int j = 0; j < 7; j++)
    {
      cin >> lsname[j];
    }
  cout << "enter the date of birth\n";
  cin >> bd >> bm >> by;
  cout << "enter date of admission\n";
  cin >> ad >> am >> ay;

  student st (fsname, lsname, bd, bm, by, ad, am, ay);
  st.showstudent ();
  getch ();
}

