#include "text.h"

/* Use to produce the following arrays
for (int i = 0; i < 128; i++){
		printf("bool f%02x [7] = {%d, %d, %d, %d, %d, %d, %d};\n", i, i & 1, (i & 2) >> 1, (i & 4) >> 2, (i & 8) >> 3, (i & 16) >> 4, (i & 32) >>  5, (i & 64) >> 6);
	}
*/

bool f00 [7] = {0, 0, 0, 0, 0, 0, 0};
bool f01 [7] = {1, 0, 0, 0, 0, 0, 0};
bool f02 [7] = {0, 1, 0, 0, 0, 0, 0};
bool f03 [7] = {1, 1, 0, 0, 0, 0, 0};
bool f04 [7] = {0, 0, 1, 0, 0, 0, 0};
bool f05 [7] = {1, 0, 1, 0, 0, 0, 0};
bool f06 [7] = {0, 1, 1, 0, 0, 0, 0};
bool f07 [7] = {1, 1, 1, 0, 0, 0, 0};
bool f08 [7] = {0, 0, 0, 1, 0, 0, 0};
bool f09 [7] = {1, 0, 0, 1, 0, 0, 0};
bool f0a [7] = {0, 1, 0, 1, 0, 0, 0};
bool f0b [7] = {1, 1, 0, 1, 0, 0, 0};
bool f0c [7] = {0, 0, 1, 1, 0, 0, 0};
bool f0d [7] = {1, 0, 1, 1, 0, 0, 0};
bool f0e [7] = {0, 1, 1, 1, 0, 0, 0};
bool f0f [7] = {1, 1, 1, 1, 0, 0, 0};
bool f10 [7] = {0, 0, 0, 0, 1, 0, 0};
bool f11 [7] = {1, 0, 0, 0, 1, 0, 0};
bool f12 [7] = {0, 1, 0, 0, 1, 0, 0};
bool f13 [7] = {1, 1, 0, 0, 1, 0, 0};
bool f14 [7] = {0, 0, 1, 0, 1, 0, 0};
bool f15 [7] = {1, 0, 1, 0, 1, 0, 0};
bool f16 [7] = {0, 1, 1, 0, 1, 0, 0};
bool f17 [7] = {1, 1, 1, 0, 1, 0, 0};
bool f18 [7] = {0, 0, 0, 1, 1, 0, 0};
bool f19 [7] = {1, 0, 0, 1, 1, 0, 0};
bool f1a [7] = {0, 1, 0, 1, 1, 0, 0};
bool f1b [7] = {1, 1, 0, 1, 1, 0, 0};
bool f1c [7] = {0, 0, 1, 1, 1, 0, 0};
bool f1d [7] = {1, 0, 1, 1, 1, 0, 0};
bool f1e [7] = {0, 1, 1, 1, 1, 0, 0};
bool f1f [7] = {1, 1, 1, 1, 1, 0, 0};
bool f20 [7] = {0, 0, 0, 0, 0, 1, 0};
bool f21 [7] = {1, 0, 0, 0, 0, 1, 0};
bool f22 [7] = {0, 1, 0, 0, 0, 1, 0};
bool f23 [7] = {1, 1, 0, 0, 0, 1, 0};
bool f24 [7] = {0, 0, 1, 0, 0, 1, 0};
bool f25 [7] = {1, 0, 1, 0, 0, 1, 0};
bool f26 [7] = {0, 1, 1, 0, 0, 1, 0};
bool f27 [7] = {1, 1, 1, 0, 0, 1, 0};
bool f28 [7] = {0, 0, 0, 1, 0, 1, 0};
bool f29 [7] = {1, 0, 0, 1, 0, 1, 0};
bool f2a [7] = {0, 1, 0, 1, 0, 1, 0};
bool f2b [7] = {1, 1, 0, 1, 0, 1, 0};
bool f2c [7] = {0, 0, 1, 1, 0, 1, 0};
bool f2d [7] = {1, 0, 1, 1, 0, 1, 0};
bool f2e [7] = {0, 1, 1, 1, 0, 1, 0};
bool f2f [7] = {1, 1, 1, 1, 0, 1, 0};
bool f30 [7] = {0, 0, 0, 0, 1, 1, 0};
bool f31 [7] = {1, 0, 0, 0, 1, 1, 0};
bool f32 [7] = {0, 1, 0, 0, 1, 1, 0};
bool f33 [7] = {1, 1, 0, 0, 1, 1, 0};
bool f34 [7] = {0, 0, 1, 0, 1, 1, 0};
bool f35 [7] = {1, 0, 1, 0, 1, 1, 0};
bool f36 [7] = {0, 1, 1, 0, 1, 1, 0};
bool f37 [7] = {1, 1, 1, 0, 1, 1, 0};
bool f38 [7] = {0, 0, 0, 1, 1, 1, 0};
bool f39 [7] = {1, 0, 0, 1, 1, 1, 0};
bool f3a [7] = {0, 1, 0, 1, 1, 1, 0};
bool f3b [7] = {1, 1, 0, 1, 1, 1, 0};
bool f3c [7] = {0, 0, 1, 1, 1, 1, 0};
bool f3d [7] = {1, 0, 1, 1, 1, 1, 0};
bool f3e [7] = {0, 1, 1, 1, 1, 1, 0};
bool f3f [7] = {1, 1, 1, 1, 1, 1, 0};
bool f40 [7] = {0, 0, 0, 0, 0, 0, 1};
bool f41 [7] = {1, 0, 0, 0, 0, 0, 1};
bool f42 [7] = {0, 1, 0, 0, 0, 0, 1};
bool f43 [7] = {1, 1, 0, 0, 0, 0, 1};
bool f44 [7] = {0, 0, 1, 0, 0, 0, 1};
bool f45 [7] = {1, 0, 1, 0, 0, 0, 1};
bool f46 [7] = {0, 1, 1, 0, 0, 0, 1};
bool f47 [7] = {1, 1, 1, 0, 0, 0, 1};
bool f48 [7] = {0, 0, 0, 1, 0, 0, 1};
bool f49 [7] = {1, 0, 0, 1, 0, 0, 1};
bool f4a [7] = {0, 1, 0, 1, 0, 0, 1};
bool f4b [7] = {1, 1, 0, 1, 0, 0, 1};
bool f4c [7] = {0, 0, 1, 1, 0, 0, 1};
bool f4d [7] = {1, 0, 1, 1, 0, 0, 1};
bool f4e [7] = {0, 1, 1, 1, 0, 0, 1};
bool f4f [7] = {1, 1, 1, 1, 0, 0, 1};
bool f50 [7] = {0, 0, 0, 0, 1, 0, 1};
bool f51 [7] = {1, 0, 0, 0, 1, 0, 1};
bool f52 [7] = {0, 1, 0, 0, 1, 0, 1};
bool f53 [7] = {1, 1, 0, 0, 1, 0, 1};
bool f54 [7] = {0, 0, 1, 0, 1, 0, 1};
bool f55 [7] = {1, 0, 1, 0, 1, 0, 1};
bool f56 [7] = {0, 1, 1, 0, 1, 0, 1};
bool f57 [7] = {1, 1, 1, 0, 1, 0, 1};
bool f58 [7] = {0, 0, 0, 1, 1, 0, 1};
bool f59 [7] = {1, 0, 0, 1, 1, 0, 1};
bool f5a [7] = {0, 1, 0, 1, 1, 0, 1};
bool f5b [7] = {1, 1, 0, 1, 1, 0, 1};
bool f5c [7] = {0, 0, 1, 1, 1, 0, 1};
bool f5d [7] = {1, 0, 1, 1, 1, 0, 1};
bool f5e [7] = {0, 1, 1, 1, 1, 0, 1};
bool f5f [7] = {1, 1, 1, 1, 1, 0, 1};
bool f60 [7] = {0, 0, 0, 0, 0, 1, 1};
bool f61 [7] = {1, 0, 0, 0, 0, 1, 1};
bool f62 [7] = {0, 1, 0, 0, 0, 1, 1};
bool f63 [7] = {1, 1, 0, 0, 0, 1, 1};
bool f64 [7] = {0, 0, 1, 0, 0, 1, 1};
bool f65 [7] = {1, 0, 1, 0, 0, 1, 1};
bool f66 [7] = {0, 1, 1, 0, 0, 1, 1};
bool f67 [7] = {1, 1, 1, 0, 0, 1, 1};
bool f68 [7] = {0, 0, 0, 1, 0, 1, 1};
bool f69 [7] = {1, 0, 0, 1, 0, 1, 1};
bool f6a [7] = {0, 1, 0, 1, 0, 1, 1};
bool f6b [7] = {1, 1, 0, 1, 0, 1, 1};
bool f6c [7] = {0, 0, 1, 1, 0, 1, 1};
bool f6d [7] = {1, 0, 1, 1, 0, 1, 1};
bool f6e [7] = {0, 1, 1, 1, 0, 1, 1};
bool f6f [7] = {1, 1, 1, 1, 0, 1, 1};
bool f70 [7] = {0, 0, 0, 0, 1, 1, 1};
bool f71 [7] = {1, 0, 0, 0, 1, 1, 1};
bool f72 [7] = {0, 1, 0, 0, 1, 1, 1};
bool f73 [7] = {1, 1, 0, 0, 1, 1, 1};
bool f74 [7] = {0, 0, 1, 0, 1, 1, 1};
bool f75 [7] = {1, 0, 1, 0, 1, 1, 1};
bool f76 [7] = {0, 1, 1, 0, 1, 1, 1};
bool f77 [7] = {1, 1, 1, 0, 1, 1, 1};
bool f78 [7] = {0, 0, 0, 1, 1, 1, 1};
bool f79 [7] = {1, 0, 0, 1, 1, 1, 1};
bool f7a [7] = {0, 1, 0, 1, 1, 1, 1};
bool f7b [7] = {1, 1, 0, 1, 1, 1, 1};
bool f7c [7] = {0, 0, 1, 1, 1, 1, 1};
bool f7d [7] = {1, 0, 1, 1, 1, 1, 1};
bool f7e [7] = {0, 1, 1, 1, 1, 1, 1};
bool f7f [7] = {1, 1, 1, 1, 1, 1, 1};

