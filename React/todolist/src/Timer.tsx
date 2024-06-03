import { useState } from "react"
import { Button } from "react-bootstrap";

const Timer : React.FC = () => {
  const [seconds, setSeconds] = useState<number>(0);

  return(
    <div>
      <h4>타이머 : {seconds}초</h4>
      <Button className="btn" onClick={()=> setInterval(() => setSeconds((prev)=>prev +1),1000)}>START</Button>
      <Button className="btn" onClick={()=> clearInterval(seconds)}>STOP</Button>
    </div>
  )
}

export default Timer;