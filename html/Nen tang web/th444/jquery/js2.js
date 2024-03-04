// jQuery.validator.addMethod("laxEmail", function(value, element) {
//     // allow any non-whitespace characters as the host part
//     return this.optional( element ) || /^[a-zA-Z0-9.!#$%&'*+\/=?^_`{|}~-]+@(?:\S{1,63})$/.test( value );
//   }, 'Sai email rồi cha nội');
  
// var validate = $("#form").validate({
//     rules:{
//         name_car: "required",
//         car_type:"required",
//         price:"required",
//         lh:"required",
//         phone:{
//             required : true,
//             minlength: 10,
//             maxlength :10
//         },
//         email:{
//             required : true,
//             laxEmail:true
//         }
//     },
//     messages:{
//         name_car: "Vui lòng nhập tên xe",
//         car_type:"Vui  lòng nhập hãng xe",
//         price: "Vui lòng nhập giá tiền",
//         lh: "Vui lòng nhập người liên hệ",
//         phone:{
//             required: "Vui lòng nhập số điện  thoại",
//             minlength:  "Số điện thoại của bạn quá ngắn",
//             maxlength: "Số điện thoại quá dài"
//         },
//         email:{
//             required:  "Vui lòng nhập email",
//             laxEmail:'Sai email rồi cha nội'
//         }
//     }

// });

var count = 1;
function AddRow(){
    // if(validate.form()){
        var img = document.getElementById('img').value;
        var name_car = document.getElementById('name').value;
        var car_type = document.getElementById('car-type').value;
        var price = document.getElementById('price').value;
        var lh = document.getElementById('lh').value;
        var phone = document.getElementById('phone').value;
        var email = document.getElementById('email').value;

        

        var tbody = document.createElement('tbody');
        var tr = document.createElement('tr');
        var td1 = document.createElement('td');
        var td2 = document.createElement('td');
        var td3 = document.createElement('td');
        var td4 = document.createElement('td');
        var td5 = document.createElement('td');
        var td6 = document.createElement('td');
        var td7 = document.createElement('td');
        var td8 = document.createElement('td');
        var anh = document.createElement('img');

        anh.src = img;
        anh.setAttribute("width", "100%");
        anh.setAttribute("height","50px");


        td1.innerHTML = count++;
        td2.innerHTML = anh;
        td3.innerHTML = name_car;
        td4.innerHTML = car_type;
        td5.innerHTML = price;
        td6.innerHTML = lh;
        td7.innerHTML = phone;
        td8.innerHTML = email;
        

        var body  = document.getElementById('table')
        
        tr.appendChild(td1);
        tr.appendChild(anh);
        tr.appendChild(td3);
        tr.appendChild(td4);
        tr.appendChild(td5);
        tr.appendChild(td6);
        tr.appendChild(td7);
        tr.appendChild(td8);
        tbody.appendChild(tr);
        body.appendChild(tbody);
        // }
    

}

/// Lấy vị trí của  tr trong table
var index ;
$(document).on('click','tr',function(){
    var index_row = $(this).index('tr');
    index = index_row;
    // console.log(index);
});

var table = document.getElementById('table');

function DeleteRow(){
    if(confirm('Bạn chắc  chắn  muốn xóa chứ')){
        if(index == 0){
            index = 1;
        }
        table.deleteRow(index);
    }
    var row_count = table.rows;
    // console.log(row_count.length);

    //  Rest số thứ tự 
    for(var i = 1; i <  row_count.length ;i++)
    {
        var STT = row_count[i];
        STT.cells[0].innerHTML =  i;
    }
}
$(document).ready(function(){
    $(document).on('click', 'tr',function(){
        var content = table.rows[index];
        // console.log(table.rows[index]);
        //    var stt = content.cells[0].textContent;
        var img = content.querySelector('img').src;
        var Name = content.cells[1].textContent;
        var type = content.cells[2].textContent;
        var price = content.cells[3].textContent;
        var human = content.cells[4].textContent;
        var phone = content.cells[5].textContent;
        var email = content.cells[6].textContent;
       
        // console.log(stt);
        // console.log(img);
        // console.log(Name);
        // console.log(type);
        // console.log(price);
        // console.log(human);
        // console.log(phone);
        // console.log(email);
        
         document.getElementById('img').value = img;
         document.getElementById('name').value = Name;
         document.getElementById('car-type').value = type;
         document.getElementById('price').value = price;
         document.getElementById('lh').value = human;
         document.getElementById('phone').value = phone;
         document.getElementById('email').value = email;


    });

    // Search
    $('#search').on("keyup",function(){
        var s_value = $(this).val();
        // console.log(s_value);
        $('#table tbody tr').filter(function(){
            $(this).toggle($(this).text().toLowerCase().indexOf(s_value)>-1);
        });
    });

});
