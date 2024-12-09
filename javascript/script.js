function sayhelloagain(){

    alert("HEllo again")
}
document.write("This is my first webpage")  // for output on browser screen 
document.write("<h1>THIS IS MY FIRST JAVASCRIPT PAGE</h1>")
// var pi=3.14;
// var person="are you GOD";
// var ans="Yes I Am";
// document.write(pi +"<br>");
// document.write(person +"<br>");
// document.write(ans + "<br>");

// function myname(){
//     var carname="wELCOME";
//     document.getElementById("demo").innerHTML=carname;
// }

var num=10;
console.log(num);
console.log(typeof(num));
num=12.5;
console.log(num);
console.log(typeof(num));
num=false;
console.log(num);
console.log(typeof(num));
num="ANURAG MISHRA";
console.log(num);
console.log(typeof(num));
num=null ;
console.log(num);
console.log(typeof(num));
num=undefined;
console.log(num);
console.log(typeof(num));
//!   ARRAY
// var numberArray=[1,2,3];
// var animals=ne Array("cat","dog");  //* method to create array
//! Object
// var person={
//     name:"Anurag Mishra",
//     age: 20

// }
// console.log(animals);
// document.write(numberArray + "<br>");
// document.write(person.name + "<br>");
// document.write(person["age"]);

// create an object
var person={
    fname: "Anurag",
    lname: "Mishra",
    id:5566,

// access multiple properties of objects
getinfo:function(){
    return this.fname + " " + this.lname;

}
};
document.getElementById("demo").innerHTML = person.getinfo();









