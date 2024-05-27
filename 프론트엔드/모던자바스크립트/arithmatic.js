// console.log('긴급 출동' + 119); 
// console.log(+"1024"+1); //1025
// console.log(+true); // 1
// console.log(+false); // 0
// console.log('10'-2); // 8

// // +=, -=, +=, /= 복합할당연산자

// var a = 3;
// a = a + 2;
// console.log(a);

// // a++, ++a

// // 일치연산자, 동등연산자
// var size1 = 1024;
// var size2 = "1024";

// console.log(size1 == size2);
// console.log(size1 === size2);



// console.log(300 > '200'); // true
// console.log('10' > 9); // true
// console.log(true == 1); // true
// console.log(true == '1'); // true
// console.log(false == 1); // false



// // null, undefined
// console.log(null == undefined); // true


// 조건부 연산자
// 조건 ? value1 : value2;
// var age = 15;
// var result = age >= 19 ? "성인입니다." : "미성년자입니다.";
// console.log(result);


// 논리 연산자
// &&, ||, !
// console.log(true && true); // true
// console.log(true && false); // false
// console.log(false && false); // false
// console.log(true || true); // true
// console.log(true || false); // true
// console.log(false || false); // false

// var id = "test";
// var pw = "1234";

// var result = (id == "test" && pw == "1234") ? "로그인 성공" : "로그인 실패";
// console.log(result);


// var age = 30;
// var result = (age > 65 || age < 7) ? "지원 대상입니다." : "지원 대상이 아닙니다.";
// console.log(result);

// console.log(!false);
// console.log(!true);
// console.log(!"text");
// console.log(!0);



// nullish 병합연산자 "??" : 유효성 체크
var id = "test";
var pw = "1234";

// var result = (id !== null && id !== undefined) ? "아이디가 입력되었습니다." : "아이디가 입력되지 않았습니다.";

// 위의 코드와 같은 의미(id가 null도 아니고, undefined도 아니다.)
var result = (id ?? null) ? "아이디가 입력되었습니다." : "아이디가 입력되지 않았습니다.";
console.log(result);


// 연산자 우선순위 : + , - , && , || , < > , () , [] , {}