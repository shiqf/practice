:r !ls *.c
:%s/^.\+$/echo >> test.mk; echo \/\\* & \/\\* >> test.mk; cat & >> test.mk/g
:%s/^$/echo '```c' > test.mk/g
:$norm o
:%s/^$/echo '```' >> test.mk/g
