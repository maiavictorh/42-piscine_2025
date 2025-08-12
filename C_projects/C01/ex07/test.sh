cc -Wall -Wextra -Werror ft_rev_int_tab.c
echo "\n====== RESULT ======"
./a.out
rm a.out | cat -e
echo "\n==== NORMINETTE ===="
norminette -R CheckForbiddenSourceHeader
echo ""
