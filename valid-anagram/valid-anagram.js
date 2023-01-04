function valid_anagram(s, t) {
  // convert each string to a list
  s = s.split("");
  t = t.split("");
  
  // sort each list
  s.sort();
  t.sort();
  
  // get lengths of both lists
  length1 = s.length;
  length2 = t.length;
  
  // if list are not equal
  if (length1 != length2) {
    return false;
  }
  
  // run through each list at same index
  for (let i = 0; i < length1; i++) {
    
    // if they have a diff char at same index
    if (s[i] != t[i]) {
      return false;
    }
  }
  return true;
}
