import React, { Fragment } from "react";
import './App.css';
// import { Component } from "react";

function App() {
  let title = "리액트"
  
  const style = {
    backgroundColor: 'black'
  }

  return (
    <Fragment>
      <div>
        <h1 style={style}>
          {title}
        </h1>
        <input type="text"/>
      </div>
    </Fragment>
  );
}

// // 위의 코드가 내부적으로는 아래와 같이 동작
// function App(){
//   return React.createElement("div",null,"Hello React ",React.createElement("b",null,"react"));
// }


// 클래스형 컴포넌트
// class App extends Component{
//   render(){
//     return (
//       <div className="App">
//         <header className="App-header">
//          <Subject></Subject>
//          <Menu></Menu>
//          <Content></Content>
//         </header>
//       </div>
//     );
//   }
// }

// class Subject extends Component{
//   render(){
//     return (
//       <header>
//         <h1>FrontEnd</h1>
//       </header>
//     );
//   }
// }

// class Menu extends Component{
//   render(){
//     return (
//       <nav>
//         <ul>
//           <li><a href="">HTML</a></li>
//           <li><a href="">CSS</a></li>
//           <li><a href="">JavaScript</a></li>
//         </ul>
//       </nav>
//     );
//   }
// }

// class Content extends Component{
//   render(){
//     return (
//       <description>
//         <h2>HTML이란?</h2>
//         HTML is Hypertext Markup Language
//       </description>
//     );
//   }
// }

export default App;
//export default Header;
