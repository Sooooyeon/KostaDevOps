// function plus(a, b){
//   return a + b;
// }

// var result = plus(10,20);
// console.log(result);

// function Week(){
//   console.log('Mon');
//   console.log('Tue');
//   console.log('Wed');
//   return;
//   console.log('Thr');
// }

// Week();


// 함수 표현식

// 정적바인딩
function nickName(){
  console.log("별명");
}
nickName();

// 동적바인딩
var name = function(){
  console.log("이름");
}
name();

name = function(){
  console.log("이름2");
}
name();

var userName = nickName;
userName()