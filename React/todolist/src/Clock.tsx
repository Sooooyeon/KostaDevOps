import { useEffect, useState } from "react"
import { Button } from "react-bootstrap";

const Clock : React.FC = () => {
  const [time, setTime] = useState(new Date());

  useEffect(()=>{
    const intervalId = setInterval(()=>{setTime(new Date())},1000);
    return() => {clearInterval(intervalId)};
  },[])

  return(
    <div className="clock">
      <h6>현재시간 : {time.toLocaleTimeString()}초</h6>
    </div>
  )
}

export default Clock;