bool *matrix_a [5] = {f3f, f48, f3f, f00, f00};
bool *matrix_b [5] = {f7f, f49, f36, f00, f00};
bool *matrix_c [5] = {f3e, f41, f22, f00, f00};
bool *matrix_d [5] = {f7f, f41, f3e, f00, f00};
bool *matrix_e [5] = {f7f, f49, f49, f00, f00};
bool *matrix_f [5] = {f7f, f48, f48, f00, f00};
bool *matrix_g [5] = {f7f, f41, f45, f47, f00};
bool *matrix_h [5] = {f7f, f08, f7f, f00, f00};
bool *matrix_i [5] = {f41, f7f, f41, f00, f00};
bool *matrix_j [5] = {f62, f41, f7e, f00, f00};
bool *matrix_k [5] = {f7f, f08, f14, f63, f00};
bool *matrix_l [5] = {f7f, f01, f01, f00, f00};
bool *matrix_m [5] = {f7f, f20, f10, f20, f7f};
bool *matrix_n [5] = {f7f, f20, f1c, f02, f7f};
bool *matrix_o [5] = {f7f, f41, f7f, f00, f00};
bool *matrix_p [5] = {f7f, f50, f70, f00, f00};
bool *matrix_q [5] = {f7f, f41, f43, f7f, f00};
bool *matrix_r [5] = {f7f, f58, f77, f00, f00};
bool *matrix_s [5] = {f7b, f49, f6f, f00, f00};
bool *matrix_t [5] = {f40, f7f, f40, f00, f00};
bool *matrix_u [5] = {f7f, f01, f7f, f00, f00};
bool *matrix_v [5] = {f78, f07, f78, f00, f00};
bool *matrix_w [5] = {f7e, f01, f06, f01, f7e};
bool *matrix_x [5] = {f63, f1c, f63, f00, f00};
bool *matrix_y [5] = {f70, f1f, f70, f00, f00};
bool *matrix_z [5] = {f67, f49, f73, f00, f00};
bool *matrix_0 [5] = {f3e, f41, f41, f3e, f00};
bool *matrix_1 [5] = {f10, f20, f7f, f00, f00};
bool *matrix_2 [5] = {f67, f49, f71, f00, f00};
bool *matrix_3 [5] = {f6b, f49, f7f, f00, f00};
bool *matrix_4 [5] = {f78, f08, f1f, f00, f00};
bool *matrix_5 [5] = {f7b, f49, f4f, f00, f00};
bool *matrix_6 [5] = {f7f, f45, f07, f00, f00};
bool *matrix_7 [5] = {f60, f4f, f70, f00, f00};
bool *matrix_8 [5] = {f77, f49, f77, f00, f00};
bool *matrix_9 [5] = {f70, f50, f7f, f00, f00};
bool *matrix_plus [5] = {f08, f1c, f08, f00, f00};
bool *matrix_minus [5] = {f08, f08, f08, f00, f00};
bool *matrix_greater [5] = {f22, f14, f08, f00, f00};
bool *matrix_smaller [5] = {f08, f14, f22, f00, f00};
bool *matrix_eaquals [5] = {f14, f14, f14, f00, f00};
bool *matrix_slash [5] = {f07, f1c, f70, f00, f00};
bool *matrix_bracket_open [5] = {f3e, f41, f00, f00, f00};
bool *matrix_bracket_close [5] = {f41, f3e, f00, f00, f00};
bool *matrix_pipe [5] = {f7f, f00, f00, f00, f00};
bool *matrix_attentionmark [5] = {f7d, f00, f00, f00, f00};
bool *matrix_questionmark [5] = {f60, f5d, f70, f00, f00};
bool *matrix_dot [5] = {f03, f03, f00, f00, f00};
bool *matrix_comma [5] = {f01, f06, f00, f00, f00};
bool *matrix_colon [5] = {f0a, f00, f00, f00, f00};
bool *matrix_semicolon [5] = {f01, f0a, f00, f00, f00};
bool *matrix_underline [5] = {f01, f01, f01, f00, f00};
bool *matrix_quote [5] = {f70, f00, f00, f00, f00};
bool *matrix_space [5] = {f00, f00, f00, f00, f00};
bool *matrix_degree [5] = {f70, f50, f70, f00, f00};

