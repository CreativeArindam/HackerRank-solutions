function balancedSums(arr) {
  let leftIndex = 0,
    rightIndex = arr.length - 1;
  let leftSum = arr[leftIndex],
    rightSum = arr[rightIndex];

  while (leftIndex != rightIndex) {
    if (leftSum < rightSum) {
      leftIndex += 1;
      leftSum += arr[leftIndex];
    } else {
      rightIndex -= 1;
      rightSum += arr[rightIndex];
    }
  }

  if (leftSum === rightSum) return "YES";
  return "NO";
}

// Contributed by Arindam Hazra
