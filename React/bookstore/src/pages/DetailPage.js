import { useEffect, useState } from "react";
import { Button, Col, Container, Row } from "react-bootstrap";
import { useParams } from "react-router";
// import mystyle from 'styled-components';


function DetailPage(props){
  const {id} = useParams();
  const findBook = props.books.find((book)=>{
    return book.id == id;
  })

  const [discount, setDiscount] = useState(true);
  
  let timer;

  useEffect(()=>{
    const fetchData = async () => {
      // for(let i = 0; i<1000; i++){
      //   console.log('test');
      timer = setTimeout(()=>{setDiscount(false)}, 3000);
      // }
    }
    fetchData();
    console.log(2);

    return()=>{
      console.log(1);
      clearTimeout(timer);
    }
    // return문을 추가해 useEffect를 실행하기 전에 먼저 실행할 명령을 넣을 수 있음
    // setTimeout(()=>{setDiscount(false)}, 10000);
    },[]);

  // let TeamBtn = mystyle.button`
  // background-color: ${(props) => props.bg};
  // color : white;
  // padding: 20px;
  // `;

  return(
    <Container>
      {discount ? <div className="discount">50% 할인 특가!</div> : null}
      <Row>
        <Col>
          <img src={process.env.PUBLIC_URL + `/book${parseInt(id)+1}.jpg`} width="50%" alt='' />
        </Col>
        <Col>
          <h5>{findBook.title}</h5>
          <h6>{findBook.content}</h6>
          <p>{findBook.price}</p>
          <Button>카트에 담기</Button>
        </Col>
      </Row>

      {/* <TeamBtn bg ="blue">팀버튼</TeamBtn>
      <TeamBtn bg ="red">팀버튼</TeamBtn> */}
    </Container>
  )
}

class DetailPage2 extends Comment{
  componentDidMount(){

  }

  componentDidUpdate(){

  }

  componentWillUnmount(){

  }
  
}



export default DetailPage;