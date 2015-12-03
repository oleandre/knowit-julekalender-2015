(function () {
  var array   = [...],
      profit  = 0,
      len     = array.length;
  
  for (int i = 0; i < len; i++) {
    current = array[i] + profit;
    for (int y = i; y < len; y++) if (current < array[y]) profit = array[i] - array[y];
  }
  
  console.log("Answer: " + profit);
})();
