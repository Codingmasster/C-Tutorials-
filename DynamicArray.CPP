#include < iostream.h > #include < conio.h > #include < stdio.h > #include < string.h >

  class Dynamic {
    char fullname[20];
    char grade1[5];
    char grade2[5];
    char sub1[10];
    char sub2[10];
    char course[8];
    int sem;
    int roll;
    int count;
    int total;
    int classCount;
    Dynamic ** l2;
    public:
      Dynamic();
    ~Dynamic();
    void showValues();
    void setValues(int);
    void set();
    void deleteValue();
    void showAll();
    void showA();
    void showD();
    void update();
  };

Dynamic::Dynamic() {

  l2 = new Dynamic * [51];
  count = 0;
  roll = 0;
  sem = 0;

}

Dynamic::~Dynamic() {
  delete l2;
}

void Dynamic::showValues() {
  clrscr();
  int i = 0;
  cout << "\nEnter The Roll No Of The Student:";
  int a;
  cin >> a;
  for (int z = 0; z < count; z++) {
    if (a == l2[i][z].roll) {
      cout << "\n===================Student Information=====================\n\n\n";
      cout << "Roll No Of The Student=" << l2[i][z].roll << endl;
      cout << "Name Of The Student=" << l2[0][z].fullname << endl;
      cout << "Program Of The Student=" << l2[0][z].course << endl;
      cout << "First Subject Of The Student=" << l2[0][z].sub1 << endl;
      cout << "Grade Of First Subject=" << l2[0][z].grade1 << endl;
      cout << "Second Subject Of The Student=" << l2[0][z].sub2 << endl;
      cout << "Grade Of Second Subject=" << l2[0][z].grade2 << endl;
      cout << "============================================================" << endl;
    }
  }
}
void Dynamic::setValues(int n) {
  clrscr();
  for (int f = 0; f < n; f++) {
    clrscr();
    cout << "\n\n=================Enter The Record Of Student================\n";
    cout << "\nEnter Your Study Program:";
    gets(l2[0][f].course);
    cout << "\nEnter Roll Number:";
    cin >> l2[0][f].roll;
    cout << "\nEnter The Fullname:";
    gets(l2[0][f].fullname);
    cout << "\nEnter Semester:";
    cin >> l2[0][f].sem;
    cout << "\nEnter Subject 1:";
    gets(l2[0][f].sub1);
    cout << "\nEnter Grade for " << l2[0][f].sub1 << ":";
    gets(l2[0][f].grade1);
    cout << "\nEnter Subject 2:";
    gets(l2[0][f].sub2);
    cout << "\nEnter Grade for " << l2[0][f].sub2 << ":";
    gets(l2[0][f].grade2);
    count++;
  }

}
void Dynamic::set() {
  clrscr();
  cout << "=====================Dynamic Array=========================" << endl;
  cout << "\n\nEnter The  Total Number Of students:";
  int x;
  cin >> x;
  setValues(x);

}

void Dynamic::deleteValue()

{
  clrscr();
  cout << "\n\nEnter The Roll No Of The Student Which You Want To Delete:";
  int d;
  cin >> d;
  for (int f = 0; f < count; f++) {
    if (d == l2[0][f].roll) {
      l2[0][f].roll = l2[0][f + 1].roll;
      l2[0][f].sem = l2[0][f + 1].sem;
      strcpy(l2[0][f].fullname, l2[0][f + 1].fullname);
      strcpy(l2[0][f].course, l2[0][f + 1].course);
      strcpy(l2[0][f].sub1, l2[0][f + 1].sub1);
      strcpy(l2[0][f].grade1, l2[0][f + 1].grade1);
      strcpy(l2[0][f].sub2, l2[0][f + 1].sub2);
      strcpy(l2[0][f].grade2, l2[0][f + 1].grade2);
    }
  }
  count--;
  cout << "Selected Record Has Been Deleted";
}

