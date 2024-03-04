// Lớp đầu tiên (A)
var positionLayerA = 0;
function moveLayerA() {
  var layerA = document.querySelector(".layerA");
  positionLayerA += 1;
  layerA.style.left = positionLayerA + "px";
  if (positionLayerA === window.innerWidth){
    positionLayerA = -300;
  }
}
setInterval(moveLayerA, 10);

// Lớp thứ hai (B)
var positionLayerB = 0;
function moveLayerB() {
  var layerB = document.querySelector(".layerB");
  positionLayerB += 1;
  layerB.style.top = positionLayerB + "px";
  if (positionLayerB === window.innerHeight){
    positionLayerB = -300;
  }
}
setInterval(moveLayerB, 10);
