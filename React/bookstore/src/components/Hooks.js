// import { useEffect, useState } from "react"

// function UseEffectTest(){
  
//   const [count, setCount] = useState(0);

//   useEffect(()=>{
//     const handleButtonClick = () => {
//       setCount((prev)=>prev+1);
//     }

//     const button = document.getElementById('incre');
//     button.addEventListener('click', handleButtonClick);

//     return ()=>{
//       // remove해주지 않으면 이벤트 함수가 실행될때 마다 추가적으로 생성됨(함수 증식..)
//       button.removeEventListener('click',handleButtonClick);
//     }

//   },[])


//   return(
//     <div>
//       <button id="incre">증가</button>
//       <p>Count : {count}</p>
//     </div>
//   )
// }

// export default UseEffectTest;


// import { useMemo, useState } from "react"

// function UseMeomoTest(){

//   const[number, setNumber] = useState(1);
//   const[dark, setDark] = useState(false);

//   const doubleNumber = useMemo(()=>{
//     return slowFunction(number);
//   },[number]);

//   const themeStyle = useMemo(()=>{
//     return{
//       backgroundColor : dark ? 'black' : 'white',
//       color : dark ? 'white' : 'black'
//     }
//   },[dark])

//   return(
//     <div>
//       <input type="number" value={number}
//         onChange={(e)=>{
//           setNumber(parseInt(e.target.value));
//         }}
//       ></input>
//       <button onClick={()=>{
//         return setDark(prev=>!prev);
//       }}>테마변경</button>
//       <div style={themeStyle}>{doubleNumber}</div>
//     </div>
//   )
// }

// function slowFunction(num){
//   console.log("slow function");
//   for(let i = 0; i < 1000000; i++){
//     return num * 2;
//   }
// }

// export default UseMeomoTest;



import { useCallback, useState } from "react"

function useCallbackTest(){
  
  let [count, setCount] = useState(0);

  const handleButtonClick = useCallback(() => {
    setCount((prev)=> prev + 1);
  },[])

  return(
    <div>
      <button onClick={handleButtonClick}>증가</button>
      <p>Count : {count}</p>
    </div>
  )
}

export default useCallbackTest;