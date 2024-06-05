import logo from './logo.svg';
import './App.css';
import { Button, Col, Container, Nav, Navbar, Row } from "react-bootstrap";
import { useState } from "react";

function App() {
  let [books] = useState([
    { id : 0, 
      title : 'MFC', 
      content : '윈도우 프로그래밍'
    },
    { id : 1, 
      title : 'API', 
      content : '윈도우 프로그래밍'
    },
    { id : 2, 
      title : 'C++',
      content : '윈도우 프로그래밍'
    },
  ]);

  return (
    <div className="App">
      <Navbar bg="dark" data-bs-theme="dark">
        <Container>
          <Navbar.Brand href="#home">BookStore</Navbar.Brand>
          <Nav className="me-auto">
            <Nav.Link href="#home">Home</Nav.Link>
            <Nav.Link href="#about">About</Nav.Link>
            <Nav.Link href="#bestSeller">BestSeller</Nav.Link>
            <Nav.Link href="#cart">Cart</Nav.Link>
            <Nav.Link href="#contact">Contact</Nav.Link>
          </Nav>
        </Container>
      </Navbar>

      <div className="HomeImg"></div>
      <Container>
        <Row>
          <Col>
            <img src={process.env.PUBLIC_URL + "/book1.jpg"} width="50%" />
            <h5>도서명</h5>
            <p>가격</p>
          </Col>
          <Col>
            <img src={process.env.PUBLIC_URL + "/book2.jpg"} width="50%" />
            <h5>도서명</h5>
            <p>가격</p>
          </Col>
          <Col>
            <img src={process.env.PUBLIC_URL + "/book3.jpg"} width="50%" />
            <h5>도서명</h5>
            <p>가격</p>
          </Col>
        </Row>
      </Container>
    </div>
  );
}

export default App;
