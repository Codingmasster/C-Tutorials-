#include < iostream.h > #include < conio.h >
  class smartArray {
    private:
      int * ptr;
      int size;
    public:
      smartArray(int);
     ~smartArray();

    void showarray() const;
    smartArray(const smartArray & );
    void utilityfunction(const smartArray & );
    smartArray operator = (const smartArray & );
  };

void smartArray::utilityfunction(const smartArray & temp) {
  size = temp.size;
  ptr = new int[size];
  for (int i = 0; i < size; i++)
    ptr[i] = temp.ptr[i];
}
smartArray smartArray::operator = (const smartArray & temp) {
  if (this == & temp || temp.ptr == 0)
    return 0;
  delete[] ptr;
  ptr = 0;
  utilityfunction(temp);
  return *this;
}
smartArray smartArray::operator = (const smartArray & temp) {
  if (this == & temp || temp.ptr == 0)
    return 0;
  delete[] ptr;
  ptr = 0;
  utilityfunction(temp);
  return *this;
}
smartArray::smartArray(const smartArray & temp) {
  utilityfunction(temp);
}
smartArray::smartArray(int s) {
  cout << "constructor called\n";
  size = s;
  ptr = new int[size];
  for (int i = 0; i < size; i++) {
    ptr[i] = i;
  }
}
smartArray::~smartArray() {
  delete[] ptr;
  cout << "destructor called";
}
void smartArray::showarray() const {
  for (int i = 0; i < size; i++) {
    cout << ptr[i];
  }
  cout << "\n";
}

int main() {
  clrscr();
  smartArray a1(5);
  a1.showarray(); {
    smartArray a2(10);
    a2 = a1;
    a2.showarray();
    smartArray a3 = a1;
    a3.showarray();
    smartArray a4(a1);
    a4.showarray();
  }
  a1.showarray();

  getch();
  return 0;
}
