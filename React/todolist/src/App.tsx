import React, { Fragment } from 'react';
import logo from './logo.svg';
import './App.css';
import ClassCom from './ClassCom';

function App() {

  let title : string = '오늘 할 일';
  const titleStyle = {
    backgroundColor : 'black',
    color : 'aqua',
    fontSize : '40px',
    fontWeight : 'bold',
    padding : 16
  }

  return (
    <Fragment>
        {/* 동적바인딩 */}
        {/* <h1 className='test'>{title}</h1>  */}
        <h1 style={titleStyle}>{title}</h1>
        
        <ClassCom></ClassCom>
    </Fragment>
  );
}

export default App;
