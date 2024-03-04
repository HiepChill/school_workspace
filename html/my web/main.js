$(document).ready(function()
{
    $("#myForm").validate({
        rules: {
            email: {
                required: true,
                email: true,
            },
            
            password: {
                required: true,
                minlength: 8,
            },
        },
        messages: {
            email: {
                required: "Vui lòng nhập tên",
                email: "Nhập đúng định dạng email"
            },
            password: {
                required: "Vui lòng nhập mật khẩu",
                minlength: "Tối thiểu 8 kí tự"
            },
        },
        submitHandler: function(form) {
            // Nếu tất cả các trường đều hợp lệ, gửi dữ liệu
            alert('Success');
            form.submit();
        }
    });
});