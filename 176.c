176)
void encontrar_min_max(int *V, int n, int *min, int *max) {
  *min = V[0];
  *max = V[0];

  for (int i = 1; i < n; i++) {
    if (V[i] < *min) {
      *min = V[i];
    } else if (V[i] > *max) {
      *max = V[i];
    }
  }
}

int main() {
  int V[10] = {1, 5, 3, 2, 7, 9, 4, 6, 8, 0};
  int min, max;

  encontrar_min_max(V, 10, &min, &max);

  printf("Mínimo: %d\n", min);
  printf("Máximo: %d\n", max);

  return 0;
}




