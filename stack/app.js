class Stack {
  // initialize a stack
  constructor(size) {
    this.arr = Array(size); // array to store the elements in the stack
    this.top = -1; // Keeps track of the index of the last element in the stack
    this.capacity = size; // max size stack can hold
  }

  // Method to insert an element into the stack
  push(x) {
    if (this.isFull()) {
      console.log("Stack OverFlow");
      return;
    }
    console.log(`Inserting ${x}`);
    this.arr[++this.top] = x; // Increment top and insert the element
  }

  // Method to remove an element from the stack
  pop() {
    if (this.isEmpty()) {
      console.log("Stack is Empty");
      return -1;
    }
    return this.arr[this.top--]; // Decrement top and return the element
  }

  // Method to check if the stack is empty
  isEmpty() {
    return this.top === -1;
  }

  // Method to check if the stack is full
  isFull() {
    return this.top === this.capacity - 1;
  }

  // Method to check the size of the stack
  size() {
    return this.top + 1;
  }

  // Method to make the stack empty
  clear() {
    this.top = -1;
  }

  // Method to get the value of the last/top element in the stack
  peek() {
    return this.arr[this.top];
  }

  // Method to print all elements in the stack
  printStack() {
    for (let i = 0; i <= this.top; i++) {
      console.log(this.arr[i]);
    }
  }
}

const stack = new Stack(5);

stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);

console.log(`Top Element: ${stack.peek()}`);
console.log(`Size of Stack: ${stack.size()}`);

stack.pop();
console.log("\nAfter popping out");

stack.printStack();

stack.clear();
console.log("\nAfter clearing the stack");

stack.printStack();
