/* Server File
 * Created by Nick Anthony on 12/04/2016
 * Runs with Node.js
 */



var express = require("express");

var app = express();

app.get('/', function(req, res) {
	res.json({message: "hello world"});

});

app.listen(process.env.PORT || 8080);