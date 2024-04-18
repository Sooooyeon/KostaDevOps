onmessage = function(event){
  // var dataPoint = event.data;
  var dataPoint = {x : Math.random() *  event.data.x , y : Math.random() * event.data.x};

  this.postMessage(dataPoint); // 다시 되롤려보냄
}