/*------------------------JAVSCTIPT-------------------*/
console.log("Javascript loaded");
var c = document.getElementById("playground");
var b = document.getElementById("clear");
var ctx = c.getContext("2d");
var prevX = 0;
var prevY = 0;

var makeDot = function(e) {
    e.preventDefault();
    var x = e.offsetX;
    var y = e.offsetY;
    ctx.fillStyle="#0000FF"
    ctx.beginPath();
    ctx.arc(x, y, 10, 0, 6.29);
    ctx.closePath();
    ctx.fill();
}

//clears the canvas
var clear = function(e) {
    e.preventDefault();
    ctx.clearRect(0, 0, c.width, c.height);
}

c.addEventListener('click', makeDot);
b.addEventListener('click', clear);
