cc -Wall -Wextra -Werror main.c ft_putchar.c rush04.c
echo "================ RESULT ================\n"
./a.out
echo "\n============== NORMINETTE ==============\n"
rm a.out
norminette -R CheckForbiddenSourceHeader rush04.c
echo ""