import { config } from "./api.js";

 $('#submit').click(function(){
  $.ajax({
    method: "GET",
    url:"https://dapi.kakao.com/v3/search/book?query="+$('#search').val(),
    headers: {Authorization:`KakaoAK ${config.apikey}`}
  })
  .done(function(data){
    console.log(data)
    $('body').append("<p><span>" + data.documents[0].title + "</span>");
    $('body').append("<img src = " + data.documents[0].thumbnail + "/>");

  })
})


