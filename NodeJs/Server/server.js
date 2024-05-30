const express = require('express');
const app = express(); // 서버 객체를 받음


// 8080으로 접근하면 실행
app.listen(8080, function(){
    // 포트번호, 콜백함수
    console.log('포트 8080으로 서버 대기...')
})

// 여기를 루트로 시작
app.get('/book',function(req, res){
    res.send('도서 목록 관련 페이지 입니다.')
});

app.get('/home',function(req, res){
    res.send('홈입니다.')
});