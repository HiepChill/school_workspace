def danh_gia_sv( n ):
    if(n < 3.5):
        print('Xep loai yeu')
    else:
        if(n < 5):
            print('Xep loai kem')
        else:
            if(n < 6.5):
                print('Xep loai trung binh')
            else: 
                if(n < 8):
                    print('Xep loai kha')
                else:   
                    if(n < 9):
                        print('Xep loai gioi')
                    else:
                        print('Xep loai xuat sac')
diem = float( input( 'Nhap diem: '))
danh_gia_sv(diem)