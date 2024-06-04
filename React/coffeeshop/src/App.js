import logo from './logo.svg';
import './App.css';
import { Container, Nav, Navbar, Row, Col } from 'react-bootstrap';
import { useState } from "react";

function App() {
  const [coffees, setCoffees] = useState([
    {id : 0, product : '아메리카노', description : '아메리카노는...', price : 4500},
    {id : 1, product : '한라봉스무디', description : '한라봉스무디...', price : 6000},
    {id : 2, product : '카페라떼', description : '카페라떼...', price : 5000},
  ]);

  return (
    <div className="App">
      <Navbar bg="dark" data-bs-theme="dark">
        <Container>
          <Navbar.Brand href="#home">CoffeeMate</Navbar.Brand>
          <Nav className="me-auto">
            <Nav.Link href="#home">Home</Nav.Link>
            <Nav.Link href="#about">About</Nav.Link>
            <Nav.Link href="#bestcoffee">BestCoffee</Nav.Link>
            <Nav.Link href="#cart">Cart</Nav.Link>
            <Nav.Link href="#contact">Contact</Nav.Link>
          </Nav>
        </Container>
      </Navbar>
      <div className="backbg"></div>
      <Container>
        <Row>
          <Col>
            <img src={process.env.PUBLIC_URL+"drink1.jpg"} width="80%"/>
            <h4>아메리카노</h4>
          </Col>
          <Col>
            <img src={process.env.PUBLIC_URL+"drink2.jpg"} width="80%"/>
            <h4>카페라떼</h4>
          </Col>
          <Col>
            <img src={process.env.PUBLIC_URL+"drink3.jpg"} width="80%"/>
            <h4>카페라떼</h4>
          </Col>
        </Row>
      </Container>
    </div>
  );
}

export default App;
