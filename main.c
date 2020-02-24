#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  color c;

  clear_screen(s);

  c.red = 255;
  c.green = 255;
  c.blue = 255;

  struct matrix *m1;
  struct matrix *m2;
  struct matrix *m3;
  struct matrix *m4;

  m1 = new_matrix(4, 4);
  m2 = new_matrix(4, 4);

  printf("Testing add_edge. Adding (1, 2, 3), (4, 5, 6) m2 =\n");
  add_edge(m2, 1, 2, 3, 4, 5, 6);
  print_matrix(m2);

  printf("\nTesting ident. m1 =\n");
  ident(m1);
  print_matrix(m1);

  printf("\nTesting Matrix mult. m1 =\n");
  matrix_mult(m1, m2);
  print_matrix(m2);

  printf("\nTesting Matrix mult. m1 =\n");
  m1 = new_matrix(4, 4);
  add_edge(m1, 1, 2, 3, 4, 5, 6);
  add_edge(m1, 7, 8, 9, 10, 11, 12);
  print_matrix(m1);

  printf("\nTesting Matrix mult. m1 * m2 =\n");
  matrix_mult(m1, m2);
  print_matrix(m2);

  m3 = new_matrix(4, 4);
  add_edge(m3, 10, 100, 0, 28, 100, 0);
  add_edge(m3, 28, 100, 0, 25, 108, 0);
  add_edge(m3, 25, 108, 0, 29, 111, 0);
  add_edge(m3, 29, 111, 0, 32, 102, 0);
  add_edge(m3, 32, 102, 0, 46, 102, 0);
  add_edge(m3, 46, 102, 0, 65, 105, 0);
  add_edge(m3, 65, 105, 0, 74, 106, 0);
  add_edge(m3, 74, 106, 0, 83, 108, 0);
  add_edge(m3, 83, 108, 0, 101, 115, 0);
  add_edge(m3, 101, 115, 0, 98, 130, 0);
  add_edge(m3, 98, 130, 0, 91, 152, 0);
  add_edge(m3, 91, 152, 0, 91, 178, 0);
  add_edge(m3, 91, 178, 0, 95, 191, 0);
  add_edge(m3, 95, 191, 0, 101, 197, 0);
  add_edge(m3, 101, 197, 0, 115, 197, 0);
  add_edge(m3, 115, 197, 0, 127, 210, 0);
  add_edge(m3, 127, 210, 0, 140, 218, 0);
  add_edge(m3, 140, 218, 0, 153, 210, 0);
  add_edge(m3, 153, 210, 0, 165, 229, 0);
  add_edge(m3, 165, 229, 0, 165, 250, 0);
  add_edge(m3, 165, 250, 0, 159, 261, 0);
  add_edge(m3, 155, 215, 0, 155, 228, 0);
  add_edge(m3, 155, 228, 0, 154, 228, 0);
  add_edge(m3, 154, 228, 0, 153, 238, 0);
  add_edge(m3, 153, 238, 0, 140, 242, 0);
  add_edge(m3, 156, 218, 0, 156, 226, 0);
  add_edge(m3, 156, 226, 0, 159, 236, 0);
  add_edge(m3, 159, 236, 0, 153, 243, 0);
  add_edge(m3, 154, 211, 0, 178, 233, 0);
  add_edge(m3, 178, 233, 0, 192, 238, 0);
  add_edge(m3, 153, 210, 0, 163, 204, 0);
  add_edge(m3, 163, 204, 0, 166, 190, 0);
  add_edge(m3, 166, 190, 0, 166, 177, 0);
  add_edge(m3, 166, 177, 0, 172, 167, 0);
  add_edge(m3, 172, 167, 0, 134, 115, 0);
  add_edge(m3, 134, 115, 0, 101, 115, 0);
  add_edge(m3, 134, 115, 0, 141, 101, 0);
  add_edge(m3, 141, 101, 0, 167, 93, 0);
  add_edge(m3, 167, 93, 0, 186, 89, 0);
  add_edge(m3, 186, 89, 0, 191, 86, 0);
  add_edge(m3, 191, 86, 0, 195, 91, 0);
  add_edge(m3, 195, 91, 0, 198, 89, 0);
  add_edge(m3, 198, 89, 0, 195, 83, 0);
  add_edge(m3, 195, 83, 0, 205, 80, 0);
  add_edge(m3, 205, 80, 0, 213, 79, 0);
  add_edge(m3, 213, 79, 0, 213, 76, 0);
  add_edge(m3, 213, 76, 0, 202, 76, 0);
  add_edge(m3, 202, 76, 0, 210, 70, 0);
  add_edge(m3, 210, 70, 0, 207, 67, 0);
  add_edge(m3, 207, 67, 0, 201, 72, 0);
  add_edge(m3, 201, 72, 0, 201, 64, 0);
  add_edge(m3, 201, 64, 0, 198, 64, 0);
  add_edge(m3, 198, 64, 0, 198, 76, 0);
  add_edge(m3, 198, 76, 0, 183, 83, 0);
  add_edge(m3, 183, 83, 0, 160, 90, 0);
  add_edge(m3, 160, 90, 0, 139, 98, 0);
  add_edge(m3, 141, 101, 0, 139, 98, 0);
  add_edge(m3, 139, 98, 0, 135, 83, 0);
  add_edge(m3, 135, 83, 0, 125, 80, 0);
  add_edge(m3, 135, 83, 0, 152, 76, 0);
  add_edge(m3, 125, 80, 0, 102, 76, 0);
  add_edge(m3, 102, 76, 0, 83, 83, 0);
  add_edge(m3, 152, 76, 0, 159, 65, 0);
  add_edge(m3, 159, 65, 0, 162, 38, 0);
  add_edge(m3, 159, 65, 0, 162, 38, 0);
  add_edge(m3, 162, 38, 0, 159, 25, 0);
  add_edge(m3, 159, 25, 0, 145, 12, 0);
  add_edge(m3, 145, 12, 0, 115, 9, 0);
  add_edge(m3, 115, 9, 0, 87, 14, 0);
  add_edge(m3, 87, 14, 0, 77, 15, 0);
  add_edge(m3, 77, 15, 0, 71, 24, 0);
  add_edge(m3, 71, 24, 0, 71, 70, 0);
  add_edge(m3, 71, 70, 0, 83, 83, 0);
  add_edge(m3, 83, 83, 0, 83, 108, 0);
  add_edge(m3, 83, 102, 0, 67, 102, 0);
  add_edge(m3, 67, 102, 0, 44, 98, 0);
  add_edge(m3, 44, 98, 0, 31, 95, 0);
  add_edge(m3, 31, 95, 0, 19, 83, 0);
  add_edge(m3, 19, 83, 0, 17, 85, 0);
  add_edge(m3, 17, 85, 0, 22, 91, 0);
  add_edge(m3, 22, 91, 0, 14, 89, 0);
  add_edge(m3, 14, 89, 0, 13, 92, 0);
  add_edge(m3, 13, 92, 0, 18, 95, 0);
  add_edge(m3, 18, 95, 0, 10, 100, 0);
  add_edge(m3, 103, 19, 0, 110, 19, 0);
  add_edge(m3, 110, 19, 0, 115, 23, 0);
  add_edge(m3, 115, 23, 0, 118, 31, 0);
  add_edge(m3, 118, 31, 0, 113, 38, 0);
  add_edge(m3, 113, 38, 0, 102, 37, 0);
  add_edge(m3, 102, 37, 0, 99, 31, 0);
  add_edge(m3, 99, 31, 0, 99, 25, 0);
  add_edge(m3, 99, 25, 0, 103, 19, 0);
  add_edge(m3, 95, 47, 0, 102, 47, 0);
  add_edge(m3, 102, 47, 0, 109, 51, 0);
  add_edge(m3, 109, 51, 0, 111, 57, 0);
  add_edge(m3, 111, 57, 0, 102, 66, 0);
  add_edge(m3, 102, 66, 0, 90, 57, 0);
  add_edge(m3, 90, 57, 0, 90, 50, 0);
  add_edge(m3, 90, 50, 0, 95, 47, 0);
  add_edge(m3, 102, 92, 0, 108, 92, 0);
  add_edge(m3, 108, 92, 0, 111, 95, 0);
  add_edge(m3, 111, 95, 0, 111, 103, 0);
  add_edge(m3, 111, 103, 0, 108, 108, 0);
  add_edge(m3, 108, 108, 0, 102, 108, 0);
  add_edge(m3, 102, 108, 0, 96, 101, 0);
  add_edge(m3, 96, 101, 0, 96, 96, 0);
  add_edge(m3, 96, 96, 0, 102, 92, 0);
  add_edge(m3, 96, 184, 0, 96, 173, 0);
  add_edge(m3, 96, 173, 0, 132, 153, 0);
  add_edge(m3, 132, 153, 0, 152, 158, 0);
  add_edge(m3, 152, 158, 0, 152, 168, 0);
  add_edge(m3, 152, 158, 0, 132, 142, 0);
  add_edge(m3, 132, 142, 0, 126, 142, 0);
  add_edge(m3, 126, 142, 0, 120, 140, 0);
  add_edge(m3, 120, 140, 0, 115, 144, 0);
  add_edge(m3, 115, 144, 0, 108, 146, 0);
  add_edge(m3, 108, 146, 0, 99, 158, 0);
  add_edge(m3, 99, 158, 0, 99, 171, 0);
  add_edge(m3, 109, 165, 0, 109, 159, 0);
  add_edge(m3, 109, 159, 0, 121, 153, 0);
  add_edge(m3, 121, 153, 0, 127, 156, 0);
  add_edge(m3, 108, 186, 0, 115, 178, 0);
  add_edge(m3, 115, 178, 0, 117, 178, 0);
  add_edge(m3, 117, 178, 0, 127, 175, 0);
  add_edge(m3, 127, 175, 0, 133, 178, 0);
  add_edge(m3, 133, 178, 0, 136, 185, 0);
  add_edge(m3, 136, 185, 0, 141, 179, 0);
  add_edge(m3, 141, 179, 0, 146, 179, 0);
  add_edge(m3, 146, 179, 0, 152, 184, 0);
  add_edge(m3, 152, 184, 0, 152, 191, 0);
  add_edge(m3, 152, 191, 0, 146, 196, 0);
  add_edge(m3, 146, 196, 0, 140, 191, 0);
  add_edge(m3, 140, 191, 0, 146, 189, 0);
  add_edge(m3, 146, 189, 0, 146, 184, 0);
  add_edge(m3, 146, 184, 0, 142, 182, 0);
  add_edge(m3, 142, 182, 0, 138, 184, 0);
  add_edge(m3, 138, 184, 0, 140, 191, 0);
  add_edge(m3, 140, 191, 0, 134, 204, 0);
  add_edge(m3, 134, 204, 0, 128, 204, 0);
  add_edge(m3, 128, 204, 0, 121, 197, 0);
  add_edge(m3, 121, 197, 0, 121, 191, 0);
  add_edge(m3, 130, 191, 0, 114, 191, 0);
  add_edge(m3, 114, 191, 0, 108, 186, 0);
  add_edge(m3, 130, 191, 0, 136, 186, 0);
  add_edge(m3, 130, 191, 0, 133, 193, 0);
  add_edge(m3, 133, 193, 0, 133, 195, 0);
  add_edge(m3, 133, 195, 0, 130, 197, 0);
  add_edge(m3, 130, 197, 0, 127, 197, 0);
  add_edge(m3, 127, 197, 0, 124, 193, 0);
  add_edge(m3, 124, 193, 0, 124, 191, 0);
  add_edge(m3, 130, 210, 0, 139, 210, 0);
  add_edge(m3, 139, 210, 0, 143, 207, 0);
  add_edge(m3, 149, 207, 0, 158, 197, 0);
  add_edge(m3, 158, 197, 0, 159, 194, 0);

  m4 = new_matrix(4, 4);
  ident(m4);
  m4->m[0][0] = 2;
  m4->m[1][1] = 2;
  m4->m[2][2] = 2;

  matrix_mult(m4, m3);



  draw_lines(m3, s, c);
  display(s);
  save_extension(s, "lines.png");
  save_ppm(s, "binary.ppm");
  save_ppm_ascii(s, "ascii.ppm");


  free_matrix( m1 );
  free_matrix( m2 );
  free_matrix(m3);
  free_matrix(m4);

}
