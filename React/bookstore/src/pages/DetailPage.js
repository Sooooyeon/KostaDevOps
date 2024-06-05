import { Button, Col, Container, Row } from "react-bootstrap";
import bookData from "../data/data";
import { useState } from "react";
import { useParams } from "react-router";

function DetailPage(){
  const params = useParams();
  const id  =  params.id;
  let [books] = useState(bookData);

  return(
    <Container>
      <Row>
        <Col>
          <img src={process.env.PUBLIC_URL + `/book${Number(id)+1}.jpg`} width="50%" alt='' />
        </Col>
        <Col>
          <h5>도서명</h5>
          <h6>도서내용</h6>
          <p>도서가격</p>
          <Button>카트에 담기</Button>
        </Col>
      </Row>
    </Container>
  )
}

export default DetailPage;