extern int GSite;
extern float alpha_SOR, dt, tol;
void solverUVGaussSeidelSOR(int m, int m_u, int n_u, int m_v, int n_v, float* a_u, float* b_u, float* c_u, float* d_u, float* e_u, float* f_u, float* Bf_u, float* a_v, float* b_v, float* c_v, float* d_v, float* e_v, float* f_v, float* Bf_v, float* x1, float* y1, float* y, float* pressure, float mass_in, float domain_width, float* uA_old, float* vA_old, float* u, float* v, float* u_red, float* v_red, float* u_black, float* v_black, float* u_red_old, float* v_red_old, float* u_black_old, float* v_black_old, float* max_error1, float* max_error2);