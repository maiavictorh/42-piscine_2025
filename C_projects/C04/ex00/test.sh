GREEN='\033[0;32m'
NC='\033[0m'

echo "$GREEN\n====== RESULT ======\n$NC"
cc -Wall -Wextra -Werror ft_strlen.c
./a.out
rm a.out | cat -e
echo "$GREEN\n\n==== NORMINETTE ====\n$NC"
norminette -R CheckForbiddenSourceHeader
echo ""
