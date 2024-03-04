$("#main").click(()=>{
    var lc = $('input[name=lc]:checked').val();
    $("#box").css('background-color',lc);
    if(lc == "red"){
        document.getElementById("content").innerHTML = "Màu vừa chọn là màu đỏ";
    }
    if(lc == "blue"){
        document.getElementById("content").innerHTML = "Màu vừa chọn là màu xanh nước biển";
    }
    if(lc == "green"){
        document.getElementById("content").innerHTML = "Màu vừa chọn là màu xanh lá cây";
    }
});