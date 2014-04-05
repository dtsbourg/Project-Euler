function isPrime(num) {
  for (var i = 2; i < num; i++) {
    if(num % i === 0) {
      return false;
    }
  }
  return true;
}

var n = 600851475143;

for (var j=2; j < n; j++){
  if (n % j === 0 && isPrime(j)){
    x = j;
  }
}

console.log(x);
