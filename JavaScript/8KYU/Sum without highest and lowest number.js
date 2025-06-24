function sumArray(array) {
  if (!Array.isArray(array) || array.length <= 1) {
    return 0;
  }
//   console.log(array)
//   array.sort((a, b) => a - b)).reduce((a, b), 0)
  const sorted = array.sort((a, b) => a - b);
  console.log("Sorted: " + sorted);
  
  const trimmed = sorted.slice(1, sorted.length - 1);
  const sum = trimmed.reduce((a, b) => a + b, 0);
  
  console.log("sum: " + sum, "trimmed: " + trimmed)
  return sum
  
}