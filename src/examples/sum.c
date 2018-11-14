#include <stdio.h>
#include <syscall.h>
/*int pibonacci(const char *argv);
int sum_of_four_integers(const char *argv1, const char *argv2, const char *argv3, const char *argv4);

int pibonacci(const char *argv) {
	int n;
	int res = 1, i;
	int tmp1 = 1, tmp2 = 1;
	n = atoi(argv);
	if (n == 1 || n == 2)
		return res;
	else {
		tmp1 = tmp2 = 1;
		for (i = 0; i < n - 2; i++) {
			res = tmp1 + tmp2;
			tmp2 = tmp1;
			tmp1 = res;
			return res;
		}
	}
}




int sum_of_four_integers(const char *argv1, const char *argv2, const char *argv3, const char *argv4) {
	int a, b, c, d;
	a = atoi(argv1);
	b = atoi(argv2);
	c = atoi(argv3);
	d = atoi(argv4);
	return a + b + c + d;
}*/
int main(int argc, char **argv)
{
	/*int sum_of_four_res, pibo_res;
	int n[4];
	int i;

	for(i = 1 ; i < argc ; i++){
		n[i-1] = *argv[i]-48;
	}

	sum_of_four_res = sum_of_four_integers(n[0], n[1], n[2], n[3]);
	pibo_res = pibonacci(n[0]);

	printf("%d %d\n", pibo_res, sum_of_four_res);*/
    int *my_pointer = argv;
    if(argc == 5){
        printf("%d\n",pibonacci((argv[1])));
        printf("%d\n",sum(argv[1],argv[2],argv[3],argv[4]));
    }

	return EXIT_SUCCESS;
}

