#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// TODO: Add appropriate MPI include

// Fixed to keep the code simple
#define N (17*1024+2)  // Global matrix size (N x N)

// Use simple macro to mimic 2D matrix access
#define IDX(r, c) ((r) * N + (c))

#define is_edge(r,c) ( (r == 0) || (r == (N - 1)) || (c == 0) || (c == (N - 1)) )

// This is the actual head relaxation step
double jacobi_step(double* current, double* next) {
    double total_sum = 0.0;
    
    // TODO: We only own a subset of rows
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if ( is_edge(r,c) ) {
                next[IDX(r, c)] = 0.0;
            } else {
                // Average with neighbouring elements
                next[IDX(r, c)] = 0.25 * (current[IDX(r - 1, c)] + 
                                          current[IDX(r + 1, c)] + 
                                          current[IDX(r, c - 1)] + 
                                          current[IDX(r, c + 1)]);
            }
            total_sum += next[IDX(r, c)];
        }
    }
    return total_sum;
}

int main(int argc, char** argv) {
    // TODO: Initialize MPI

    // Allocate the buffers
    // We use a simple flat C array, and will use IDX macro for most accesses
    // TODO: We only own a subset of rows, and don't forget the ghost rows
    double* current = (double*)malloc(N * N * sizeof(double));
    double* next    = (double*)malloc(N * N * sizeof(double));

    if (current == NULL || next == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory.\n");
        return 1;
    }

    // Initialize data 
    // TODO: We only own a subset of rows, and don't forget the ghost rows
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            // Set fixed boundary conditions (0.0 at outer edges)
            if ( is_edge(r,c) ) {
                current[IDX(r, c)] = 0.0;
            } else {
                // Same deterministic math function for heat initialization
                current[IDX(r, c)] = 12.34*(sin((double)r / N * M_PI)+2.0) + 43.21*(sin((double)c / N * M_PI)+1.0);
            }
            next[IDX(r, c)] = 0.0; 
        }
    }

    // TODO: Only one process should print
    printf("Grid Dimensions: %d x %d\n", N, N);

    struct timespec start_real, end_real;
    // Start timing
    timespec_get(&start_real, TIME_UTC);

    // run for 9 steps
    double prev_avg;
    {
      double total_sum = jacobi_step(current, next);
      // TODO: The above only returns the local sum, you need to aggregate across processes
      double global_avg = total_sum / (N * N);
      // TODO: Only one process should print
      printf("Average Temperature: %f\n", global_avg);
      prev_avg = global_avg;
    }
    for (int i=0; i<4; i++) {
     {
      // TODO: Fetch the ghost rows
      double total_sum = jacobi_step(next, current);
      // TODO: The above only returns the local sum, you need to aggregate across processes
      double global_avg = total_sum / (N * N);
      // TODO: Only one process should print
      printf("Average Temperature: %f Change: %f\n", global_avg,global_avg-prev_avg);
      prev_avg = global_avg;
     }
     {
      // TODO: Fetch the ghost rows
      double total_sum = jacobi_step(current, next);
      // TODO: The above only returns the local sum, you need to aggregate across processes
      double global_avg = total_sum / (N * N);
      // TODO: Only one process should print
      printf("Average Temperature: %f Change: %f\n", global_avg,global_avg-prev_avg);
      prev_avg = global_avg;
     }
    }

    // End timing
    timespec_get(&end_real, TIME_UTC);

    double real_time = (end_real.tv_sec - start_real.tv_sec) +
                       (end_real.tv_nsec - start_real.tv_nsec) / 1e9;

    // Print results
    // TODO: Only one process should print
    printf("Total time:  %0.4f seconds\n", real_time);

    // Cleanup memory
    free(current);
    free(next);

    // TOOD: Finalize MPI

    return 0;
}

