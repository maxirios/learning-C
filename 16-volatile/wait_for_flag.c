int wait_for_flag(int *flag) {
	while (*flag == 0) {
	}
	return 1;
}
