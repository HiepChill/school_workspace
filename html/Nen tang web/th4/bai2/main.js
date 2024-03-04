$('#change').click(() => {
    var color = $('input[name = color]:checked').val();
    $("#box").css('background-color' , color);
    if(color == "red"){
        document.getElementById("content").innerHTML = "Bạn đã chọn red radio button";
    }
    if(color == "blue"){
        document.getElementById("content").innerHTML = "Bạn đã chọn blue radio button";
    }
    if(color == "green"){
        document.getElementById("content").innerHTML = "Bạn đã chọn green radio button";
    }
})