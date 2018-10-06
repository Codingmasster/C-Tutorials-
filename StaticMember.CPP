#include < iostream.h > #include < conio.h >
  class Rectangle {
    private:
      float length;
    float width;
    float area;
    static int objectcount;
    public:
      void setvalues(float, float);
    void showvalues();
    Rectangle(float l = 0.0, float w = 0.0);
    ~Rectangle();
    static int get_objectcount();
  };
void Rectangle::setvalues(float l, float w) {
  length = l;
  width = w;
  area = length * width;
}
void Rectangle::showvalues() {
  cout << "length" << length << "\t";
  cout << "width" << width << "\t";
  cout << "area" << area << "\t";
}
Rectangle::Rectangle(float l, float w) {
  cout << "constructor called" << endl;
  setvalues(l, w);
  objectcount++;
}
Rectangle::~Rectangle() {
  cout << "destructor called" << endl;
  objectcount--;
}
int Rectangle::objectcount = 0;
int Rectangle::get_objectcount() {
  cout << objectcount << endl;
}
int main() {
  clrscr();
  Rectangle::get_objectcount();
  Rectangle o1, o2(2.3, 4.5), o3(4.5, 6.7);
  o1.showvalues(); {
    o2.showvalues();

    o3.showvalues();
  }
  Rectangle::get_objectcount();
  getch();
}
