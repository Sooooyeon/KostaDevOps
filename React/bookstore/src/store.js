import { configureStore, createSlice } from "@reduxjs/toolkit";

// 공유할 state 생성 (useState와 비슷한 역할)
let user = createSlice({
  name : 'user',
  initialState : {name: "kim", age : 20},
  reducers:{
    // 변경함수
    changeName(state){
      state.name = 'lee';
    },
    increase(state){
      state.age += 1;
    },
  }
})

let stock = createSlice({
  name : 'stock',
  initialState : [1,2,3],
})


/**
 * [
 *  {id:1, name:"백엔드 입문자를 위한 모던 자바스크립트&node.js", count:1},
 *  {id:2, name:"리액트를 다루는 기술", count:3},
 * ]
 *  */ 

let cart = createSlice({
  name : 'cart',
  initialState : [],
  reducers:{
    // 변경함수
    plusCount(state, actions){
      state[actions.payload].count++;
    },
    minusCount(state, actions){
      state[actions.payload].count--;
    },
    addItem(state, actions){
      const existingItem = state.find((item)=>{
        return item.id === actions.payload.id;
      })

      if(existingItem){
        existingItem.count++;
      } else{
        state.push({
          id: actions.payload.id,
          name : actions.payload.name,
          count : 1
        });
      }
    }
  }
})

export default configureStore({
  reducer:{
    user : user.reducer,
    stock : stock.reducer,
    cart : cart.reducer
  }
})

export let {changeName, increase} = user.actions;
export let {plusCount, minusCount, addItem} = cart.actions;







/**

타입스크립트면 아래와 같이 사용
export interface CartItem{
  id: number,
  name: string,
  count: number
}

export interface CartArray{
  cart : CartItem[];
}

 */

