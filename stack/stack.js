class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.first = null;
    this.last = null;
    this.size = 0;
  }
  // method for pushing items to the stack
  push(val) {
    let newNode = new Node(val);
    // if there no node in stack set that first and last to that newNode Variable
    if (!this.first) {
      this.first = newNode;
      this.last = newNode;
    }
    // If there is at least one node in the stack store current first property on the stack
    else {
      let temp = this.first;
      this.first = newNode;
      this.first.next = temp;
    }
    return ++this.size;
  }
  pop() {
    if (!this.first) {
      return null;
    }
    let temp = this.first;

    if (this.first === this.last) {
      this.last = null;
    }
    this.first = this.first.next;
    this.size--;
    return temp.value;
  }
}

let stack = new Stack();
console.log(stack.push(7));
console.log(stack.push(7));
console.log(stack.push(7));
console.log(stack.pop(7));
