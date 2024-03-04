$(document).ready(function() {
  $('#myForm').validate({
    rules: {
      'name': {
        required: true
      }
    },
    messages: {
      'name': {
        required: "This field is required."
      }
    },

    submitHandler: function(form) {
      // Nếu tất cả các trường đều hợp lệ, gửi dữ liệu
      form.submit();
    }
  });
});
