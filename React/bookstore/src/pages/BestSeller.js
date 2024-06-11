const BestSeller = ({bestSeller}) => {
  
  return(
    <div className="container">
      <div className="board">
        <h1>BestSeller</h1>
        <p></p>
        {
          bestSeller.map((book) =>
            <div key={book.rank}>
              <h1>{book.rank}위</h1>
              <img src={`book${book.img}.jpg`} width='50%'/>
              <h4>{book.title}</h4>
            </div>
          )
        }
      </div>
    </div>
  )
}

export default BestSeller;