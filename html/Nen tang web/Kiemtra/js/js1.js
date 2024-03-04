
var sumbit = document.getElementById("submit");
submit.addEventListener("click",function(){
    var name = document.getElementById("name").value;
    var email = document.getElementById("email").value;
    var phone = document.getElementById("phone").value;
    var note = document.getElementById("note").value;
    if(name != "" && email != "" && phone != "" && note != ""){
        alert("Bạn đã liên hệ thành công");
        // console.log("Bạn đã liên hệ thành công");
    }
    else{
        alert("Vui lòng nhập thông tin");
        // console.log("Vui lòng nhập thông tin");
    }
});
$('form').mousedown(function(){
    
        $("#name").keyup(function(event){
            var name = $(this).val();
            if(/\d/.test(name) || name == ""){
                event.preventDefault();
                $("#tb1").show();
            }
            else{
                $("#tb1").hide();
            }
        });
        $("#email").keyup(function(event){
            var email = $(this).val();
            var check = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
            if(!check.test(email) || email == ""){
                // console.log(email);
                event.preventDefault();
                $("#tb2").show();
            }
            else{
                $("#tb2").hide();
            }
        });
        $("#phone").keyup(function(event){
            var phone = $(this).val();
            if(/\d/.test(phone) == "false" || phone.length != 10){
                // console.log(phone);
                event.preventDefault();
                $("#tb3").show();
            }
            else{
                $("#tb3").hide();
            }
        });
        $("#note").keyup(function(event){
            var note = $(this).val();
            if(note.length > 300){
                event.preventDefault();
                document.getElementById("count").innerHTML = `${note.length}/300`;
                $("#tb4").show();
            }else{
                $("#tb4").hide();
                document.getElementById("note").innerHTML = note;
                document.getElementById("count").innerHTML = `${note.length}/300`;
            }
        });
        
    });