class Node {
  constructor(val) {
    this.val = val; // value of node
    this.next = null; // reference to the next
  }
}

class SinglyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }
  // Push to the end of linked list
  push(val) {
    let newNode = new Node(val);
    // check if node is empty
    if (!this.head) {
      this.head = newNode;
      this.tail = this.head;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.length++;
    return this;
  }
}

let list = new SinglyLinkedList();

console.log(list.push(10));
console.log(list.push(20));
console.log(list.push(30));
