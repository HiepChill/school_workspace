

function Navigation (){
   return(
    <>
        <div className="container nav-menu1 pt-2 px-0 ps-0">
            <div>
                <a><img width="30px" src={process.env.PUBLIC_URL + '/image/home.svg'} alt=''/></a>
                <a >
                    GIỚI THIỆU 
                    <div className="drop-down">
                        <p>fdsaf</p>
                    </div>
                </a>
                <a >TIN TỨC VÀ THÔNG BÁO</a>
                <a >TUYỂN SINH</a>
                <a >ĐÀO TẠO</a>
                <a >NGHIÊN CỨU</a>
                <a >ĐỐI NGOẠI</a>
                <a >VĂN BẢN</a>
                <a >SINH VIÊN</a>
                <a >TIN NỘI BỘ</a>
                <a id="last">LIÊN HỆ</a>
            </div>
            <img width='100%' src={process.env.PUBLIC_URL + '/image/thuyloi.jpg'} alt=''/>
        </div>
        <div className="container">
            
        </div>
    </>
   )
}
export default Navigation