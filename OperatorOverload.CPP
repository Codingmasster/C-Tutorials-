#include < iostream.h > #include < conio.h >
  class array {
    friend istream & operator >> (istream & , array & )
    friend ostream & operator << (ostream & , array & )
    int size, * ptr;
    public:
      array(int);
    array(const array & );
    ~array();
    array operator = (array & );
    array operator / (array & );
    array operator + (array & );
    array operator * (array & );
    array operator - (array & );
    void cardnality(array);
    void operator == (array & );
    void function (array, array);
  };
void array::operator == (array & d) {
  if (size != d.size)
    cout << "SETS ARE NOT EQUAL\n";
  else {
    int c = 0;
    for (int i = 0; i < size; i++) {
      if (ptr[i] == d.ptr[i]) {
        c++;
      }
      if (c == size) {
        cout << "SETS ARE EQUAL\n";
      } else {
        cout << "SETS ARE NOT EQUAL";
      }
    }
  }
}

array array::operator * (array & a) {
  cout << "\nPRODUCT\n[";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < a.size; j++) {
      cout << " (" << ptr[i] << "," << a.ptr[j] << ")";
    }
  }
  cout << "]";
  return 0;
}

array array::operator / (array & a) {
  int i, j;
  cout << "\nINTERSECTION={";
  for (i = 0; i < a.size; i++) {
    for (j = 0; j < size; j++) {
      if (ptr[i] == a.ptr[j]) {
        cout << ptr[i] << ",";
      }
    }
  }
  cout << "}";
  return 0;
}

array array::operator + (array & a) {
  int c = 0;
  cout << "\n\UNION ={";

  for (int i = 0; i < size; i++) {
    cout << ptr[i] << ",";
  }

  for (i = 0; i < a.size; i++) {
    for (int j = 0; j < size; j++) {
      if (ptr[j] == a.ptr[i]) {
        c = c + 1;
      }
    }

    if (c == 0) {
      cout << a.ptr[i] << ",";
    }
    c = 0;
  }
  cout << "}";
  return 0;
}
istream & operator >> (istream & input, array & a) {
  go: int y;
  cout << "ENTER SIZE OF ARRAY :";

  input >> a.size;
  if (a.size <= 0) {
    cout << "\nerror in size enter again";
    goto go;
  }
  a.ptr = new int[a.size];
  cout << "ENTER ELEMENTS OF ARRAY :";
  for (int i = 0; i < a.size; i++) {
    er: input >> a.ptr[i];
    if (i != 0) {
      y = i - 1;
      for (y; y >= 0; y--) {
        if (a.ptr[i] == a.ptr[y]) {
          cout << "wrong input please enter again";
          goto er;
        }
      }
    }
  }
  return input;
}
ostream & operator << (ostream & output, array & a) {
  for (int i = 0; i < a.size; i++) {
    output << a.ptr[i] << " ";
  }
  return output;
}

array::array(int a) {
  size = a;
  ptr = new int[size];
  for (int i = 0; i < size; i++)
    ptr[i] = i;

}
array::~array() {
  {
    delete[] ptr;
    ptr = 0;
  }
}
array::array(const array & a) {
  if (this == & a || & a == 0)
    size = a.size;

  ptr = new int[size];

  for (int i = 0; i < size; i++) {
    ptr[i] = a.ptr[i];
  }
}
array array::operator = (array & c) {
  if (this == & c || & c == 0)
    delete[] ptr;
  ptr = 0;
  size = c.size;
  ptr = new int[size];
  for (int i = 0; i < size; i++) {
    ptr[i] = c.ptr[i];
  }
  return *this;
}
array array::operator - (array & a) {
  int c = 0;
  cout << "\na-b ={";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < a.size; j++) {
      if (ptr[i] == a.ptr[j]) {
        c = c + 1;
      }
    }
    if (c == 0) {
      cout << ptr[i] << ",";
    }

    c = 0;
  }
  cout << "}";
  return 0;
}
void array::cardnality(array b) {
  cout << "CARDNALITY OF SET A=" << size << endl;
}

