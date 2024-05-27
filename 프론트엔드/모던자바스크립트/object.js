// 객체 생성 방법

// let num = 100;
// const user = "이름";
// let obj1 = new Object();
// const obj2 = new Object();

// 객체의 구성 : 키, 값 사전
// boy : "소년", girl : "소녀"

// let dic = new Object();

// dic.boy = "소년";
// dic.girl = "소녀";
// dic.friend = "친구";

// console.log(dic.boy);
// console.log(dic.girl);
// console.log(dic.friend);



// 객체 리터럴
// const obj = {
//   boy : "소년", // 프로퍼티(속성)
//   girl : "소녀",
//   friend : "친구",
//   present : "현재"
// }

// const readline = require('readline');

// const rl = readline.createInterface({
//   input : process.stdin,
//   output : process.stdout,
// });

// rl.question('찾을 단어를 입력해주세요 : ', function(key){
//   let word = key;
//   console.log(obj[word]);

//   rl.close();
// })

// 객체["키"]
// console.log(obj["boy"]);
// console.log(obj["girl"]);
// console.log(obj["friend"]);
// console.log(obj["present"]);

// 객체.키
// console.log(obj.boy);
// console.log(obj.girl);
// console.log(obj.friend);
// console.log(obj.present);

// obj.apple = "사과";
// obj.ten = 10;

// console.log(obj.apple);
// console.log(obj.ten);

// // delete 키워드로 객체 키,값 삭제 가능
// delete obj.girl;
// console.log(obj.girl);

// obj = {}; // error
// console.log(obj.present);

// obj.present = "선물";
// console.log(obj.present);


// 객체의 프로퍼티와 메소드

// const unit = {
//   // attack : function(weapon){
//   //   return `${weapon}으로 공격한다.`;
//   // },
//   attack(weapon){
//     return `${weapon}으로 공격한다.`;
//   },
  
// };

// console.log(unit.attack("총"));
// console.log(unit.attack("주먹"));


// 단축 프로퍼티 : 객체의 프로퍼티 키와 값의 이르이 같은 경우
// let id = 'jamsu';
// let pw = '1111';

// let user = {
//   // id : id,
//   // pw : pw
//   id,
//   pw
// }

// console.log(user.id)
// console.log(user.pw)


// for in 문
// 사용이유 : 객체 안의 값이 어떤 유형인지 알 수 없어서

let user = {
  id : "yeon",
  pw : 1234,
  name : "soo",
  moblie : "010",
  contry : "대한민국"
}
for(let info in user){
  console.log(`${info} : ${user[info]}`);
}