var stt = 0;
function AddData(e)
{
    e.preventDefault();
    stt += 1;
    var rows = "";
    var name = document.getElementById("name").value;
    var img = document.getElementById("image").value;
    var branch = document.getElementById("brand").value;
    var price = document.getElementById("price").value;
    var mt = document.getElementById("mt").value;
    var contact = document.getElementById("contact").value;
    var phone = document.getElementById("phone_number").value;
    var mail = document.getElementById("mail").value;
    $('#name').val('');$('#image').val('');$('#brand').val('');$('#price').val('0');$('#mt').val('');$('#contact').val('');$('#phone_number').val('');$('#mail').val('');
    rows += "<tr><th>" + stt + "</th><th>" + img + "</th><th>" + name + "</th><th>" + branch + "</th><th>" + price + "</th><th>"  + contact + "</th><th>" + phone + "</th><th>" + mail + "</th></tr>";
    $(rows).appendTo("#list tbody");
}