void Dynamic::showAll() {
  clrscr();
  int b = 0;
  cout << "\n==============Showing Records Of All Students================\n\n\n";
  for (int z = 0; z < count; z++) {
    b++;
    cout << "Showing Records Of " << b << " Student" << endl;
    cout << "Roll No Of The " << b << " Student=" << l2[0][z].roll << endl;
    cout << "Name Of The " << b << " Student=" << l2[0][z].fullname << endl;
    cout << "Program Of The " << b << " Student=" << l2[0][z].course << endl;
    cout << "First Subject Of The " << b << " Student=" << l2[0][z].sub1 << endl;
    cout << "Grade Of First Subject=" << l2[0][z].grade1 << endl;
    cout << "Second Subject Of The " << b << " Student=" << l2[0][z].sub2 << endl;
    cout << "Grade Of Second Subject=" << l2[0][z].grade2 << endl;
    cout << "=========================================================" << endl;
  }
}

void Dynamic::showA() {
  clrscr();
  for (int i = 0; i < count; i++) {
    for (int j = i + 1; j < count; j++) {
      if (l2[0][i].roll > l2[0][j].roll) {
        l2[0][51].roll = l2[0][i].roll;
        l2[0][51].sem = l2[0][i].sem;
        strcpy(l2[0][51].fullname, l2[0][i].fullname);
        strcpy(l2[0][51].course, l2[0][i].course);
        strcpy(l2[0][51].sub1, l2[0][i].sub1);
        strcpy(l2[0][51].sub2, l2[0][i].sub2);
        strcpy(l2[0][51].grade1, l2[0][i].grade1);
        strcpy(l2[0][51].grade2, l2[0][i].grade2);

        l2[0][i].roll = l2[0][j].roll;
        l2[0][i].sem = l2[0][j].sem;
        strcpy(l2[0][i].fullname, l2[0][j].fullname);
        strcpy(l2[0][i].course, l2[0][j].course);
        strcpy(l2[0][i].sub1, l2[0][j].sub1);
        strcpy(l2[0][i].sub2, l2[0][j].sub2);
        strcpy(l2[0][i].grade1, l2[0][j].grade1);
        strcpy(l2[0][i].grade2, l2[0][j].grade2);

        l2[0][j].roll = l2[0][51].roll;
        l2[0][j].sem = l2[0][51].sem;
        strcpy(l2[0][j].fullname, l2[0][51].fullname);
        strcpy(l2[0][j].course, l2[0][51].course);
        strcpy(l2[0][j].sub1, l2[0][51].sub1);
        strcpy(l2[0][j].grade1, l2[0][51].grade1);
        strcpy(l2[0][j].sub2, l2[0][51].sub2);
        strcpy(l2[0][j].grade2, l2[0][51].grade2);
      }
    }
  }
}
void Dynamic::showD() {
  clrscr();
  for (int i = 0; i < count; i++) {
    for (int j = i + 1; j < count; j++) {
      if (l2[0][i].roll < l2[0][j].roll) {

        l2[0][51].roll = l2[0][i].roll;
        l2[0][51].sem = l2[0][i].sem;
        strcpy(l2[0][51].fullname, l2[0][i].fullname);
        strcpy(l2[0][51].course, l2[0][i].course);
        strcpy(l2[0][51].sub1, l2[0][i].sub1);
        strcpy(l2[0][51].sub2, l2[0][i].sub2);
        strcpy(l2[0][51].grade1, l2[0][i].grade1);
        strcpy(l2[0][51].grade2, l2[0][i].grade2);

        l2[0][i].roll = l2[0][j].roll;
        l2[0][i].sem = l2[0][j].sem;
        strcpy(l2[0][i].fullname, l2[0][j].fullname);
        strcpy(l2[0][i].course, l2[0][j].course);
        strcpy(l2[0][i].sub1, l2[0][j].sub1);
        strcpy(l2[0][i].sub2, l2[0][j].sub2);
        strcpy(l2[0][i].grade1, l2[0][j].grade1);
        strcpy(l2[0][i].grade2, l2[0][j].grade2);

        l2[0][j].roll = l2[0][51].roll;
        l2[0][j].sem = l2[0][51].sem;
        strcpy(l2[0][j].fullname, l2[0][51].fullname);
        strcpy(l2[0][j].course, l2[0][51].course);
        strcpy(l2[0][j].sub1, l2[0][51].sub1);
        strcpy(l2[0][j].grade1, l2[0][51].grade1);
        strcpy(l2[0][j].sub2, l2[0][51].sub2);
        strcpy(l2[0][j].grade2, l2[0][51].grade2);

      }
    }
  }
}

