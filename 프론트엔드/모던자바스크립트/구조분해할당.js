// 비구조화 할당 (구조분해할당)
//const color = ['red', 'green', 'blue'];

// let r = color[0];
// let g = color[1];
// let b = color[2];

// let [r, g, b] = color; // 배열의 구조분해
// console.log(r);
// console.log(g);
// console.log(b);

// [b, g, r] = [r, g, b];

// console.log(r);
// console.log(g);
// console.log(b);

// const [a, b, c] = ["C#", "javascript", "python"];
// const [a, b, c = "python"] = ["C#", "javascript"];
// const [a, , c, d] = ["C#", "javascript", "python", "react"];


// console.log(a);
// // console.log(b);
// console.log(c);
// console.log(d);


// 배열의 나머지 요소 가져오기 ...
// 스프레드 연산자 사용이유 : 원본 보존
// ...을 사용하면 새로운 메모리를 생성해서 카피본을 만들어 사용

// const [a, b, ...rest] = ["C#", "javascript", "python", "react", "C++"];

// console.log(a);
// console.log(b);
// console.log(rest.length);
// console.log(rest[0]);
// console.log(rest[1]);
// console.log(rest[2]);

// const arr1 = ['C#','javascript'];
// const arr2 = ['python','react','C++'];
// const arr3 = [...arr1, ...arr2];

// console.log(arr3);


// let {a, b} = {a: 값1, b: 값2};

let user = {
  id : 'jamsu',
  //pw : '1234',
  name : 'lch',
  age : 20
};

// let {id = 'guest', pw = '1111', name, age} = user;

// let id = user.id;
// let pw = user.pw;

let {id, ...rest} = user;
// let {id, pw, name, age} = {id : 'jamsu', pw : '1234', name : 'lch', age : 20 };

console.log(id);
console.log(rest.pw);
console.log(rest.name);
console.log(rest.age);