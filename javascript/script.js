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
var per={
    name:"garuna",
    age:20,
    address:{
        street:"nehru nagar",
        flatno:201
    }
}
console.log(per)
//! class is a virtual entity object is physical enitity
var person2=new Object();
person2.name="ANURAG";
person2["age"]=20;
person2.address={};
person2.address.street="nagar road";
console.log(person2)

console.log(per["name"]);
document.write(per["name"]);
document.write("<br>");
console.log(per.age);
document.write(per.age);
// inside the function if variable is declared without "var" 


function car(){
    var carname="volvo";
    document.getElementById("demo1").innerHTML=typeof carname + " " +carname;
}
car();
// document.getElementById("demo1").innerHTML=typeof carname + " " +carname; will be error due to scope of variable


document.write("<br>");
function show()
{
    var a="200";
    document.write(a+"<br>");
    function disk(){
        var b="500";
        document.write(a+" "+b);
    }
    disk();
}
show();


var my="global";
function check(){
    var my="local";
    document.write(my);
    window.document.write(my);

}
check();
var a=10;
function funA(){
    console.log("Start function A");
    function funb(){
        console.log("in function b");
    }
    funb();
}
funA();
console.log("GlobalContext");

var name="John";
function first(){
    // var name="John";

    var a="Hello!";
    second();
    var z=a+name;
    console.log(z);
}
function second(){
    var a="Hi!";
    third();
    var z=a+name;
    console.log(z);
}
function third(){
    var a="Hey!";
    var z=a+name;
    console.log(z);
}
console.log(name);
first();



var x=5;
function add(){
    var y=45;
    console.log(x+y);
    function mul(){
        var z=10;
        console.log(y*z);
    }
    mul();
}
add();


var age=18.3;
if(age>18){
    document.write("<br>You are eligible to cast vote<br>");
}
else{
    document.write("<br>Not eligible to cast vote<br>");
}
document.write("###########################################<br>");


var grade='G';
document.write("Entering switch block<br />");
switch(grade){
    case 'A':
    document.write("Good Job<br />");
    break;
    case 'B':
    document.write("Pretty Good<br />");
    break;
    case 'C':
    document.write("Passed<br />");
    break;
    case 'D':
    document.write("Not so good<br />");
    break;
    case 'F':
    document.write("Failed<br />");
    break;
    default:
        document.write("Invalid Grade<br />");
}
document.write("exit");

var i;
for(i=0;i<3;i++){
    console.log(i);
}
var count;
document.write("<br />Starting Loop" + "<br />");
for(count=0;count<10;count++){
    document.write("Current Count:" +count);
    document.write("<br />");
}
document.write("Loop Stopped");
// document.write(my);


for(var i=0;i<100;i++){
    if(i%2==0){
        document.write(" "+i+"is even number"+ " ");
    }
    else{
        document.write(" "+ i+"is odd number"+ " ");
    }
}

var arr=["A","B","C"]
for(var i=0;i<arr.length;i++){
    console.log("The member of array in index "+i+" is "+arr[i]);
}

var cnt=0;
console.log("Starting Loop ");
while(cnt<10){
    console.log("Current Count: "+ cnt);
    cnt++;
}

console.log("LOOP STOPPED");


function oclick(){
    alert("Hello World");
}
function sayHello(name,age){
    console.log(name + " is " + age +" years old");

}
function addition(a,b){
    console.log(a+b);
    document.write(a+b);

}
addition(10,20);

document.write("###############################################");

var res=mul(12,30);
function mul(x,y){
    return x*y;
}
document.write(res);

console.log("############################");

// ARROW FUNCTIONS

//! METHOD 1 
var add2=(a,b)=>{
    console.log(a+b);
};
add2(20,30);

//! METHOD 2
var add3=(x,y)=>console.log(x+y);
add3(100,400);

//* by default +(addition) is concatenation of string
//* 10+10=20   10+"10"="1010"

function my2(){
    var x=5+5;
    var y="5"+5;
    var z="HEllo"+5;
    var demoP=document.getElementById("demo10");
    demoP.innerHTML=x+"<br>"+y+"<br>"+z;
}

//* {=} assignment  {==} comparison {===} compare type
var arrays=[
1,
"meera maam",
true,
{
    name:"anurag",
    age:20
},
function(name){
    console.log(name);
},
"Abhishek Bacchan","amitabh","bacchan"

]
console.log(arrays);











