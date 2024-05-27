// function order(callback){ // callback은 함수포인터
//   callback();
// }

const coffee = function(){
  console.log("주문하신 아메리카노가 나왔습니다.");
}

// coffee();
setTimeout(coffee, 3000);


// 이벤트 리스너 = 콜백함수
// adddEventListener(이벤트명, 콜백함수)