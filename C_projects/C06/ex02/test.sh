GREEN='\033[0;32m'
NC='\033[0m'

cc -Wall -Wextra -Werror *.c
echo "$GREEN\n====== RESULT ======\n$NC"
./a.out test1 test2 test3 | cat -e
rm a.out
echo "$GREEN\n==== NORMINETTE ====\n$NC"
norminette -R CheckForbiddenSourceHeader
echo ""
