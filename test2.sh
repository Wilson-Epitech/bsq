#!/bin/bash

make
make re

touch rapport.txt
valgrind -s --log-file=rapport.txt ./bsq src/mouli_maps/intermediate_map_1000_1000 > a

passed_tests=0
faild_tests=0
total_tests=0
for i in src/mouli_maps/*
do
    echo "$(basename $i)"
    ./bsq $i > a
    cat src/mouli_maps_solved/`echo "$(basename $i)"` > b
    a=$(diff a b -qs)
    if [[ $a == *differ ]]
    then
	echo -e "\033[41mKO\033[0m"
	echo ""
	faild_tests=$((faild_tests+1))
    else
	echo -e "\033[42m\033[30mOK\033[0m"
	echo ""
	passed_tests=$((passed_tests+1))
    fi
    total_tests=$((total_tests+1))
    rm a b
done
echo "---------------------------------------------------"
echo ""
echo -e "\033[42m\033[30mtest passer \033[0m"
echo -e "\033[42m\033[30m"$passed_tests" \033[0m"
echo ""
echo -e "\033[41mtest echouer \033[0m"
echo -e "\033[41m"$faild_tests" \033[0m"
echo ""
echo "total de tests"
echo -e $total_tests" \033[0m"
echo ""
total_tests=$((passed_tests * 100 / total_tests))

echo -e "\033[42m\033[30mpourcentage de test passer \033[0m"
echo -e "\033[42m\033[30m"$total_tests"% \033[0m"

make fclean
coding-style . .
cat coding-style-reports.log
rm -rf coding-style-reports.log