class array1 {
  friend istream & operator >> (istream & , array1 & )
  friend ostream & operator << (ostream & , array1 & )
  int size;
  float * ptr;
  public:
    array1(int);
  array1(const array1 & );
  ~array1();
  array1 operator = (array1 & );
  array1 operator / (array1 & );
  array1 operator + (array1 & );
  array1 operator * (array1 & );
  array1 operator - (array1 & );
  void cardnality(array1);
  void operator == (array1 & );
  void
  function (array1, array1);
};
void array1::operator == (array1 & d) {
  if (size != d.size)
    cout << "SETS ARE NOT EQUAL\n";
  else {
    int c = 0;
    for (int i = 0; i < size; i++) {
      if (ptr[i] == d.ptr[i]) {
        c++;
      }
      if (c == size) {
        cout << "SETS ARE EQUAL\n";
      } else {
        cout << "SETS ARE NOT EQUAL";
      }
    }
  }
}

array1 array1::operator * (array1 & a) {
  cout << "\nPRODUCT\n[";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < a.size; j++) {
      cout << " (" << ptr[i] << "," << a.ptr[j] << ")";
    }
  }
  cout << "]";
  return 0;
}

array1 array1::operator / (array1 & a) {
  int i, j;
  cout << "\nINTERSECTION={";
  for (i = 0; i < a.size; i++) {
    for (j = 0; j < size; j++) {
      if (ptr[i] == a.ptr[j]) {
        cout << ptr[i] << ",";
      }
    }
  }
  cout << "}";
  return 0;
}

array1 array1::operator + (array1 & a) {
  int c = 0;
  cout << "\n\UNION ={";

  for (int i = 0; i < size; i++) {
    cout << ptr[i] << ",";
  }

  for (i = 0; i < a.size; i++) {
    for (int j = 0; j < size; j++) {
      if (ptr[j] == a.ptr[i]) {
        c = c + 1;
      }
    }

    if (c == 0) {
      cout << a.ptr[i] << ",";
    }
    c = 0;
  }
  cout << "}";
  return 0;
}
istream & operator >> (istream & input, array1 & a) {
  go: int y;
  cout << "ENTER SIZE OF ARRAY :";

  input >> a.size;
  if (a.size <= 0) {
    cout << "\nerror in size enter again";
    goto go;
  }
  a.ptr = new float[a.size];
  cout << "ENTER ELEMENTS OF ARRAY :";
  for (int i = 0; i < a.size; i++) {
    er: input >> a.ptr[i];
    if (i != 0) {
      y = i - 1;
      for (y; y >= 0; y--) {
        if (a.ptr[i] == a.ptr[y]) {
          cout << "wrong input please enter again";
          goto er;
        }
      }
    }
  }
  return input;
}
ostream & operator << (ostream & output, array1 & a) {
  for (int i = 0; i < a.size; i++) {
    output << a.ptr[i] << " ";
  }
  return output;
}

array1::array1(int a) {
  size = a;
  ptr = new float[size];
  for (int i = 0; i < size; i++)
    ptr[i] = i;

}
array1::~array1() {
  {
    delete[] ptr;
    ptr = 0;
  }
}
array1::array1(const array1 & a) {
  if (this == & a || & a == 0)
    size = a.size;

  ptr = new float[size];

  for (int i = 0; i < size; i++) {
    ptr[i] = a.ptr[i];
  }
}
array1 array1::operator = (array1 & c) {
  if (this == & c || & c == 0)
    delete[] ptr;
  ptr = 0;
  size = c.size;
  ptr = new float[size];
  for (int i = 0; i < size; i++) {
    ptr[i] = c.ptr[i];
  }
  return *this;
}
array1 array1::operator - (array1 & a) {
  int c = 0;
  cout << "\na-b ={";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < a.size; j++) {
      if (ptr[i] == a.ptr[j]) {
        c = c + 1;
      }
    }
    if (c == 0) {
      cout << ptr[i] << ",";
    }

    c = 0;
  }
  cout << "}";
  return 0;
}
void array1::cardnality(array1 b) {
  cout << "CARDNALITY OF SET A=" << size << endl;
}

