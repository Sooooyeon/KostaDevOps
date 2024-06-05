import { Button } from "react-bootstrap";
import { useNavigate, Outlet } from "react-router";

// nested routes

const About = () => {
  
  let navigate = useNavigate();

  return(
    <div>
      <div>
        <h1>회사정보</h1>
        <img src={process.env.PUBLIC_URL + "/logo512.png"} width="70%"/>
        <Outlet></Outlet>
        <p></p>
        <Button variant="warning" style={{marginRight : '10px'}}
          onClick={()=>{
            navigate('/about/member');
          }}
        >멤버</Button>
        <Button
          onClick={()=>{
            navigate('/about/location');
          }}
        >위치</Button>
      </div>
    </div>
  )
}

export default About;