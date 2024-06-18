const { app, BrowserWindow} =require('electron');

function createWindow(){
  const win = new BrowserWindow({
    width : 800,
    height : 600,
    webPreferences : {
      nodeIntergration : true
    }
  })

  win.loadFile('./index.html');
}

app.on('ready', createWindow);