class array2 {
  friend istream & operator >> (istream & , array2 & )
  friend ostream & operator << (ostream & , array2 & )
  int size;
  char * ptr;
  public:
    array2(int);
  array2(const array2 & );
  ~array2();
  array2 operator = (array2 & );
  array2 operator / (array2 & );
  array2 operator + (array2 & );
  array2 operator * (array2 & );
  array2 operator - (array2 & );
  void cardnality(array2);
  void operator == (array2 & );
  void
  function (array2, array2);
};
void array2::operator == (array2 & d) {
  if (size != d.size)
    cout << "SETS ARE NOT EQUAL\n";
  else {
    int c = 0;
    for (int i = 0; i < size; i++) {
      if (ptr[i] == d.ptr[i]) {
        c++;
      }
      if (c == size) {
        cout << "SETS ARE EQUAL\n";
      } else {
        cout << "SETS ARE NOT EQUAL";
      }
    }
  }
}

array2 array2::operator * (array2 & a) {
  cout << "\nPRODUCT\n[";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < a.size; j++) {
      cout << " (" << ptr[i] << "," << a.ptr[j] << ")";
    }
  }
  cout << "]";
  return 0;
}

array2 array2::operator / (array2 & a) {
  int i, j;
  cout << "\nINTERSECTION={";
  for (i = 0; i < a.size; i++) {
    for (j = 0; j < size; j++) {
      if (ptr[i] == a.ptr[j]) {
        cout << ptr[i] << ",";
      }
    }
  }
  cout << "}";
  return 0;
}

array2 array2::operator + (array2 & a) {
  int c = 0;
  cout << "\n\UNION ={";

  for (int i = 0; i < size; i++) {
    cout << ptr[i] << ",";
  }

  for (i = 0; i < a.size; i++) {
    for (int j = 0; j < size; j++) {
      if (ptr[j] == a.ptr[i]) {
        c = c + 1;
      }
    }

    if (c == 0) {
      cout << a.ptr[i] << ",";
    }
    c = 0;
  }
  cout << "}";
  return 0;
}
istream & operator >> (istream & input, array2 & a) {
  go: int y;
  cout << "ENTER SIZE OF ARRAY :";

  input >> a.size;
  if (a.size <= 0) {
    cout << "\nerror in size enter again";
    goto go;
  }
  a.ptr = new char[a.size];
  cout << "ENTER ELEMENTS OF ARRAY :";
  for (int i = 0; i < a.size; i++) {
    er: input >> a.ptr[i];
    if (i != 0) {
      y = i - 1;
      for (y; y >= 0; y--) {
        if (a.ptr[i] == a.ptr[y]) {
          cout << "wrong input please enter again";
          goto er;
        }
      }
    }
  }
  return input;
}
ostream & operator << (ostream & output, array2 & a) {
  for (int i = 0; i < a.size; i++) {
    output << a.ptr[i] << " ";
  }
  return output;
}

array2::array2(int a) {
  size = a;
  ptr = new char[size];
  for (int i = 0; i < size; i++)
    ptr[i] = i;

}
array2::~array2() {
  {
    delete[] ptr;
    ptr = 0;
  }
}
array2::array2(const array2 & a) {
  if (this == & a || & a == 0)
    size = a.size;

  ptr = new char[size];

  for (int i = 0; i < size; i++) {
    ptr[i] = a.ptr[i];
  }
}
array2 array2::operator = (array2 & c) {
  if (this == & c || & c == 0)
    delete[] ptr;
  ptr = 0;
  size = c.size;
  ptr = new char[size];
  for (int i = 0; i < size; i++) {
    ptr[i] = c.ptr[i];
  }
  return *this;
}
array2 array2::operator - (array2 & a) {
  int c = 0;
  cout << "\na-b ={";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < a.size; j++) {
      if (ptr[i] == a.ptr[j]) {
        c = c + 1;
      }
    }
    if (c == 0) {
      cout << ptr[i] << ",";
    }

    c = 0;
  }
  cout << "}";
  return 0;
}
void array2::cardnality(array2 b) {
  cout << "CARDNALITY OF SET A=" << size << endl;
}
void array:: function (array a, array b) {
  cin >> a;
  cin >> b;
  cout << "SET a={";
  cout << a << " ";
  cout << "}\n";
  cout << "SET b={";
  cout << b << " ";
  cout << "}\n";
  char j;
  dj:
    cout << "FOR ASSIGNMENT OF SET B TO SET A ENTER (A)\n";
  cout << "FOR CARDANALITY OF SET A ENTER (C)\n";
  cout << "FOR CARTIESEN PRODUCT ENTER (P)\n";
  cout << "FOR INTERSECTION ENTER (I)\n";
  cout << "FOR UNION ENTER (U)\n";
  cout << "FOR EQUALITY OF SET ENTER (E)\n";
  cout << "FOR DIFFERENCE ENTER (D)\n";
  cin >> j;
  switch (j) {
  case 'c':
    a.cardnality(b);
    break;
  case 'p':
    a * b;
    break;
  case 'i':
    a / b;
    break;
  case 'u':
    a + b;
    break;
  case 'e':
    a == b;
    break;
  case 'd':
    a - b;
    break;
  case 'a':
    a = b;
    cout << a;
    break;
  default:
    cout << "Wrong input\n";
    goto dj;
  }
}

