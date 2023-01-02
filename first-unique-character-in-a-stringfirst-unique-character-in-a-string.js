function firstUniqueChar(s) {
  // convert string to a list
  s = s.split("");
  for (let i = 0; i < s.length; i++) {
    // remove first element from the array
    let toCheck = s.shift();
    // if element is not found (unique char)
    if (s.indexOf(toCheck) == -1) {
      // return the index of the unique char
      return i;
    } else {
      // place element at the end of the array
      s.push(toCheck);
    }
  }
  // if there are no unique chars
  return -1;
}
