double areaSwitchCase(int ch, vector<double> a) {
	double area ;
	switch (ch) {
	case 1:
	area = M_PI * a[0] * a[0];
	break;

	case 2:
	area = a[0]*a[1];
	}
	return area;
}