struct character characters [127] = { 0 };

void init_text (){
  for (size_t i = 0; i < 5; i++) {
    characters['a'].matrix [i] = matrix_a[i];
    characters['b'].matrix [i] = matrix_b[i];
    characters['c'].matrix [i] = matrix_c[i];
    characters['d'].matrix [i] = matrix_d[i];
    characters['e'].matrix [i] = matrix_e[i];
    characters['f'].matrix [i] = matrix_f[i];
    characters['g'].matrix [i] = matrix_g[i];
    characters['h'].matrix [i] = matrix_h[i];
    characters['i'].matrix [i] = matrix_i[i];
    characters['j'].matrix [i] = matrix_j[i];
    characters['k'].matrix [i] = matrix_k[i];
    characters['l'].matrix [i] = matrix_l[i];
    characters['m'].matrix [i] = matrix_m[i];
    characters['n'].matrix [i] = matrix_n[i];
    characters['o'].matrix [i] = matrix_o[i];
    characters['p'].matrix [i] = matrix_p[i];
    characters['q'].matrix [i] = matrix_q[i];
    characters['r'].matrix [i] = matrix_r[i];
    characters['s'].matrix [i] = matrix_s[i];
    characters['t'].matrix [i] = matrix_t[i];
    characters['u'].matrix [i] = matrix_u[i];
    characters['v'].matrix [i] = matrix_v[i];
    characters['w'].matrix [i] = matrix_w[i];
    characters['x'].matrix [i] = matrix_x[i];
    characters['y'].matrix [i] = matrix_y[i];
    characters['z'].matrix [i] = matrix_z[i];
    characters['A'].matrix [i] = matrix_a[i];
    characters['B'].matrix [i] = matrix_b[i];
    characters['C'].matrix [i] = matrix_c[i];
    characters['D'].matrix [i] = matrix_d[i];
    characters['E'].matrix [i] = matrix_e[i];
    characters['F'].matrix [i] = matrix_f[i];
    characters['G'].matrix [i] = matrix_g[i];
    characters['H'].matrix [i] = matrix_h[i];
    characters['I'].matrix [i] = matrix_i[i];
    characters['J'].matrix [i] = matrix_j[i];
    characters['K'].matrix [i] = matrix_k[i];
    characters['L'].matrix [i] = matrix_l[i];
    characters['M'].matrix [i] = matrix_m[i];
    characters['N'].matrix [i] = matrix_n[i];
    characters['O'].matrix [i] = matrix_o[i];
    characters['P'].matrix [i] = matrix_p[i];
    characters['Q'].matrix [i] = matrix_q[i];
    characters['R'].matrix [i] = matrix_r[i];
    characters['S'].matrix [i] = matrix_s[i];
    characters['T'].matrix [i] = matrix_t[i];
    characters['U'].matrix [i] = matrix_u[i];
    characters['V'].matrix [i] = matrix_v[i];
    characters['W'].matrix [i] = matrix_w[i];
    characters['X'].matrix [i] = matrix_x[i];
    characters['Y'].matrix [i] = matrix_y[i];
    characters['Z'].matrix [i] = matrix_z[i];
    characters['1'].matrix [i] = matrix_1[i];
    characters['2'].matrix [i] = matrix_2[i];
    characters['3'].matrix [i] = matrix_3[i];
    characters['4'].matrix [i] = matrix_4[i];
    characters['5'].matrix [i] = matrix_5[i];
    characters['6'].matrix [i] = matrix_6[i];
    characters['7'].matrix [i] = matrix_7[i];
    characters['8'].matrix [i] = matrix_8[i];
    characters['9'].matrix [i] = matrix_9[i];
    characters['0'].matrix [i] = matrix_0[i];
    characters['+'].matrix [i] = matrix_plus[i];
    characters['-'].matrix [i] = matrix_minus[i];
    characters['_'].matrix [i] = matrix_underline[i];
    characters['.'].matrix [i] = matrix_dot[i];
    characters[':'].matrix [i] = matrix_colon[i];
    characters[','].matrix [i] = matrix_comma[i];
    characters[';'].matrix [i] = matrix_semicolon[i];
    characters['!'].matrix [i] = matrix_attentionmark[i];
    characters['\''].matrix [i] = matrix_quote[i];
    characters['<'].matrix [i] = matrix_greater[i];
    characters['>'].matrix [i] = matrix_smaller[i];
    characters['('].matrix [i] = matrix_bracket_open[i];
    characters[')'].matrix [i] = matrix_bracket_close[i];
    characters['|'].matrix [i] = matrix_pipe[i];
    characters['?'].matrix [i] = matrix_questionmark[i];
    characters[' '].matrix [i] = matrix_space[i];
    characters['/'].matrix [i] = matrix_slash[i];
    characters['"'].matrix [i] = matrix_degree[i];
  }
    characters['a'].size = 3;
    characters['b'].size = 3;
    characters['c'].size = 3;
    characters['d'].size = 3;
    characters['e'].size = 3;
    characters['f'].size = 3;
    characters['g'].size = 4;
    characters['h'].size = 3;
    characters['i'].size = 3;
    characters['j'].size = 3;
    characters['k'].size = 4;
    characters['l'].size = 3;
    characters['m'].size = 5;
    characters['n'].size = 5;
    characters['o'].size = 3;
    characters['p'].size = 3;
    characters['q'].size = 4;
    characters['r'].size = 3;
    characters['s'].size = 3;
    characters['t'].size = 3;
    characters['u'].size = 3;
    characters['v'].size = 3;
    characters['w'].size = 5;
    characters['x'].size = 3;
    characters['y'].size = 3;
    characters['z'].size = 3;
    characters['A'].size = 3;
    characters['B'].size = 3;
    characters['C'].size = 3;
    characters['D'].size = 3;
    characters['E'].size = 3;
    characters['F'].size = 3;
    characters['G'].size = 4;
    characters['H'].size = 3;
    characters['I'].size = 3;
    characters['J'].size = 3;
    characters['K'].size = 4;
    characters['L'].size = 3;
    characters['M'].size = 5;
    characters['N'].size = 5;
    characters['O'].size = 3;
    characters['P'].size = 3;
    characters['Q'].size = 4;
    characters['R'].size = 3;
    characters['S'].size = 3;
    characters['T'].size = 3;
    characters['U'].size = 3;
    characters['V'].size = 3;
    characters['W'].size = 5;
    characters['X'].size = 3;
    characters['Y'].size = 3;
    characters['Z'].size = 3;
    characters['1'].size = 3;
    characters['2'].size = 3;
    characters['3'].size = 3;
    characters['4'].size = 3;
    characters['5'].size = 3;
    characters['6'].size = 3;
    characters['7'].size = 3;
    characters['8'].size = 3;
    characters['9'].size = 3;
    characters['0'].size = 4;
    characters['+'].size = 3;
    characters['-'].size = 3;
    characters['_'].size = 3;
    characters['.'].size = 2;
    characters[':'].size = 1;
    characters[','].size = 2;
    characters[';'].size = 2;
    characters['!'].size = 1;
    characters['<'].size = 3;
    characters['>'].size = 3;
    characters['('].size = 3;
    characters[')'].size = 3;
    characters['|'].size = 1;
    characters['?'].size = 3;
    characters[' '].size = 3;
    characters['/'].size = 3;
    characters['"'].size = 3;
    characters['\''].size = 1;
}

uint8_t build_frame (bool *_scrollingFrame [], uint8_t _scrollingFrameLen, const char *str, uint8_t str_len){
  if (str_len == 0)
    str_len = strlen(str);

  uint8_t counter = 0;
  for (uint8_t i = 0; i < str_len; i++) {
    for (uint8_t j = 0; j < characters[str[i]].size; j++) {
      _scrollingFrame[counter++] = characters[str[i]].matrix[j];
      if (counter == _scrollingFrameLen)
        return counter;
    }
    _scrollingFrame[counter++] = f00;
    if (counter == _scrollingFrameLen)
      return counter;
  }
  return counter;
}