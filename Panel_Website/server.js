/* Server File
 * Created by Nick Anthony on 28/04/2016
 * Runs with Node.js
 */

// require dependencoes
var express = require('express');
var dispatcher = require('httpdispatcher');
var path = require("path");
var http = require("http")
var port = 4000;

var app = express();
app.set('port', process.env.PORT || port);
app.set('views', path.join(__dirname, 'views'));
app.use(express.static(__dirname + '/public'));
//Store all HTML files in view folder.

var BTSP = require('bluetooth-serial-port');
var serial = new BTSP.BluetoothSerialPort();


app.get('/',function(req,res){
  res.sendFile(path.join(__dirname+'/views/index.html'));
  //__dirname : It will resolve to your project folder.
});

app.get('/index.html',function(req,res){
  res.sendFile(path.join(__dirname+'/views/index.html'));
  //__dirname : It will resolve to your project folder.
});

app.get('/scoreboard.html',function(req,res){
  res.sendFile(path.join(__dirname+'/views/scoreboard.html'));
  //__dirname : It will resolve to your project folder.
});

app.get('/geometry.html',function(req,res){
  res.sendFile(path.join(__dirname+'/views/geometry.html'));
  //__dirname : It will resolve to your project folder.
});

var server = http.createServer(app);
var socket_io = require("socket.io")(server);

server.listen(app.get("port"), function(){
	console.log("Express server listening on port " + app.get("port"));
});

var connectCounter = 0;
var clientSocket;
var serialConnection;
socket_io.sockets.on('connection', function(socket){
	clientSocket = socket;
	console.log("User connected");
	connectCounter++; 
	console.log(connectCounter);

	socket.on('change_home_team_score', function(data) { 
		var msg = data["message"];
		console.log(msg);
	});
	socket.on('change_visitor_team_score', function(data) { 
		var msg = data["message"];
		console.log(msg);
	});
	socket.on('update_time', function(data) { 
		var secs = data["seconds"];
		var mins = data["minutes"];
		console.log("time = %s:%s", mins, secs);
	});

	socket.on('connect_bluetooth', function() { 
		connectBluetooth();
	});

	socket.on('say_hello', function() {
		var str = "1";
		var tempBuf = new ArrayBuffer(str.length*2); // 2 bytes for each char
	  	var buffer = new Uint8Array(tempBuf);
	  	for (var i=0, strLen=str.length; i<strLen; i++) {
	    	buffer[i] = str.charCodeAt(i);
	  	}
	            		
		serial.write(buffer);
		serial.write(buffer, function(err, bytesWritten) {
        	if (err) {console.log(err)};
		});
	});

	

	socket.on('disconnect', function() { 
		connectCounter--; 
		console.log(connectCounter);
	});
});




function connectBluetooth(){
	var name = process.argv[2];
	console.log("BlueTooth Program Started");

	
	 
	serial.on('found', function(address, name) {
		console.log("address1: ", address);
	    console.log("name1: ", name);
	 
	    if(address === "98-d3-31-fc-2f-06"){
		    serial.findSerialPortChannel(address, function(channel) {
		    	console.log("address2: ", address);
		    	console.log("channel: ", channel);
		        serial.connect(address, channel, function() {
		            console.log('connected');
		            process.stdin.resume();
		            process.stdin.setEncoding('utf8');
		            console.log('Press "1" or "0" and "ENTER" to turn on or off the light.')
		            serialConnection = serial;
		 
		      //       process.stdin.on('data', function (data) {
		            	
	       //      		console.log("input:", data);
	       //      		var tempBuf = new ArrayBuffer(data.length*2); // 2 bytes for each char
					  	// var buffer = new Uint8Array(tempBuf);
					  	// for (var i=0, dataLen=data.length; i<dataLen; i++) {
					   //  	buffer[i] = data.charCodeAt(i);
					  	// }
	            		
	       //      		//serial.write(buffer);
	       //      		serial.write(buffer, function(err, bytesWritten) {
			     //            if (err) console.log(err);
			     //        });
		      //       });
		 
		            serial.on('data', function(data) {
		                console.log('Received: ' + data);
		            });
		        }, function () {
		            console.log('cannot connect');
		        }); //End bracket for serial.connect()
		    });//End bracket for serial.findSerialPortChannel()
		}//End bracket for if statement
	});//End bracket for serial.on()

	//Starts searching for bluetooth devices. When a device is found a 'found' event will be emitted
	serial.inquire();
}





// List all serial ports connected to computer
function listSerialPorts(){
	var availSerialPorts = [];
	// list serial ports:
	serialport.list(function (err, ports) {
	  ports.forEach(function(port) {
	    console.log(port.comName);
	    availSerialPorts.push(port.comName);
	  });
	});
}


