void Dynamic::update() {

  clrscr();
  int u;
  ed:
    clrscr();
  cout << "Enter The Roll No Of Student Which You Want To Update:";
  cin >> u;
  for (int z = 0; z < count; z++) {
    if (u == l2[0][z].roll) {
      up:

        cout << "================Update Menu==================\n\n\n Enter [R] For Roll No:" << l2[0][z].roll << "\nEnter [N] For Fullname:" << l2[0][z].fullname << "\nEnter [P] For Program:" << l2[0][z].course << "\nEnter [S] For Semester:" << l2[0][z].sem << "\nEnter [F] For Subject 1:" << l2[0][z].sub1 << "\nEnter [G] For Grade Of " << l2[0][z].sub1 << "\nEnter [B] For Subject 2:" << l2[0][z].sub2 << "\nEnter [T] For Grade Of " << l2[0][z].grade2;
      cout << "\n\nEnter Your Desire Input:";
      char o;
      o = getch();

      switch (o) {
      case 'r':
      case 'R':
        cout << "\nPlease Enter the New Roll No:";
        cin >> l2[0][z].roll;
        break;

      case 'n':
      case 'N':
        cout << "\nPlease Enter the New Fullname:";
        cin >> l2[0][z].fullname;
        break;

      case 'p':
      case 'P':
        cout << "\nPlease Enter the New Program:";
        cin >> l2[0][z].course;
        break;

      case 's':
      case 'S':
        cout << "\nPlease Enter the New Semester:";
        cin >> l2[0][z].sem;
        break;

      case 'f':
      case 'F':
        cout << "\nPlease Enter the New Subject 1:";
        cin >> l2[0][z].sub1;
        break;

      case 'g':
      case 'G':
        cout << "\nPlease Enter the New Grade:";
        cin >> l2[0][z].grade1;
        break;

      case 'b':
      case 'B':
        cout << "\nPlease Enter the New Subject 2:";
        cin >> l2[0][z].sub2;
        break;

      case 't':
      case 'T':
        cout << "\nPlease Enter the New Grade:";
        cin >> l2[0][z].grade2;
        break;

      default:
        goto up;
      }

    }

  }
  if (z == count - 1 && u != l2[0][z].roll) {
    cout << "\n\nWrong Input:" << u << endl;
    ip:
      cout << "Enter [M] To Go To Main Menu\n";
    cout << "Enter [I] Input Again\n";
    cout << "Choice:";
    char d;
    d = getch();
    switch (d) {
    case 'm':
    case 'M':
      return;

    case 'i':
    case 'I':
      goto ed;

    default:
      cout << "Wrong Input\nChoose The Correct Option";
      goto ip;
    }

  }
}

void main() {

  Dynamic o;
  man:
    clrscr();

  cout << "======================Student Information Recording System======================\n";
  cout << "\tEnter A: To Add A Student:-\n";
  cout << "\tEnter R: To Remove A Student:-\n";
  cout << "\tEnter S: To Show A Student Profile:-\n";
  cout << "\tEnter E: To Show All In Ascending Order:-\n";
  cout << "\tEnter D: To Show All In Descending Order:-\n";
  cout << "\tEnter U: To Update A Student Record:-\n";
  cout << "\tEnter Q: To Quit The Program:-\n";
  cout << "\tEnter The Desire Input=";
  char c;
  c = getch();

  switch (c) {
  case 'a':
  case 'A':
    o.set();
    getch();
    break;

  case 'r':
  case 'R':
    o.deleteValue();
    getch();
    break;

  case 's':
  case 'S':
    o.showValues();
    getch();
    break;

  case 'e':
  case 'E':
    o.showA();
    o.showAll();
    getch();
    break;

  case 'd':
  case 'D':
    o.showD();
    o.showAll();
    getch();
    break;

  case 'u':
  case 'U':
    o.update();
    break;

  case 'q':
  case 'Q':
    goto quit;

  default:
    cout << "Wrong Input.\nPress Any key To Input Again.";
    getch();
    goto man;

  }

  goto man;
  quit:
    cout << "Thanks";
  getch();

}

