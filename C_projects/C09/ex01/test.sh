GREEN='\033[0;32m'
NC='\033[0m'

cc -Wall -Wextra -Werror main.c -L. -lft
echo "$GREEN\n====== RESULT ======\n$NC"
./a.out
rm a.out
echo "$GREEN\n==== NORMINETTE ====\n$NC"
norminette -R CheckForbiddenSourceHeader
echo ""
