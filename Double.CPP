#include < iostream.h > #include < conio.h > #include < string.h > #include < stdio.h >
  class Student {
    private:
      char name[20];
      char sub1[15];
      char sub2[15];
      char grade[5];
      int module, semester, rollNo;
    public:

     Student();
     ~Student();
     void output();
     void input();
     int getRoll();
     void update();

  };

int Student::getRoll() 
{
  return rollNo;
}

void Student::update()
{
  update: clrscr();
  cout << "         Update Menu                       Showing Data Of Chosen Student\n";
  cout << "\nTo Update Roll #    Enter (R) || Roll No Of The Student=   " << rollNo << endl;
  cout << "To Update Name      Enter (N) || Name Of The Student=      " << name << endl;
  cout << "To Update 1 Subject Enter (F) || 1 Subject Of The Student= " << sub1 << endl;
  cout << "To Update 2 Subject Enter (S) || 2 Subject Of The Student= " << sub2 << endl;
  cout << "To Update Grade     Enter (G) || C Grade Of The Student=   " << grade << endl;
  cout << "                              || Semester Of The Studet=   " << semester << endl;
  cout << "                              || Module Of The Student=    " << module << endl;
  char b;
  cout << "Enter The Desire Update=" << endl;

  cin >> b;

  switch (b) {
  case 'r':
    cout << "Enter Your New Roll Number=";
    cin >> rollNo;
    gotoxy(60, 3);
    cout << "          ";
    gotoxy(60, 3);
    cout << rollNo << endl;
    break;
  case 'n':
    cout << "Enter Your New Name=";
    gets(name);
    gotoxy(60, 4);
    cout << "          ";
    gotoxy(60, 4);
    cout << name << endl;
    break;
  case 'f':
    cout << "Enter Your New First Subject=";
    gets(sub1);
    gotoxy(60, 5);
    cout << "          ";
    gotoxy(60, 5);
    cout << sub1;
    break;
  case 's':
    cout << "Enter Your New Second Subject=";
    gets(sub2);
    gotoxy(60, 6);
    cout << "          ";
    gotoxy(60, 6);
    cout << sub2;
    break;
  case 'g':
    cout << "Enter Your New Grade=";
    gets(grade);
    gotoxy(60, 7);
    cout << "          ";
    gotoxy(60, 7);
    cout << grade;
    break;

  default:
    cout << "Wrong Input\n" << "Press Any key To input Again\n";
    goto update;
  }
  char c = 'y';
  gotoxy(1, 12);
  again: cout << "If You Want TO Update Again Enter Y \nTo Quit Enter Q\n";
  cin >> c;
  switch (c) {
  case 'y':
    goto update;
    break;
  case 'q':
    break;
  default:
    cout << "Wrong Input" << endl;
    goto again;

  }
}

Student::Student() 
{
  module = 1;
  semester = 2;
  rollNo = 0;
}

Student::~Student() 
{

}

void Student::input() 
{
  cout << "Enter Name Of Student" << endl;
  gets(name);
  cout << "Enter The Roll Number\n";
  cin >> rollNo;
  cout << "Enter First Subject Of Student" << endl;
  gets(sub1);
  cout << "Enter Second Subject Of Student" << endl;
  gets(sub2);
  cout << "Enter Grade Of Student" << endl;
  gets(grade);
}
void Student::output() 
{
  cout << "==========================Showing Records Of All Students======================" << endl;
  cout << "||    Name Of The Student=             " << name << endl;
  cout << "||    Roll No Of The Student=          " << rollNo << endl;
  cout << "||    Semester Of The Studet=          " << semester << endl;
  cout << "||    Module Of The Student=           " << module << endl;
  cout << "||    First Subject Of The Student=    " << sub1 << endl;
  cout << "||    Second Subject Of The Student=   " << sub2 << endl;
  cout << "||    C Grade Of The Student=          " << grade << endl;
  cout << "===============================================================================" << endl;
}

class Double {
  private:
    class Node {
      public:

        Node * next;
      Node * prev;
      Student info;

    };

