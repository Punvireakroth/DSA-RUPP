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
}

// let first = new Node("Hi");
// first.next = new Node("There");
// first.next.next = new Node("How");
// first.next.next.next = new Node("Are");
// first.next.next.next.next = new Node("You");
// console.log(first);
