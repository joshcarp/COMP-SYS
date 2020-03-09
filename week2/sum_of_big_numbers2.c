#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<sort.h>

int comparator (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main()
{
    srand(time(NULL));

    // Generate data
    const unsigned arraySize = 32768;
    int data[arraySize];

    for (unsigned c = 0; c < arraySize; ++c)
        data[c] = rand() % 256;

    //sort_int_array(data, arraySize);

    // Test
    clock_t start = clock();
    long long sum = 0;

    for (unsigned i = 0; i < 100000; ++i)
    {
        // Primary loop
        for (unsigned c = 0; c < arraySize; ++c)
        {
            if (data[c] >= 128)
                sum += data[c];
        }
    }

    double elapsed_time = (double)(clock() - start) / CLOCKS_PER_SEC;

    printf("Elapsed Time = %f s\n", elapsed_time);
    printf("Sum = %lld\n", sum);

}
