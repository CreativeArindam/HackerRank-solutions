function countApplesAndOranges(s, t, a, b, apples, oranges) {
  //Counting the apples
  let appleCount = 0;
  for (let i = 0; i < apples.length; i++) {
    if (apples[i] + a >= s && apples[i] + a <= t) appleCount++;
  }
  console.log(appleCount);

  //Counting the oranges
  let orangeCount = 0;
  for (let i = 0; i < oranges.length; i++) {
    if (oranges[i] + b >= s && oranges[i] + b <= t) orangeCount++;
  }
  console.log(orangeCount);
}

//Contributed by Arindam Hazra
