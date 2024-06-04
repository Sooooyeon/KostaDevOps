// MySQL + Node.js 접속
// let mysql = require('mysql');
// let conn = mysql.createConnection({
//     host : 'localhost',
//     user : 'root',
//     password : '123456',
//     database : 'myboard'
// });

// conn.connect();




const express = require('express');
const app = express(); // 서버 객체를 받음



// mongoDB 연동
let mydb;
const mongoClent = require('mongodb').MongoClient;
const url = 'mongodb+srv://tn56dus:gHDnJ2gU1hnctFD@cluster0.shgya4b.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0';
mongoClent.connect(url).then(client=>{
    console.log('몽고DB 접속');
    mydb = client.db('myboard');
    // mydb.collection('post').find().toArray().then((result)=>{
    //     console.log(result);
    // })
    // 8080으로 접근하면 실행
    app.listen(8080, function(){
        // 포트번호, 콜백함수
        console.log('포트 8080으로 서버 대기...')
    });
})


// 8080으로 접근하면 실행
// app.listen(8080, function(){
//     // 포트번호, 콜백함수
//     console.log('포트 8080으로 서버 대기...')
// });


app.get('/book',function(req, res){
    res.send('도서 목록 관련 페이지 입니다.')
});

// 여기를 루트로 시작
app.get('/',function(req, res){
    res.sendFile(__dirname + '/index.html');
});

app.get('/enter',function(req, res){
    res.sendFile(__dirname + '/enter.html');
});

app.get('/list',function(req, res){
    // mysql
    // conn.query("select * from post", function(err, rows, field){
    //     if(err) throw err;
    //     console.log(rows);
    // });

    res.send('list')

    mydb.collection('post').find().toArray().then((result)=>{
        console.log(result);
    })
});