void array1:: function (array1 c, array1 d) {
  cin >> c;
  cin >> d;
  cout << "SET C={";
  cout << c << " ";
  cout << "}\n";
  cout << "SET D={";
  cout << d << " ";
  cout << "}\n";

  char g;
  dp:
    cout << "FOR ASSIGNMENT OF SET B TO SET A ENTER (A)\n";
  cout << "FOR CARDANALITY OF SET A ENTER (C)\n";
  cout << "FOR CARTIESEN PRODUCT ENTER (P)\n";
  cout << "FOR INTERSECTION ENTER (I)\n";
  cout << "FOR UNION ENTER (U)\n";
  cout << "FOR EQUALITY OF SET ENTER (E)\n";
  cout << "FOR DIFFERENCE ENTER (D)\n";
  cin >> g;
  switch (g) {
  case 'c':
    c.cardnality(d);
    break;
  case 'p':
    c * d;
    break;
  case 'i':
    c / d;
    break;
  case 'u':
    c + d;
    break;
  case 'e':
    c == d;
    break;
  case 'd':
    c - d;
    break;
  case 'a':
    c = d;
    cout << c;
    break;
  default:
    cout << "Wrong input\n";
    goto dp;
  }
}
void array2:: function (array2 e, array2 f) {
  cin >> e;
  cin >> f;
  cout << "SET E={";
  cout << e << " ";
  cout << "}\n";
  cout << "SET F={";
  cout << f << " ";
  cout << "}\n";
  char h;
  dh:
    cout << "FOR ASSIGNMENT OF SET B TO SET A ENTER (A)\n";
  cout << "FOR CARDANALITY OF SET A ENTER (C)\n";
  cout << "FOR CARTIESEN PRODUCT ENTER (P)\n";
  cout << "FOR INTERSECTION ENTER (I)\n";
  cout << "FOR UNION ENTER (U)\n";
  cout << "FOR EQUALITY OF SET ENTER (E)\n";
  cout << "FOR DIFFERENCE ENTER (D)\n";
  cin >> h;
  switch (h) {
  case 'c':
    e.cardnality(f);
    break;
  case 'p':
    e * f;
    break;
  case 'i':
    e / f;
    break;
  case 'u':
    e + f;
    break;
  case 'e':
    e == f;
    break;
  case 'd':
    e - f;
    break;
  case 'a':
    e = f;
    cout << e;
    break;
  default:
    cout << "Wrong input\n";
    goto dh;
  }
}

int main() {
  q: cout << "For Integer Set Enter (I)\n" << "For Chracter Set Enter (C)\n" << "For Float Set Enter (F)\n";
  char r;
  cin >> r;
  switch (r) {
  case 'i':
    {
      array a(3),
      b(3),
      a1(2);
      a1.function(a, b);
    }
    break;
  case 'f':
    {
      array1 c(4),
      d(4),
      c1(2);
      c1.function(c, d);
    }
    break;
  case 'c':
    {
      array2 e(5),
      f(5),
      e1(2);
      e1.function(e, f);
    }
    break;
  default:
    cout << "Wrong input";
    goto q;
  }
  getch();
}

