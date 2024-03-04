$(document).ready(function()
{
    $("#myForm").validate({
        rules: {
            email: {
                required: true,
                email: true,
            },
            
            name: {
                required: true,
            
            },
        },
        messages: {
            email: {
                required: "Vui lòng nhập mail",
                email: "Nhập đúng định dạng email"
            },
            name: {
                required: "Vui lòng nhập mật khẩu",
              
            },
        },
        submitHandler: function(form) {
            alert('Bạn đã gửi liên hệ thành công. Chúng tôi sẽ sớm liên hệ lại với Bạn');
            form.submit();
        }
    });
});