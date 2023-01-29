// Name: Pun VireakRoth
// Prepare for: Dr.Srun Sovila
// Insertion Sort

// Function for Generate array
function generateArray(length) {
  let array = [];
  for (let i = 0; i < length; i++) {
    array.push(Math.floor(Math.random() * 100));
  }
  return array;
}

// generate an array
let arr = generateArray(10);

// print the unsorted array
console.log("----------------------------------------------");

console.log(`Unsorted Array ${arr}`);

console.log("----------------------------------------------");

// Function for ascending sort using insertion sort
function ascendingInsertionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    let key = arr[i];
    let j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  return arr;
}

// Function for sort decending Array
function descendingInsertionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    let key = arr[i];
    let j = i - 1;
    while (j >= 0 && arr[j] < key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  return arr;
}

// print the sorted array Ascending
console.log(`Ascending Sort ${ascendingInsertionSort(arr)}`);

console.log("----------------------------------------------");

// print the sorted array Descending
console.log(`Descending Sort ${descendingInsertionSort(arr)}`);
