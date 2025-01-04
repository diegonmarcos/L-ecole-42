


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define PRINT_COMMANDS 0

// Push a: Take the first element from b and put it on top of a
void    ft_pa(int *stack_a, int *stack_b, int *size_a, int *size_b, int *instruction_count)
{
    int i;

    if (*size_b <= 0)
        return; // Nothing to push

    // Shift elements in stack_a up to make space
    for (i = *size_a; i > 0; i--)
        stack_a[i] = stack_a[i - 1];

    // Move the top element from stack_b to stack_a
    stack_a[0] = stack_b[0];

    // Shift elements in stack_b down
    for (i = 0; i < *size_b - 1; i++)
        stack_b[i] = stack_b[i + 1];

    (*size_a)++;
    (*size_b)--;

	if(PRINT_COMMANDS)
    	write(1, "pa\n", 3); // Output the instruction
	(*instruction_count)++;
}

// Push b: Take the first element from a and put it on top of b
void    ft_pb(int *stack_a, int *stack_b, int *size_a, int *size_b, int *instruction_count)
{
    int i;

    if (*size_a <= 0)
        return; // Nothing to push

    // Shift elements in stack_b up to make space
    for (i = *size_b; i > 0; i--)
        stack_b[i] = stack_b[i - 1];

    // Move the top element from stack_a to stack_b
    stack_b[0] = stack_a[0];

    // Shift elements in stack_a down
    for (i = 0; i < *size_a - 1; i++)
        stack_a[i] = stack_a[i + 1];

    (*size_a)--;
    (*size_b)++;

	if(PRINT_COMMANDS)
    	write(1, "pb\n", 3); // Output the instruction
	(*instruction_count)++;
}

// Rotate a: Shift up all elements of stack a by 1
void    ft_ra(int *stack_a, int size_a, int *instruction_count)
{
    int i;
    int temp;

    if (size_a <= 1)
        return; // Nothing to rotate

    temp = stack_a[0]; // Store the first element

    // Shift elements up
    for (i = 0; i < size_a - 1; i++)
        stack_a[i] = stack_a[i + 1];

    stack_a[size_a - 1] = temp; // Place the first element at the end

    if(PRINT_COMMANDS)
		write(1, "ra\n", 3);
	(*instruction_count)++;
}
void    radix_sort(int *stack_a, int *stack_b, int size_a, int size_b)
{
    int max_num = size_a - 1;
    int max_bits = 0;
    int i, j;
    int original_size_a = size_a;
	int instruction_count = 0;

	// Find the actual maximum number
    for (i = 1; i < size_a; i++) {
        if (stack_a[i] > max_num) {
            max_num = stack_a[i];
        }
    }

    // Find the maximum number of bits required
    while ((max_num >> max_bits) != 0)
        max_bits++;

    for (i = 0; i < max_bits; i++)
    {
        for (j = 0; j < original_size_a; j++) // Use original_size_a here
        {
            if (((stack_a[0] >> i) & 1) == 0)
                ft_pb(stack_a, stack_b, &size_a, &size_b, &instruction_count);
            else
                ft_ra(stack_a, size_a, &instruction_count);
        }
        while (size_b > 0)
            ft_pa(stack_a, stack_b, &size_a, &size_b, &instruction_count);
    }
	printf("\n##Instructions:\n%d (700)\n", instruction_count);
}

int main (){
    int stack_a[] = {8101, 7461, 5207, 2263, 794, 1986, 234, 1825, 7635, 330, 9009, 8744, 1721, 9822, 1356, 3982, 5916, 4214, 5722, 8575, 4015, 5647, 5194, 2910, 5441, 9998, 1054, 8931, 7322, 2270, 4027, 8712, 2772, 5688, 5088, 3425, 5884, 4559, 5279, 9383, 3755, 3747, 5621, 539, 6543, 2580, 1945, 5892, 9243, 5835, 3561, 2104, 2548, 1099, 6267, 8366, 8588, 1129, 8593, 9925, 6967, 8993, 8034, 151, 5564, 5463, 3740, 5083, 7893, 8623, 7500, 9025, 4179, 9577, 3167, 591, 4492, 715, 3737, 5128, 6362, 1933, 4369, 7252, 1954, 9354, 7711, 861, 7532, 2095, 8711, 1357, 334, 6942, 6878, 1009, 4395, 5846, 1695, 1859};
	int stack_b [100];
	int stack_a_size = 100;
	
	printf("##The Array\n");
	printf("Size:%d\n", stack_a_size);
	for(int i = 0; i < 100; i++){
		printf("%d,", stack_a[i]);
	}
	printf("\n");

	radix_sort(stack_a, stack_b, stack_a_size, 0);
	
	printf("\n##The Sorted\n");
	for(int i = 0; i < 100; i++){
		printf("%d,", stack_a[i]);
	}
	return 0;
}