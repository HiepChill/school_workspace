function Header(){
    return (
        <>
             <header className='header-page'>
                <div className='container'>
                    <div className='row'>
                        <div className=' col'>
                            <img src={process.env.PUBLIC_URL + '/image/logosp.png'} alt=''/>  
                        </div>
                        <div className='col'>
                            <div className='d-flex justify-content-end'>
                                <div className="mt-4">
                                    <div className='text-end pb-2'>
                                        <span className="border-bottom border-primary">
                                            <a href='' className="text-decoration-none text-dark mr-3">Login &nbsp; &nbsp;</a>
                                            <a href='#' className="text-decoration-none"><img src={process.env.PUBLIC_URL + '/image/vi.jpg'} alt=''/></a>
                                            <a href='#' className="text-decoration-none">&nbsp;<img src={process.env.PUBLIC_URL + '/image/en.jpg'} alt=''/> </a>
                                        </span>
                                    </div>
                                    <form className='d-flex mt-2'>
                                        <div className='border '>
                                            <button className='border-0 button-form-1 ' disabled><img width='15px' src={process.env.PUBLIC_URL + '/image/search.svg'} alt=''/></button>
                                            <input className='border-0' type='text' placeholder='Tìm kiếm'/>
                                            <button className='border-0 button-form-2'>Tìm</button>
                                        </div>
                                    </form>
                                </div>  
                            </div>
                        </div>
                    </div>
                </div>
            </header>
        </>
    )
}
export default Header