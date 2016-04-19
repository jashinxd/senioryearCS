console.log("JAVASCIPT LOADED");

var base = "this is in f1 in global namespace";
var x = "x in the global namespace";
var f2 = function() {
    console.log("this is f2");
};


var f1 = {
    //Access by f1.x or f1["x"]
    x  : "sumpn in the f1 namespace",
    f2 : f2,
    f  : function() {
	console.log("this is in f in f1 namespc");
	console.log("x is " + x);
	console.log("f1.x is " + f1.x);
	console.log("better way: " + this.x);
    }
};

var makeIncrementer = function() {
    var num = 0;
    var inner = function() {
	num += 1;
	return num;
    }
    return inner;
}

var makeAdder = function(n) {
    var num = 0;
    var inner = function() {
	num += n;
	return num;
    }
    return inner;
}
