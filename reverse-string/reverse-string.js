var reverseString = function(s) {
    let length = s.length;
  let half = Math.floor(length / 2);
  for (let i = 0; i <= half; i++) {
    [s[i], s[length]] = [s[length], s[i]];
    length--;
  }
};
