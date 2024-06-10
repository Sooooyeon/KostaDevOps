import './App.css';
import bookData from './data/data';
import { Routes, Route, Link, useNavigate, Outlet } from 'react-router-dom';
import { Button, Col, Container, Nav, Navbar, Row } from "react-bootstrap";
import { createContext, useState } from "react";
import DetailPage from './pages/DetailPage';
import About from './pages/About';
import axios from 'axios';

export let contextStorage = createContext(0);

function App() {

  let [books, setBooks] = useState(bookData);
  let navigate = useNavigate();
  let [btnIcon, setBtnIcon] = useState("▼");
  let [expands, setExpands] = useState(false);

  let [stock] = useState([1,2,3]);

  return (
    <div className="App">
      <Navbar bg="dark" data-bs-theme="dark">
        <Container>
          <Navbar.Brand href="/">BookStore</Navbar.Brand>
          <Nav className="me-auto">
            <Nav.Link onClick={()=>{navigate('/')}}>Home</Nav.Link>
            <Nav.Link href="/about">About</Nav.Link>
            <Nav.Link href="/bestSeller">BestSeller</Nav.Link>
            <Nav.Link href="/cart">Cart</Nav.Link>
            <Nav.Link href="/contact">Contact</Nav.Link>
          </Nav>
        </Container>
      </Navbar>
      <Routes>
        <Route path='/detail/:id' element = {
          <contextStorage.Provider value={{stock, books}}>
            <DetailPage books = {books}></DetailPage>
          </contextStorage.Provider>}>
        </Route>
        <Route path='/' element = {
          <div>
            <div className="HomeImg"></div>
            <Container>
              <Row>
                {/* {books.map((item) => bookItem(item))} */}
                {
                  books.map((item, i) => {
                    return(
                      <BookItem book={item} key={i}></BookItem>
                    )
                })}
              </Row>
            </Container>
            <Button variant='warning' onClick={()=>{
              expands === false ?
              // axios.post('/요청경로',{name:'kim'});
              axios.get('https://jamsuham75.github.io/image/data2.json')
              .then((result)=>{
                console.log(result.data);
                let copy = [...books, ...result.data];
                setBooks(copy);
                setExpands(true);
                setBtnIcon("▲")
              }).catch((err)=>{
                console.log(err);
              }) 
              : 
              window.location.reload();
              setExpands(false);
              setBtnIcon("▼")

            }}>{btnIcon}</Button>
          </div>
        }></Route>
        {/* 404페이지 */}
        <Route path='/about' element = {<About></About>}>
          {/* 아래의 요소들(member, location)은 About 컴포넌트안에 Outlet의 위치에 출력됨 */}
          <Route path='member' element = {<div>대표임원</div>}></Route>
          <Route path='location' element = {<div>위치</div>}></Route>
        </Route>
        {/* <Route path='/about/location' element = {<About></About>}></Route> */}
        <Route path='*' element = {"존재하지 않는 페이지입니다."}></Route>
      </Routes>

    </div>
  );
}

function BookItem({book}){
  let navigate = useNavigate();
  return(
    <Col key={book.id} onClick={()=>{ navigate(`/detail/${book.id}`)}}>
      <img src={process.env.PUBLIC_URL + `/book${book.id+1}.jpg`} width="50%" alt='' />
      <h5>{book.title}</h5>
      <p>{book.price}</p>
    </Col>
  )
}

export default App;
