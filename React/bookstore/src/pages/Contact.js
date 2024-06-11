function Contact(){
  return(
    <div className="container">
      <div className="board">
        <h1>Business Contact</h1>
        <p></p>
        <form action='' method=''>
          <div className="form-gruop">
            <input type="text" className="form-control" placeholder="이름 입력"/><p></p>
            <input type="email" className="form-control" placeholder="이메일 입력"/><p></p>
            <textarea name="content" rows='10' className="form-control" placeholder="내용 입력"></textarea><p></p>
          </div>
          <button type="submit" className="btn btn-warning">전송하기</button>
        </form>
      </div>
    </div>
  )
}

export default Contact;