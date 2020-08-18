function reverseArray(a) {
  let startIndex = 0,
    endIndex = a.length - 1;
  while (startIndex < endIndex) {
    /*This three horrible lines of code just swaps two numbers */
    a[startIndex] = a[startIndex] ^ a[endIndex];
    a[endIndex] = a[startIndex] ^ a[endIndex];
    a[startIndex] = a[startIndex] ^ a[endIndex];

    startIndex++;
    endIndex--;
  }
  return a;
}

//Cotributed by Arindam Hazra
