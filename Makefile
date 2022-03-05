postfix:
	@$(CC) main.c -o $@

test:
	@$(CC) -DTEST_BUILD main.c -o $@
	@./$@

clean:
	@rm -f postfix
