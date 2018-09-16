#include<iostream.h>
#include<conio.h>
class set
{
private:
  int size;
  int *setA;
public:
    set (int a = 0);
   ~set ();
  void setvalue ();
  void showvalue ();
  void cardnality (set);
  void equality (set);
  void cartesian (set);
  void unionOFab (set);
  void intersection (set);
  void difference (set);
};

void set::setvalue ()
{
again:
  cout << "ENTER THE SIZE OF SET=\n";
  cin >> size;
  if (size <= 0)
    {
      cout << "WRONG INPUT\n";
      goto again;
    }
  cout << "\nENTER THE VALUE AGAIN=";
  setA = new int[size];
  for (int i = 0; i < size; i++)
    {
    error:
      cin >> setA[i];
      if (setA[i] < 0 || setA[i] > 9)
	{
	  cout << "\nWRONG INPUT PLEASE TRY AGAIN\n";
	  goto error;
	}
      int y;
      y = i - 1;
      for (y; y >= 0; y--)
	{
	  if (setA[i] == setA[y])
	    {
	      cout << "WRONG INPUT PLEASE TRY AGAIN";
	      goto error;
	    }
	}
    }
}


void set::showvalue ()
{
  cout << "ALL VALUES OF SET  YOU ENTERED {";
  for (int i = 0; i < size; i++)
    {
      cout << setA[i] << ",";
    }
  cout << "}\n";
}

void set::equality (set b)
{
  if (size != b.size)
    cout << "SETS ARE NOT EQUAL\n";
  else
    {
      int c = 0;
      for (int i = 0; i < size; i++)
	{
	  if (setA[i] == b.setA[i])
	    {
	      c++;
	    }
	  if (c == size)
	    {
	      cout << "SETS ARE EQUAL\n";
	    }
	  else
	    {
	      cout << "SETS ARE NOT EQUAL";
	    }
	}
    }
}

set::~set ()
{
  delete[]setA;
}

set::set (int a)
{
  size = a;
  for (int i = 0; i < size; i++)
    {
      setA[i] = a;
}}

void set::cardnality (set b)
{
  cout << "CARDNALITY OF SET A=" << size << endl;
  cout << "CARDNALITY OF SET B=" << b.size << endl;
}

void set::cartesian (set b)
{
  for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < b.size; j++)
	{
	  cout << "(" << setA[i] << "," << b.setA[j] << ")," << "  ";
}}}

void set::unionOFab (set b)
{
  int a = 0;
  cout << "AUB={";
  for (int i = 0; i < size; i++)
    {
      cout << setA[i] << ",";
    }
  for (i = 0; i < b.size; i++)
    {
      for (int j = 0; j < size; j++)
	{
	  if (setA[j] == b.setA[i])
	    {
	      a = a + 1;
	    }
	}
      if (a == 0)
	{
	  cout << b.setA[i] << ",";
	}
      a = 0;
    }
  cout << "}";
}

void set::intersection (set b)
{
  cout << "INTERSECTION OF SET A AND SET B={";
  for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < b.size; j++)
	if (setA[i] == b.setA[j])
	  {
	    cout << setA[i] << ",";
	  }
    }
  cout << "}\n";
}

void set::difference (set b)
{
  char f;
start:
  cout << "FOR A-B PRESS a\n";
  cout << "FOR B-A PRESS b\n";
  cin >> f;
  switch (f)
    {
    case 'a':
      {
	int a = 0;
	cout << "A-B={";
	for (int i = 0; i < size; i++)
	  {
	    for (int j = 0; j < b.size; j++)
	      if (setA[i] == b.setA[j])
		{
		  a = a + 1;
		}
	    if (a == 0)
	      {
		cout << setA[i] << ",";
	      }
	  }
	cout << "}\n";
      }
      break;
    case 'b':
      {
	int c = 0;
	cout << "\nb-a ={";
	for (int i = 0; i < size; i++)
	  {
	    for (int j = 0; j < b.size; j++)
	      {
		if (b.setA[j] == setA[i])
		  {
		    c = c + 1;
		  }
	      }

	    if (c == 0)
	      {
		cout << setA[i] << ",";
	      }
	    c = 0;
	  }
	cout << "}";
      }

      break;
    default:
      cout << "WRONG INPUT\n";
      goto start;
    }
}

void main ()
{
  clrscr ();
  set a, b;
  char f, d;
again:
  a.setvalue ();
  b.setvalue ();
  a.showvalue ();
  b.showvalue ();
  cout << "FOR CARDANALITY OF SET A ENTER (C)\n";
  cout << "FOR CARTIESEN PRODUCT ENTER (P)\n";
  cout << "FOR INTERSECTION ENTER (I)\n";
  cout << "FOR UNION ENTER (U)\n";
  cout << "FOR EQUALITY OF SET ENTER (E)\n";
  cout << "FOR DIFFERENCE ENTER (D)\n";
  cin >> f;
  switch (f)
    {
    case 'c':
      a.cardnality (b);
      break;
    case 'p':
      a.cartesian (b);
      break;
    case 'i':
      a.intersection (b);
      break;
    case 'u':
      a.unionOFab (b);
      break;
    case 'e':
      a.equality (b);
      break;
    case 'd':
      a.difference (b);
      break;
    default:
      cout << "Wrong input\n";
    }
  cout << "IF YOU WANT TO CONTINUE PRESS (Y) FOR QUITING PRESS(N)\n";
  cin >> d;
  switch (d)
    {
    case 'y':
      goto again;
      break;
    case 'n':
      break;
    default:
      cout << "WRONG INPUT\n";
    }
  getch ();

}
