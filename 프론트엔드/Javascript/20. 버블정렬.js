function bubbleSortString(str) {
  //let arr = str.split(''); // 문자열을 문자 배열로 변환
  let n = arr.length;

  for (let i = 0; i < n - 1; i++) {
      for (let j = 0; j < n - i - 1; j++) {
          if (str[j] > str[j + 1]) {
              // 두 문자를 비교하여 필요한 경우 위치를 교환
              let temp = str[j];
              str[j] = str[j + 1];
              str[j + 1] = temp;
          }
      }
  }

  //return arr.join(''); // 문자 배열을 다시 문자열로 합침
  return str;
}

// 예제 문자열
let str = "javascript";
let arr = new Array(...'javascript');
let arr2 = new Array("j","a","v","a","s","c","r","i");
console.log("정렬 전 문자열:", arr2);

// 문자열 버블 정렬 실행
let sortedStr = bubbleSortString(arr2);
console.log("정렬 후 문자열:", sortedStr);
