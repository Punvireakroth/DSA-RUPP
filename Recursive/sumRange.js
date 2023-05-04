const sumRange = (num) => {
  if (num === 1) return 1;
  return num + sumRange(num - 1);
};

const answer = sumRange(4);
console.log(answer);
