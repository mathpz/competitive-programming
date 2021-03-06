#include <bits/stdc++.h>
using namespace std;

#define MAX 5123


struct point 
{
    double x, y;
    point() {}
    point(double _x, double _y): x(_x), y(_y) {}
};

struct circle 
{
    double x;
    double y;
    double r;
    circle() {}
    circle(double _x, double _y, double _r): x(_x), y(_y), r(_r) {}
};

circle b_md(vector<point> R) 
{
    if (R.size() == 0) {
        return circle(0, 0, -1);
    } else if (R.size() == 1) {
        return circle(R[0].x, R[0].y, 0);
    } else if (R.size() == 2) {
        return circle((R[0].x+R[1].x)/2.0,
                      (R[0].y+R[1].y)/2.0,
                      hypot(R[0].x-R[1].x, R[0].y-R[1].y)/2.0);
    } else {
        double D = (R[0].x - R[2].x)*(R[1].y - R[2].y) - (R[1].x - R[2].x)*(R[0].y - R[2].y);
        double p0 = (((R[0].x - R[2].x)*(R[0].x + R[2].x) + (R[0].y - R[2].y)*(R[0].y + R[2].y)) / 2 * (R[1].y - R[2].y) - ((R[1].x - R[2].x)*(R[1].x + R[2].x) + (R[1].y - R[2].y)*(R[1].y + R[2].y)) / 2 * (R[0].y - R[2].y))/D;
        double p1 = (((R[1].x - R[2].x)*(R[1].x + R[2].x) + (R[1].y - R[2].y)*(R[1].y + R[2].y)) / 2 * (R[0].x - R[2].x) - ((R[0].x - R[2].x)*(R[0].x + R[2].x) + (R[0].y - R[2].y)*(R[0].y + R[2].y)) / 2 * (R[1].x - R[2].x))/D;
        return circle(p0, p1, hypot(R[0].x - p0, R[0].y - p1));
    }
}

circle b_minidisk(vector<point>& P, int i, vector<point> R) 
{
    if (i == P.size() || R.size() == 3) {
        return b_md(R);
    } else {
        circle D = b_minidisk(P, i+1, R);
        if (hypot(P[i].x-D.x, P[i].y-D.y) > D.r) {
            R.push_back(P[i]);
            D = b_minidisk(P, i+1, R);
        }
        return D;
    }
}
circle minidisk(vector<point> P)                    // Welzl algorithm: Minimum enclosing circle
{                                                   // source: https://github.com/t3nsor/SPOJ/blob/master/qcj4.cpp#L7
    random_shuffle(P.begin(), P.end());
    return b_minidisk(P, 0, vector<point>());
}





int n;

int main()
{
    vector<point> xy_plane;
    vector<point> xz_plane;
    vector<point> yz_plane;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        xy_plane.push_back(point(a, b));
        xz_plane.push_back(point(a, c));
        yz_plane.push_back(point(b, c));
    }
    circle circleA = minidisk(xy_plane);
    circle circleB = minidisk(xz_plane);
    circle circleC = minidisk(yz_plane);
    
    double ans;

    if(circleA.r < circleB.r)
    {
        if(circleA.r < circleC.r) ans = circleA.r;
        else ans = circleC.r;
    }
    else
    {
        if(circleB.r < circleC.r) ans = circleB.r;
        else ans = circleC.r;
    }
    printf("%lf\n", ans * 2);


    return 0;
}