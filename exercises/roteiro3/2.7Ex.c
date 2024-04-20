int maior (int*v, int n) {
    int i, MAX;
    MAX = v [0];
    for(i=1; i<n; i++)
        if(v[i] > MAX)
            MAX = v[i];
    return MAX;
}