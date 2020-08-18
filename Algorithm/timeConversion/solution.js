function timeConversion(s) {
  let amOrPm = s.slice(8, 10);
  let hr = parseInt(s.slice(0, 2));
  if (amOrPm == "AM") {
    if (hr == 12) {
      hr = 0;
    }
  } else {
    if (hr != 12) hr = parseInt(s.slice(0, 2)) + 12;
  }
  if (hr < 10) return "0" + hr + s.slice(2, 8);
  return hr + s.slice(2, 8);
}

// Contributed By Arindam Hazra
