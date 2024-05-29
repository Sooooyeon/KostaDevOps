// function MyName(name : string){
//    console.log(name);
// } 
// MyName('park');
// let myname = 'lee';//타입스크립트의 데이터타입 추론
// myname = 'kim';
// let a = 5;
// a = 10;
// let student = {
//     name : 'lee',
//     course : 'node.js',
//     age : 20,
//     subject : function(){
//         console.log("typescript");
//     }
// }
// let str : string = "나는 아이언맨이다.";
// let studentId : number = 1234;
// let age : number = 20;
// let gender : string = "male";
// let completed : boolean = false;
function plus(a, b) {
    return a + b;
}
var GenderType;
(function (GenderType) {
    GenderType[GenderType["Male"] = 0] = "Male";
    GenderType[GenderType["Female"] = 1] = "Female";
    GenderType[GenderType["GenderNeutral"] = 2] = "GenderNeutral";
})(GenderType || (GenderType = {}));
function getInfo(id) {
    return {
        studentId: id,
        age: 20,
        // gender : GenderType.Female,
        gender: 'female',
        completed: true
    };
}
console.log(getInfo(5678));
// function greet(name : string, greeting? : string): string{
//     return 'hello';
// }
// greet('lee');
var std = {
    studentId: 1111,
    age: 30,
    // gender : GenderType.Male,
    gender: 'male',
    completed: true
};
function setInfo(student) {
}
// setInfo(std);
// class MyStudent implements Student{
//     studentId = 1111;
//     studentName = 'kim';
//     age =  40;
//     //gender = GenderType.Male;
//     gender = 'male';
//     completed =  true;
//     setName(name: string) : void {
//         this.studentName = name;
//         console.log('이름 변경 : ' + this.studentName);
//     }
// }
// const myInstance = new MyStudent();
// myInstance.setName('앨리스');
// any, unknow
// 타입 안정성
// let value : any; // 타입 안정성이 없다. (언제든 타입이 변경됨)
// value = 42;
// value = 'hello';
// value = true;
// let another : string;
// another = value;
// let value : unknown; // 타입 안정성이 있다.
// value = 42;
// value = 'hello';
// value = true;
// let another : string;
// another = value; // error
// unknown 타입의 변수에는 어떤 타입의 값도 들어갈 수 있지만, 
// 어떤 타입의 변수에 unknown 타입의 값은 들어갈 수 없다. 
// 열거형과 리터럴 
// 리터럴의 장점 : 코드의 가독성 향상, 타입가드 적용 가능
// 문자형 리터럴
// let st : 'success' | 'error';
// st = 'success';
// 숫자형 리터럴
// let speed : 50 | 100 | 200;
// speed = 100;
// speed = 150; // error
// 불리언 리터럴
// let isTrue : true;
// isTrue = false; // error
// 객체 리터럴
// let person : {name : 'kim', age : 30};
// person = {name : 'kim', age : 35}; // error 
// person = {name : 'kim', age : 30}; // 완벽하게 일치해야됨
// 객체의 데이터 타입
//  const user : { name : string, age: number} = {
//   name : 3, // error
//   age : 25
//  }
// any 타입 : 타입 추론을 포기
//  let anyVal : any = 100;
//  anyVal = '문자열';
//  anyVal = true;
// 유니온 타입 : 구조체, 공용체(union), 열거형, 클래스, 인터페이스
// let anyVal : number | string | boolean = 100;
// anyVal = '문자열';
// anyVal = true;
// 타입 별칭
// type strOrnum = number | string; 
// let numStr : strOrnum = '50';
// let item : number;
// function converToString(val : strOrnum) : string{
//   // 타입 가드 적용
//   if(typeof val === 'string'){
//     item = 0 ;
//   } else {
//     item = val;
//   }
//   return String(val);
// }
// function converToNumber(val : strOrnum) : number{
//   return Number(val);
// }
// console.log(converToString(numStr));
// console.log(converToNumber(numStr));
// numStr = 40;
// console.log(converToString(numStr));
// console.log(converToNumber(numStr));
// Array, Tuple 데이터 타입
// let numbers : number[] = [1,2,3,4,5];
// let fruits: string[] = ['apple', 'banana','orange'];
// for(let i = 0; i<numbers.length; i++){
//   console.log(numbers[i]);
// }
// for(let i = 0; i<fruits.length; i++){
//   console.log(fruits[i]);
// }
// let mixedArray : (number | string)[] = [1, 'two', 3, 'four'];
// for(let i = 0; i<mixedArray.length; i++){
//   console.log(mixedArray[i])
// }
// let readonly : ReadonlyArray<number> = [1,2,3];
// readonly[0] = 100;
// 기본배열
// let greeting :(number | string | boolean)[] = [1, 'hello', true];
// 튜플 : 고정된 길이와 타입을 갖는 배열, 요소의 타입과 순서 
// 튜플형 
// let greeting :[number,string,boolean] = [1, 'hello', true];
// for(let i = 0; i < greeting.length; i++){
//   console.log(greeting[i]);
// }
// let firstarr = [1,2,3];
// let secondarr = [4,5,6];
// let combinedArr = [...firstarr, ...secondarr];
// for(let i = 0; i<combinedArr.length; i++){
//   console.log(combinedArr[i]);
// }
// 회사 직원 정보
// let fullName : string;
// let age : number;
// let job : string;
// let pay : number;
// let printEmployee = (name : string, age : number, work : string, money:number):void => {
//   console.log('이름 : ' + name);
//   console.log('나이 : ' + age);
//   console.log('하는 일 : ' + work);
//   console.log('급여 : ' + money);
// }
//printEmployee('lee', 30, 'programmer',300);
var Employee = /** @class */ (function () {
    function Employee() {
        var _this = this;
        this.printEmployee = function () {
            console.log('이름 : ' + _this.fullName);
            console.log('나이 : ' + _this.age);
            console.log('하는 일 : ' + _this.job);
            console.log('급여 : ' + _this.pay);
        };
    }
    return Employee;
}());
var employee = new Employee();
employee.printEmployee();
