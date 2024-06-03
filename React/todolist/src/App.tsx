import React, { Fragment } from 'react';
import logo from './logo.svg';
import './App.css';
import ClassCom from './ClassCom';
import FuncCom from './FuncCom';
import TodoList from './TodoList';
import Timer from './Timer';
import Clock from './Clock';

function App() {

  return (
    <div>
        {/* 동적바인딩 */}
        {/* <h1 className='test'>{title}</h1>  */}
        <TodoList></TodoList>
        <FuncCom weather='맑음'>일기예보 : </FuncCom> 
        {/* 일기예보 - children */}
        {/* <Timer></Timer> */}
        <Clock></Clock>
    </div>
  );
}

export default App;