  Node * head;
  Node * last;
  int count;
  public:
    void addValue();
    void showValue();
    void showValue1();
    void destroyList();
    void deleteValue();
    void update();
    Double();
   ~Double();
};

void Double::update() 
{
  if (head == 0) {
    cout << "List Empty\n";
    getch();
  } 
  else 
  {
    int a;
    cout << "Enter The Roll No Of Student You Want To Update=" << endl;
    cin >> a;
    Node * current;
    current = head;
    while (current != 0) {
      if (current - > info.getRoll() == a)
        break;
      current = current - > next;
    }
    current - > info.update();
  }
}

void Double::deleteValue() {
  if (head == 0) {
    cout << "List Is Empty\n";
    getch();
  } 
  else 
  {
    int a;
    cout << "Enter The Roll No Of Student You Want To Delete=" << endl;
    cin >> a;
    Node * current, * trail;
    current = head;
    while (current != 0) {
      if (current - > info.getRoll() == a)
        break;
      trail = current;
      current = current - > next;
    }
    if (current == head) {
      head = head - > next;
      delete current;
      count--;
    } else {
      trail - > next = current - > next;
      delete current;
      count--;
    }
  }
}

Double::Double() {
  head = 0;
  last = 0;
  count = 0;
}
Double::~Double() {
  destroyList();
}

void Double::addValue() {
  Node * newPtr;
  newPtr = new Node;
  newPtr - > next = 0;
  newPtr - > prev = 0;
  newPtr - > info.input();

  if (head == 0) {
    head = newPtr;
    last = newPtr;
    count++;
  } else {
    Node * current, * trail;
    current = head;
    while (current != 0) {
      if (current - > info.getRoll() >= newPtr - > info.getRoll())
        break;
      trail = current;
      current = current - > next;
    }
    if (current == head) {

      newPtr - > next = head;
      head = newPtr;
      current - > prev = newPtr;
      count++;
    } else {
      trail - > next = newPtr;
      newPtr - > next = current;
      current - > prev = newPtr;
      newPtr - > prev = trail;
      count++;
    }
    if (current == 0) {
      last = newPtr;
      newPtr - > prev = trail;

    }

  }
}

void Double::destroyList() {
  if (head != 0) {
    Node * ptr;
    while (head != 0) {
      ptr = head;
      head = head - > next;
      delete ptr;

    }
    cout << "List Has Been Destroyed";
    getch();
    count = 0;
    return;
  } else {
    cout << "List Is Empty";
    getch();
  }
}
void Double::showValue() {
  if (head != 0) {
    Node * ptr;
    ptr = head;
    clrscr();

    while (ptr != 0) {
      ptr - > info.output();
      ptr = ptr - > next;
    }
    getch();

    return;
  } else {
    cout << "List Is Empty\n";
    getch();
  }
}

void Double::showValue1() {
  if (head != 0) {
    Node * ptr;
    ptr = last;
    clrscr();

    while (ptr != 0) {
      ptr - > info.output();
      ptr = ptr - > prev;
    }
    getch();

    return;
  } else {
    cout << "List Is Empty\n";
    getch();
  }
}
void main() {
  clrscr();
  Double a;
  char input;
  again:
    clrscr();

  cout << "====================Welcome To Student Data Entry System========================" << endl;
  cout << "\tA-To Add Value\n\tS-To Show Value In Asscending Order\n\tB-To Show Value In Decending Order\n\tU-To Update Value\n\tL-To Delete Value\n\tD-To Destroy List\n\tE-To Exit\n\n\t\tEnter Desire Input=";

  input = getch();
  cout << endl;
  switch (input) {
  case 'a':
    a.addValue();
    break;
  case 's':
    a.showValue();
    break;
  case 'b':
    a.showValue1();
    break;
  case 'l':
    a.deleteValue();
    a.showValue();
    break;
  case 'd':
    a.destroyList();
    break;
  case 'u':
    a.update();
    break;
  case 'e':
    goto exit;
  default:
    cout << "Wrong Input\n";
    getch();
    goto again;
  }
  goto again;
  exit:

}
