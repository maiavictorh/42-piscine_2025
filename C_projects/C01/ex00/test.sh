cc -Wall -Wextra -Werror ft_ft.c
echo "\n====== RESULT ======"
./a.out
rm a.out | cat -e
echo "\n==== NORMINETTE ===="
norminette -R CheckForbiddenSourceHeader
echo ""
