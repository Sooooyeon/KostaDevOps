import Table from "react-bootstrap/Table";
import { useDispatch, useSelector } from "react-redux";
import { plusCount, minusCount } from "../store";

// ts 사용할 경우
// interface CartState{
//   cart : CartArray;
// }

function Cart(){

  let a = useSelector((state)=>{
    return state
  })

  let dispatch = useDispatch();

  console.log(a.user);

  return(
    <Table striped bordered hover>
      <thead>
        <tr>
          <th>#</th>
          <th>도서명</th>
          <th>권수</th>
          <th>변경하기</th>
        </tr>
      </thead>
      <tbody>     
        {a.cart.map((item,i) => (
        <tr key={item.id}>
          <td>{item.id}</td>
          <td>{item.name}</td>
          <td>{item.count}</td>
          <td>
            <button
              className="btn btn-warning"
              style={{marginRight : '10px'}}
              onClick={()=>{
                dispatch(plusCount(i))
            }}>➕</button>
            <button
              className="btn btn-warning"
              style={{marginRight : '10px'}}
              onClick={()=>{
                dispatch(minusCount(i))
            }}>➖</button>
          </td>
          {/* <div>{a.user.name}</div>
          <div>{a.user.age}</div> */}
        </tr>
        ))}
      </tbody>
    </Table>
  )
}

export default Cart;