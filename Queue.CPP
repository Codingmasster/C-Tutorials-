#include < iostream.h > #include < conio.h >
  class Queue {
    private:
      class Node {
        public:
          Node * next;
        int info;
      };
    Node * head, * tail;
    int count;
    public:
      void enQueue(int);
    void deQueue();
    void destroy();
    int front();
    int isEmpty();
    void showQueue();
    Queue();
    ~Queue();
  };

Queue::Queue() {
  head = 0;
  tail = 0;
  count = 0;
}

Queue::~Queue() {
  destroy();
}
void Queue::enQueue(int val) {
  Node * temp;
  temp = new Node;
  temp - > info = val;
  temp - > next = 0;
  if (isEmpty()) {
    head = temp;
    tail = temp;
    count++;
  } else {
    tail - > next = temp;
    tail = temp;
    count++;
  }
}

void Queue::deQueue() {
  if (!isEmpty()) {
    Node * temp;
    temp = head;
    head = head - > next;
    delete temp;
  } else {
    cout << "list is empty";
  }
}

void Queue::destroy() {
  if (!isEmpty()) {
    Node * temp;
    while (temp != 0) {
      temp = head;
      head = head - > next;
      delete temp;

    }
  } else {
    cout << "list is empty\n";
  }
}
int Queue::isEmpty() {
  return (head == 0);
}

int Queue::front() {
  cout << head - > info;
}

void Queue::showQueue() {
  if (!isEmpty()) {
    Node * temp;
    temp = head;
    while (temp != 0) {
      cout << "  ";
      cout << temp - > info;
      temp = temp - > next;
    }
  } else {
    cout << "List Is Empty";
  }
}

void main() {
  clrscr();
  Queue a;
  int val;
  char input;
  again:
    clrscr();
  cout << "Enter [A] To Add A Value" << endl;
  cout << "Enter [R] To Delete The Value" << endl;
  cout << "Enter [F] To Show The Front Value" << endl;
  cout << "Enter [D] To Destroy List" << endl;
  cout << "Enter [S] To Show All Values" << endl;
  cout << "Enter [E] To Exit" << endl;
  cout << "Enter Your Desire Input=";
  cin >> input;
  switch (input) {
  case 'a':
  case 'A':
    cout << "Enter The Value=";
    cin >> val;
    a.enQueue(val);
    break;

  case 'r':
  case 'R':
    cout << "Removing Value\n";
    a.deQueue();
    break;

  case 'f':
  case 'F':
    cout << "Showing Front Value=";
    a.front();
    break;

  case 'd':
  case 'D':
    cout << "List Is Going To Destroy\n";
    a.destroy();
    break;

  case 's':
  case 'S':
    cout << "Showing All Values\n";
    a.showQueue();
    break;

  case 'e':
  case 'E':
    cout << "Exiting";
    getch();
    goto ex;
    break;

  default:
    cout << "\nWrong Input..!" << endl << "Press Any Key To Input Again";
    getch();
    goto again;
  }
  cout << "\nPress Any key To Input Again:";
  getch();
  goto again;
  ex:
}

