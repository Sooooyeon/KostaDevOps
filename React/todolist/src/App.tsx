import React, { Fragment } from 'react';
import logo from './logo.svg';
import './App.css';
import ClassCom from './ClassCom';
import FuncCom from './FuncCom';
import TodoList from './TodoList';

function App() {

  return (
    <div>
        {/* 동적바인딩 */}
        {/* <h1 className='test'>{title}</h1>  */}
        <TodoList></TodoList>
        {/* <FuncCom></FuncCom> */}
    </div>
  );
}

export default App;
