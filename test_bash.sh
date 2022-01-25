#!/bin/bash
make &>/dev/null

RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"

if [ $1 ==  "1" ]
then
    ./my_ls > my_result.txt
    ls | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS SIMPLE OK${ENDCOLOR}"
    else
        echo "$my_reult" 
        echo "$the_reult"
        echo -e "${RED}MY_LS SIMPLE KO${ENDCOLOR}"
        exit 1
    fi
    exit 0
fi

if [ $1 ==  "2" ]
    then
    ./my_ls include lib > my_result.txt
    ls include lib | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS WITH FOLDER OK${ENDCOLOR}"
    else
        echo -e "${RED}MY_LS WITH FOLDER KO${ENDCOLOR}"
        return 1
    fi
fi

# ./my_ls -l include > my_result.txt
# ls -l include | cat > the_result.txt

# the_reult="$(sort the_result.txt)"
# my_reult="$(sort my_result.txt)"

# #wc -l the_result.txt
# #wc -l my_result.txt

# if [ "$wc -l the_result.txt" == "$wc -l my_result.txt" ]
# then
#     echo -e "${GREEN}MY_LS -L WITH FOLDER OK${ENDCOLOR}"
# else
#     echo -e "${RED}MY_LS -L WITH FOLDER KO${ENDCOLOR}"
#     return 1
# fi

if [ $1 ==  "3" ]
    then
    ./my_ls include lib Makefile > my_result.txt
    ls include lib Makefile | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS SIMPLE WITH FOLDER OK${ENDCOLOR}"
    else
        echo -e "${RED}MY_LS SIMPLE WITH FOLDER KO${ENDCOLOR}"
        return 1
    fi
fi

if [ $1 ==  "4" ]
    then
    ./my_ls include Makefile lib > my_result.txt
    ls include Makefile lib | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS SIMPLE WITH SOME FOLDER OK${ENDCOLOR}"
    else
        echo -e "${RED}MY_LS SIMPLE WITH SOME FOLDER KO${ENDCOLOR}"
        return 1
    fi
fi

if [ $1 ==  "5" ]
    then
    ./my_ls Makefile lib > my_result.txt
    ls Makefile lib | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS SIMPLE WITH FOLDER && FILE OK${ENDCOLOR}"
    else
        echo -e "${RED}MY_LS SIMPLE WITH FOLDER && FILE KO${ENDCOLOR}"
        return 1
    fi
fi

# ./my_ls -l > my_result.txt
# ls -l | cat > the_result.txt

# the_reult="$(sort the_result.txt)"
# my_reult="$(sort my_result.txt)"

# if [ "$my_reult" == "$the_reult" ]
# then
#     echo -e "${GREEN}MY_LS -L SIMPLE OK${ENDCOLOR}"
# else
#     echo -e "${RED}MY_LS -L SIMPLE KO${ENDCOLOR}"
# fi

# ./my_ls -R > my_result.txt
# ls -R | cat > the_result.txt

# the_reult="$(sort the_result.txt)"
# my_reult="$(sort my_result.txt)"

# if [ "$my_reult" == "$the_reult" ]
# then
#     echo -e "${GREEN}MY_LS -R OK${ENDCOLOR}"
# else
#     echo -e "${RED}MY_LS -R KO${ENDCOLOR}"
# fi

if [ $1 ==  "6" ]
    then
    ./my_ls -d include > my_result.txt
    ls -d include | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS -D WITH FOLDER OK${ENDCOLOR}"
    else
        echo -e "${RED}MY_LS -D WITH FOLDER KO${ENDCOLOR}"
    fi
fi

if [ $1 ==  "7" ]
    then
    ./my_ls -r > my_result.txt
    ls -r | cat > the_result.txt

    the_reult="$(sort the_result.txt)"
    my_reult="$(sort my_result.txt)"

    if [ "$my_reult" == "$the_reult" ]
    then
        echo -e "${GREEN}MY_LS -r SIMPLE OK${ENDCOLOR}"
    else
        echo -e "${RED}MY_LS -r SIMPLE KO${ENDCOLOR}"
    fi
fi

# ./my_ls -r src include > my_result.txt
# ls -r src include | cat > the_result.txt

# the_reult="$(sort the_result.txt)"
# my_reult="$(sort my_result.txt)"

# if [ "$my_reult" == "$the_reult" ]
# then
#     echo -e "${GREEN}MY_LS -r WITH FOLDER OK${ENDCOLOR}"
# else
#     echo -e "${RED}MY_LS -r WITH FOLDER KO${ENDCOLOR}"
# fi