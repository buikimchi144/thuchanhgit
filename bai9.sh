#!/bin/bash

# Hiển thị menu
while true; do
    echo "Cộng (+)"
    echo "Trừ (-)"
    echo "Nhân (*)"
    echo "Chia (/)"
    echo "Kết thúc (q)"

    # Yêu cầu người dùng chọn phép tính
    echo -n "Bạn chọn phép tính nào (+, -, *, /, q) ? "
    read choice

    # Kiểm tra nếu người dùng muốn thoát
    if [ "$choice" == "q" ]; then
        echo "Cảm ơn bạn đã sử dụng chương trình. Tạm biệt!"
        break
    fi

    # Yêu cầu người dùng nhập hai số nguyên
    echo -n "Nhập số thứ nhất: "
    read num1
    echo -n "Nhập số thứ hai: "
    read num2

    # Thực hiện phép toán dựa trên lựa chọn
    case $choice in
        +)
            result=$((num1 + num2))
            echo "Kết quả: $num1 + $num2 = $result";;
        -)
            result=$((num1 - num2))
            echo "Kết quả: $num1 - $num2 = $result";;
        \*)
            result=$((num1 * num2))
            echo "Kết quả: $num1 * $num2 = $result";;
        /)
            if [ $num2 -ne 0 ]; then
                result=$((num1 / num2))
                echo "Kết quả: $num1 / $num2 = $result"
            else
                echo "Lỗi: Không thể chia cho 0"
            fi;;
        *)
            echo "Lựa chọn không hợp lệ";;
    esac

done