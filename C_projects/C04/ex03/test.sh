GREEN='\033[0;32m'
NC='\033[0m'

cc -Wall -Wextra -Werror ft_atoi.c
echo "$GREEN\n====== RESULT ======\n$NC"
./a.out
rm a.out | cat -e
echo "$GREEN\n\n==== NORMINETTE ====\n$NC"
norminette -R CheckForbiddenSourceHeader
echo ""
