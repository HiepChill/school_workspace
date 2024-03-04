// alert('Hello World !!!'); //alert thông báo để in ra trên màn hình
// var fullName = 'Hiệp Chu';//var là biến mỗi lần khai báo biến phải dùng var

// console.log(fullName); //hàm console để hiện những thứ trong bảng console và sử dụng dấu '.' để truy cập
// document.write();
// confirm('Xác nhận bạn là Hiệp!'); //dùng để xác nhận khi truy cập vào 

// prompt('Xác nhận bạn là hiệp!');//giống như confirm nma hàm này có thể nhập đc

// setTimeout(function() { //setTimeout dùng để chạy một đoạn code sau 1 khoảng thời gian chạy 1 lần duy nhất    alert('Hello')
// }, 1000); //thời gian đc tính = mili giây

// setInterval(function() { //chạy 1 đoạn code theo chu kì lặp đi lặp lại
//     console.log('Hiệp Chu')
// }, 1000);

// /**
//  * You can use an alert box to display data:
//  * The document.write() method should only be used for testing.
//  * For debugging purposes, you can call the console.log() method in the browser to display data.
//  * JavaScript does not have any print object or print methods. You cannot access output devices from JavaScript.The only exception is that you can call the window.print() method in the browser to print the content of the current window.
//  * 
//  */

// var age = 19;
// window.print(age);

// var a = 1;
// var b = 2;
// if (a < b){
//     alert('Ga')
// }

let a = 2;
let b = 10;
let c = a - b;
document.getElementById('demo').innerHTML = c;