cc -Wall -Wextra -Werror main.c ft_putchar.c rush02.c
echo "================ RESULT ================\n"
./a.out
echo "\n============== NORMINETTE ==============\n"
rm a.out
norminette -R CheckForbiddenSourceHeader rush02.c
echo ""