/* Server File
 * Created by Nick Anthony on 28/04/2016
 * Runs with Node.js
 */

var name = process.argv[2];
console.log("BlueTooth Program Started");
var express = require('express');

var BTSP = require('bluetooth-serial-port');
var serial = new BTSP.BluetoothSerialPort();
 
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
	 
	            process.stdin.on('data', function (data) {
	            	if (data === 'closeConnection\n'){
	            		serial.close();
	            	}
	            	if (data === 'listPairedDevices\n'){
	            		serial.listPairedDevices();
	            	}
	            	else{
	            		console.log("input:", data);
	            		var tempBuf = new ArrayBuffer(data.length*2); // 2 bytes for each char
					  	var buffer = new Uint8Array(tempBuf);
					  	for (var i=0, dataLen=data.length; i<dataLen; i++) {
					    	buffer[i] = data.charCodeAt(i);
					  	}
	            		
	            		//serial.write(buffer);
	            		serial.write(buffer, function(err, bytesWritten) {
			                if (err) console.log(err);
			            });
	            	} 
	            });
	 
	            serial.on('data', function(data) {
	                console.log('Received: ' + data);
	            });

	            // Changes home team score:
		        document.getElementById("homeSubmit").onclick = function() {
		            document.getElementById("homeScore").innerHTML = document.getElementById("inputHomeScore").value;
		        }
	        }, function () {
	            console.log('cannot connect');
	        }); //End bracket for serial.connect()
	    });//End bracket for serial.findSerialPortChannel()
	}//End bracket for if statement
});//End bracket for serial.on()

//Starts searching for bluetooth devices. When a device is found a 'found' event will be emitted
serial.inquire();


function getValue(){
	document.getElementById("homeSubmit").onclick = function() {
        document.getElementById("homeScore").innerHTML = document.getElementById("inputHomeScore").value;
    }


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


















