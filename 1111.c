double sum_ptrwalk(const double *p, int n) {
    double s = 0.0;
    const double *end = p + n;
    for (; p < end; ++p) s += *p;
    return s;
}
