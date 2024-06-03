import React, { useState } from "react"

// function FuncCom(){
//     return(
//         <div>
//             함수형 컴포넌트
//         </div>
//     )
// }

// type은 기존에 있는것을 묶어놓은 것, interface는 새로운 객체
interface MyTestProps{
    weather : string;
    children : React.ReactNode;
}

const FuncCom : React.FC<MyTestProps> = ({children, weather}) =>  {
    // const [fruits, setFruits] = useState(['apple','banana','orange']);

    // let data1 = [1,2,3];
    // // let data2 = data1; // shallow copy, 얕은 복사
    // let data2 = [...data1]; // deep copy, 깊은 복사
    // console.log(data1 === data2); 

    // const {children, weather} = props;

    return(
        <div>
            {/* <ul>
                {
                    fruits.map((fruit, index)=>(
                        <li key={index}>{fruit}</li>
                    ))
                }
            </ul>
            <div>
                <button onClick={()=>{
                    let copy = [...fruits];
                    //let copy = fruits; //기존 상태의 주소값과 같아 변경이 되지 않음
                    copy[0] = 'grape';
                    setFruits(copy); 
                    console.log(fruits);
                    console.log(copy);
                }}>수정</button>
                {fruits}
            </div> */}
            {children}오늘의 날씨는 {weather}입니다.
        </div>
    )
}
export default FuncCom;