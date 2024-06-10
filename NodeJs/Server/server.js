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


// body-parser 라이브러리 추가
const bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({extended:true}));

app.set('view engine','ejs');

// mongoDB 연동
let mydb;
const mongoClent = require('mongodb').MongoClient;
const url = 'mongodb+srv://tn56dus:VgHDnJ2gU1hnctFD@cluster0.shgya4b.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0';
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

const ObjId = require('mongodb').ObjectId;

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
    // res.sendFile(__dirname + '/enter.html');
    res.render('enter.ejs');
});

app.post('/save',function(req, res){
    console.log(req.body);
    console.log(req.body.title);
    console.log(req.body.content);
    console.log(req.body.someDate);

    // MySQL에 저장
    // let sql = "insert into post (title, content, created) \
    //     values (?,?, now())";
    
    // let params = [req.body.title, req.body.content];
    // conn.query(sql, params, function(err, result){
    //     if(err) throw err;
    //     console.log('데이터 저장완료');
    // })
    

    // 몽고DB에 데이터 저장
    mydb.collection('post').insertOne(
        {title : req.body.title, content : req.body.content, date : req.body.someDate}
    ).then((result)=>{
        console.log(result);
        console.log('데이터 저장완료');
    })


    res.send('데이터 저장완료');

});

app.get('/list',function(req, res){
    // mysql
    // conn.query("select * from post", function(err, rows, field){
    //     if(err) throw err;
    //     console.log(rows);
    // });

    
    // MongoDB
    mydb.collection('post').find().toArray().then((result)=>{
        //console.log(result);
        res.render('list.ejs', {data : result});
    })


    // res.sendFile(__dirname + '/list.html');
    
});

app.post('/delete',function(req, res){
    console.log(req.body._id);
    req.body._id = new ObjId(req.body._id); // 문자열 아이디를 객체로 변환
    console.log(req.body._id);

    mydb.collection('post').deleteOne(req.body)
    .then((result)=>{
        console.log('삭제완료');
        res.status(200).send();
    })
    .catch(err=>{
        console.log(err);
        res.status(500).send();
    })
});


app.get('/content/:id', function(req, res){
    console.log(req.params.id);

    const id = new ObjId(req.params.id);
    mydb.collection('post').findOne({_id : id})
    .then((result)=>{
        console.log(result);
        res.render('content.ejs', {data:result});
    })
});