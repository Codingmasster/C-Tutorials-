#include<iostream.h>
#include<conio.h>
class ABC
{
private:
  int var1;
  int var2;
public:
  void setValues (int a, int b);
  void showValues ();
    ABC (int v1, int v2);
   ~ABC ();
};
void ABC::setValues (int a, int b)
{
  var1 = a;
  var2 = b;
}

void ABC::showValues ()
{
  cout << var1 << "\n" << var2 << "\n";
}

ABC::ABC (int v1, int v2)
{
  var1 = v1;
  var2 = v2;
  cout << "Constructer Called\n";
}

ABC::~ABC ()
{
  cout << "Destructer Called\n";
}

int main ()
{
  clrscr ();
  ABC obj1 (10, 15);
  {
    obj1.showValues ();
    ABC obj2 (30, 35);
  } getch ();
}

