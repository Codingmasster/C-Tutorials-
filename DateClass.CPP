#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class Date
{
private:
  char format;
  int d;
  int m;
  int y;
  int a;
  int b;
  int c;
  int date;
  int month;
  int year;
public:
    Date ();
  void displaydate ();
  void setDate (int d = 10, int m = 2, int y = 2012);
};
Date::Date ()
{
  d = 10;
  m = 2;
  y = 2012;
}

void
Date::displaydate ()
{
  cout << "\nDate=";
  cout << d;
  cout << "\nMonth=";
  cout << m;
  cout << "\nYear=";
  cout << y;
  cout << "\nEnter Date=";
  cin >> a;
  cout << "\nEnter Month=";
  cin >> b;
  cout << "\nEnter Year=";
  cin >> c;
  cout << "\nDate=\t" << a;
  cout << "\nMonth=\t" << b;
  cout << "\nYear=\t" << c << endl;
  cout << "YOUR RESULT OF SUBTRACTION";
  date = d - a;
  month = m - b;
  year = y - c;
  cout << "\nDay=" << date;
  cout << "\nMonth=" << month;
  cout << "\nYear=" << year << endl;
  cout << "ENTER THE FORMATE OF YOUR DESIRE" << endl;
  cout << "IF THIS(date:month:year)ENTER (d)" << endl;
  cout << "IF THIS(month:date:year)ENTER (m)" << endl;
  cout << "IF THIS(year:month:date)ENTER (y)" << endl;
  cin >> format;
  switch (format)
    {
    case 'd':
      cout << "DATE=" << date << "\t" << "MONTH=" << month << "\t" << "YEAR="
	<< year;
      break;
    case 'm':
      cout << "MONTH=" << month << "\t" << "DATE=" << date << "\t" << "YEAR="
	<< year;
      break;
    case 'y':
      cout << "YEAR" << year << "\t" << "MONTH" << month << "\t" << "DATE" <<
	date;
      break;
    default:
      cout << "wrong input";
    }
}

int
main ()
{
  Date z;
  clrscr ();
  z.displaydate ();
  getch ();
}

