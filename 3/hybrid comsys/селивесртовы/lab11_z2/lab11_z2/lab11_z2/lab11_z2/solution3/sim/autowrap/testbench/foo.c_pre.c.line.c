#pragma line 1 "C:/Users/Julia/YandexDisk/6/Antonov_labs/lab11_2/lab11_z2/foo.c"
#pragma line 1 "C:/Users/Julia/YandexDisk/6/Antonov_labs/lab11_2/lab11_z2/foo.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 147 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "C:/Users/Julia/YandexDisk/6/Antonov_labs/lab11_2/lab11_z2/foo.c" 2
#pragma empty_line
void foo(int d_in[16], int d_out[16])
{
 int i;
 int t_in,t_r;
#pragma HLS LATENCY min=5
 Loop: for(i = 0; i < 16; i++)
 {
  t_in = d_in[i];
  t_r = t_in * t_in;
  d_out[i] = t_r;
 }
}
