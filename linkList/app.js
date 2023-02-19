class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  // function to create 10 links
  createLinks() {
    for (let i = 1; i <= 10; i++) {
      const newNode = new Node(i);

      if (this.head === null) {
        this.head = newNode;
      } else {
        let temp = this.head;
        while (temp.next !== null) {
          temp = temp.next;
        }
        temp.next = newNode;
      }
    }
  }

  // function to insert a link at a specific position
  insertLink(data, position) {
    const newNode = new Node(data);

    if (position === 1) {
      newNode.next = this.head;
      this.head = newNode;
      return;
    }

    let temp = this.head;
    for (let i = 1; i < position - 1 && temp !== null; i++) {
      temp = temp.next;
    }

    if (temp === null) {
      console.log("Invalid position, cannot insert link.");
      return;
    }

    newNode.next = temp.next;
    temp.next = newNode;
  }

  // function to print the value of each link using while
  printLinks() {
    let temp = this.head;
    while (temp !== null) {
      console.log(temp.data);
      temp = temp.next;
    }
  }

  // function to delete a link from a specific position
  deleteLink(position) {
    if (this.head === null) {
      console.log("List is empty, cannot delete link.");
      return;
    }

    let temp = this.head;
    let prev = null;

    if (position === 1) {
      this.head = temp.next;
      return;
    }

    for (let i = 1; i < position && temp !== null; i++) {
      prev = temp;
      temp = temp.next;
    }

    if (temp === null) {
      console.log("Invalid position, cannot delete link.");
      return;
    }

    prev.next = temp.next;
  }
}

// create a new LinkedList object
const myList = new LinkedList();

// create 10 links
myList.createLinks();

// insert a link at position 5
myList.insertLink(11, 5);

// print the value of each link
myList.printLinks();

// delete the link at position 3
myList.deleteLink(3);

// print the value of each link again
myList.printLinks();
