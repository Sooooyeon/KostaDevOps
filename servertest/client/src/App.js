import logo from './logo.svg';
import './App.css';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import { useEffect, useState } from 'react';
import axios from 'axios';

function App() {
  return (
    <div className="App">
      <BrowserRouter>
        <Routes>
          <Route path='/' element={<Home/>}></Route>
        </Routes>
      </BrowserRouter>
    </div>
  );
}

function Home(){

  const [data, setData] = useState('');

  useEffect(()=>{
    // fetch('http://localhost:9000/data')
    // .then((response)=> response.json())
    axios.get('http://localhost:9000/data')
    .then((obj)=>{
      console.log(obj.data);
      setData(obj.data.data);
    })
  },[])

  return(
    <div>
      홈 화면입니다.
      <p>Server Data : {data}</p>
    </div>
  )
}

export default App;
