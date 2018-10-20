#include < iostream.h > #include < conio.h >
  const int capacity = 5;
class Stack {
  private:
    int stackTop;
    int element[capacity];
  public:
    Stack();
	~Stack();
  void push(int);
  void pop();
  int peak();
  int isEmpty();
  void displayStack();
};
Stack::Stack() {
  stackTop = -1;
}
int Stack::isEmpty() {
  return (stackTop == -1);
}
void Stack::push(int var) {
  if (stackTop < capacity - 1) {
    ++stackTop;
    element[stackTop] = var;
  } else {
    cout << "Stack is Empty";
  }
}
void Stack::pop() {
  if (!isEmpty()) {
    --stackTop;
  } else cout << "stack is empty\n";
}
int Stack::peak() {
  if (!isEmpty()) {
    return element[stackTop];
  } else {
    cout << "Stack is Empty\n";
  }
}

void Stack::displayStack() {
  for (int e = 0; e < stackTop; e++) {
    cout << element[e];
  }
}
int main() {
  clrscr();
  Stack object=new Stack();
  object.push(4);
  object.push(32);
  object.push(20);
  object.push(10);
  object.displayStack();
  object.pop();
  object.pop();
  object.peak();
  object.displayStack();
  getch();
}

