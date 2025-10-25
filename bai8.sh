#!/bin/bash

# Hiển thị menu
while true; do
    echo "1. Cafe den"
    echo "2. Cafe da"
    echo "3. Cafe sua"
    echo "4. Cafe cao"
    echo "0. Thoat"

    # Yêu cầu người dùng chọn thức uống
    echo -n "Ban chon thuc uong nao (0-4) ? "
    read choice

    # In ra tên thức uống mà khách hàng vừa chọn
    case $choice in
        1)
            echo "Ban da chon Cafe den";;
        2)
            echo "Ban da chon Cafe da";;
        3)
            echo "Ban da chon Cafe sua";;
        4)
            echo "Ban da chon Cafe cao";;
        0)
            echo "Cam on ban da su dung chuong trinh. Tam biet!"
            break;;
        *)
            echo "Lua chon khong hop le";;
    esac

    echo "\nBan co muon tiep tuc chon khong? (y/n)"
    read continue_choice
    if [ "$continue_choice" != "y" ]; then
        echo "Cam on ban da su dung chuong trinh. Tam biet!"
        break
    fi

done