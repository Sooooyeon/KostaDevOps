import React, { useState } from "react"
// 프롭스 props, 매개변수
// 1. state
// 2. props
// 3. hooks = use로 시작하는 함수

import Button from 'react-bootstrap/Button';

// type : 기존타입을 베이스로 새로운 타입 생성
// interface : 새로운 객체 구조
type Todo = {
    id: number;
    text: string;
    isChecked: boolean;
}

const TodoList: React.FC = () => {
    // React.FC 
    // - FC는 functional component의 약어
    // FC는 props의 타입을 명시할때 사용됨 React.FC<매개변수의 타입>
    const title: string = '오늘 할일' // 타입 추론

    // state : 상태관리 , 데이터를 동적으로 감시함
    // useState
    const [todos, setTodos] = useState<Todo[]>([
        { id: 1, text: '운동하기', isChecked: false },
        { id: 2, text: '청소하기', isChecked: false },
        { id: 3, text: '공부하기', isChecked: false }
    ]);

    const [newTodo, setNewTodo] = useState<string>("");
    
    const handleCheckboxChange = (itmeId : number) => {
        setTodos((prevItems)=> // 기존 데이터를 순회
            prevItems.map((item)=>
                (item.id === itmeId) ? {...item, isChecked : !item.isChecked } : item
            )
        ); 
    }


    return (
        <div>
            <div className="container">{title}</div>
            <div>
                <input type="text" 
                placeholder = "할 일 입력" 
                onChange={(e)=>{setNewTodo(e.target.value)}}
                style = {{ marginRight : '10px',
                    writingMode : 'horizontal-tb'} }/>
                <Button variant="warning"onClick={()=>{}}>추가</Button>
            </div>
            <div className="board">
                <ul>
                    {
                        todos.map((todo) => (
                            <li key={todo.id}>
                                <input type="checkbox" 
                                    onChange={()=>{
                                        handleCheckboxChange(todo.id);
                                    }} 
                                />
                                <span>{todo.isChecked ? <del>{todo.text}</del> : <span>{todo.text}</span>}</span>
                                
                            </li>
                        ))
                    }
                </ul>
            </div>
        </div>
    )
}
export default TodoList;