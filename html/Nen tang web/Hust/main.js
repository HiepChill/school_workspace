window.onscroll = function() {
    var container = document.querySelector('.custom-gradient');
    var offset = container.offsetTop;
    
    if (window.pageYOffset > offset) {
      container.classList.add('sticky');
    } else {
      container.classList.remove('sticky');
    }
}

$(document).ready(function(){
  $('.image-slider').slick({
    infinite: true,
    slidesToShow: 3,
    slidesToScroll: 3,
    // autoplay: true,
    // autoplaySpeed: 2000,
    // dots: true,
  });
});


