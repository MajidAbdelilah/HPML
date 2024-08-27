#include <cmath>
#include <math.h>

class Vector2
{
    public:
    Vector2(float X, float Y)
    {
        x = X;
        y = Y;
    }
    float Length() const
    {
        return sqrt(x*x + y*y);
    }
    float LengthSqrt() const
    {
        return x*x + y*y;
    }
    Vector2 operator+(const Vector2 &s) const
    {
        return Vector2(x+s.x, y+s.y);
    }
    Vector2 operator-(const Vector2 &s) const
    {
        return Vector2(x-s.x, y-s.y);
    }
    Vector2 operator*(const float &s) const
    {
        return Vector2(x*s, y*s);
    }
    Vector2 operator/(const float s) const
    {
        return Vector2(x/s, y/s);
    }
    Vector2 Normalize() const
    {
        return *this / Length();
    }
    float x, y;
};

class Vector3
{
    public:
    Vector3(float X, float Y, float Z)
    {
        x = X;
        y = Y;
        z = Z;
    }
    float Length() const
    {
        return sqrt(x*x + y*y + z*z);
    }
    float LengthSqrt() const
    {
        return x*x + y*y + z*z;
    }
    Vector3 operator+(const Vector3 &s) const
    {
        return Vector3(x + s.x, y + s.y, z + s.z);
    }
    Vector3 operator-(const Vector3 &s) const
    {
        return Vector3(x - s.x, y - s.y, z - s.z);
    }
    Vector3 operator*(const float &s) const
    {
        return Vector3(x * s, y * s, z * s);
    }
    Vector3 operator/(const float s) const
    {
        return Vector3(x/s, y/s, z/s);
    }
    Vector3 Normalize() const
    {
        return *this / Length();
    }
    float x, y, z;
};

class Vector4
{
    public:
    Vector4(float X, float Y, float Z, float W)
    {
        x = X;
        y = Y;
        z = Z;
        w = W;
    }
    float Length() const
    {
        return sqrt(x*x + y*y + z*z + w*w);
    }
    float LengthSqrt() const
    {
        return x*x + y*y + z*z + w*w;
    }
    Vector4 operator+(const Vector4 &s) const
    {
        return Vector4(x + s.x, y + s.y, z + s.z, w + s.w);
    }
    Vector4 operator-(const Vector4 &s) const
    {
        return Vector4(x - s.x, y - s.y, z - s.z, w - s.w);
    }
    Vector4 operator*(const float &s) const
    {
        return Vector4(x * s, y * s, z * s, w * s);
    }
    Vector4 operator/(const float s) const
    {
        return Vector4(x/s, y/s, z/s, w/s);
    }
    Vector4 Normalize() const
    {
        return *this / Length();
    }
    float x, y, z, w;
};
