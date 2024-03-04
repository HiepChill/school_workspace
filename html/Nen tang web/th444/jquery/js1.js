$('#menu li a').on('click', function(valid){
    valid.preventDefault();
    var data = $(this).attr('href');
    // console.log(data);
    var form = $("#Myframe");
    form.attr('src',data);
    // console.log(form);
})