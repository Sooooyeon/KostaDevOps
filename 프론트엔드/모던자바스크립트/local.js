// function account(){
//   console.log('account 함수 진입');
//   var savedUser = '철수';
//   account2()
//   console.log('account 함수 탈출');
// }

// function account2(){
//   console.log('account2 함수 진입');
//   var savedUser = '영희';
//   console.log('account2 함수 탈출');
// }

// var savedUser = '철이';

// function account3(){
//   console.log('반갑습니다.' + savedUser + '님');
//   savedUser = '미애';
// }

// account3();
// console.log('반갑습니다.' + savedUser + '님');


var userName = "soo";
var userPw = '1234';

function account4(userId, userpw){
  console.log(userId);
  console.log(userpw);

  var saveName = 'soo';
  var savePw = '1234'

  userpw = userpw || '1111';

  if(userId == saveName){
    if(userpw == savePw){
        console.log('반갑습니다.' + userId + '님');
    }
  }
}

account4(userName);