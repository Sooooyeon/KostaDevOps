import { tab } from "@testing-library/user-event/dist/tab";
import { useContext, useEffect, useState } from "react";
import { Button, Col, Container, Nav, Row } from "react-bootstrap";
import { useNavigate, useParams } from "react-router";
// import mystyle from 'styled-components';
import { contextStorage } from "../App";
import { addItem } from "../store";
import { useDispatch, useSelector } from "react-redux";


function DetailPage(props){
  let ctx = useContext(contextStorage);
  console.log(ctx?.stock);

  const {id} = useParams();
  const findBook = props.books.find((book)=>{
    return book.id == id;
  })

  const [discount, setDiscount] = useState(true);
  const [tab, setTab] = useState(0);

  const dispatch = useDispatch(); 
  const navigate = useNavigate();



  // let timer;

  // useEffect(()=>{
  //   const fetchData = async () => {
  //     // for(let i = 0; i<1000; i++){
  //     //   console.log('test');
  //     timer = setTimeout(()=>{setDiscount(false)}, 3000);
  //     // }
  //   }
  //   fetchData();
  //   console.log(2);

  //   return()=>{
  //     console.log(1);
  //     clearTimeout(timer);
  //   }
    // return문을 추가해 useEffect를 실행하기 전에 먼저 실행할 명령을 넣을 수 있음
    // setTimeout(()=>{setDiscount(false)}, 10000);
    // },[]);

  // let TeamBtn = mystyle.button`
  // background-color: ${(props) => props.bg};
  // color : white;
  // padding: 20px;
  // `;

  return(
    <Container>
      {/* {discount ? <div className="discount">50% 할인 특가!</div> : null} */}
      <Row>
        <Col>
          <img src={process.env.PUBLIC_URL + `/book${parseInt(id)+1}.jpg`} width="50%" alt='' />
        </Col>
        <Col>
          <h5>{findBook.title}</h5>
          <h6>{findBook.content}</h6>
          <p>{findBook.price}</p>
          <Button onClick={()=>{
            let result = findBook? dispatch((addItem({id:findBook.id, 
              name: findBook.title}
            ))) : <div>상품을 찾을 수 없습니다.</div>;
            navigate('/cart');
          }}>카트에 담기</Button>
        </Col>
      </Row>

      {/* <TeamBtn bg ="blue">팀버튼</TeamBtn>
      <TeamBtn bg ="red">팀버튼</TeamBtn> */}

        <Nav variant="tabs" defaultActiveKey="link-0">
          <Nav.Item>
            <Nav.Link onClick={()=>setTab(0)} eventKey="link-0">도서정보</Nav.Link>
          </Nav.Item>
          <Nav.Item>
            <Nav.Link onClick={()=>setTab(1)} eventKey="link-1">리뷰</Nav.Link>
          </Nav.Item>
          <Nav.Item>
            <Nav.Link onClick={()=>setTab(2)} eventKey="link-2">배송/반품</Nav.Link>
          </Nav.Item>
        </Nav>
    <TabComponent tab={tab}></TabComponent>

    </Container>
  )
}

function TabComponent({tab})
{
  // if(tab == 0){
  //   return <div>도서정보입니다.</div>
  // } else if(tab ==1) {
  //   return <div>배송이 빨랐어요</div>
  // } else if(tab ==2) {
  //   return <div>로켓배송이 됩니다.</div>
  // }
  let ctx = useContext(contextStorage);
  console.log(ctx?.stock);

  return [<div>도서정보입니다.{ctx?.stock}</div>,
          <div>배송이 빨랐어요</div>,
          <div>로켓배송이 됩니다.</div>][tab];
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