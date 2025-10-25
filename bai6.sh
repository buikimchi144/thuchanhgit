#!/bin/bash 
read -p "nhập họ : " ho 
read -p " nhập tên : " ten
my_ho ="Ly"
my_ten="khadi"
if [ "$ho" = "$my_ho" ]  && [ "$ten" = "$my_ten" ]; then 
    echo " họ và tên trùng khớp " 
else 
    echo " họ và tên không trùng khớp " 
fi