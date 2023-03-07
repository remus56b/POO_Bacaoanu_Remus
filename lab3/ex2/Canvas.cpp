#include "Canvas.h"
#include<iostream>

using namespace std;

Canvas::Canvas(int width, int height) {
	this->height = height;
	this->width = width;
	this->mat = (char**)(malloc(height * sizeof(char*)));
	if (this->mat != nullptr)
	{
		for (int i = 0; i < height; i++) {
			this->mat[i] = (char*)(malloc(width * sizeof(char)));
			if (this->mat[i] != nullptr)
			{
				memset(this->mat[i], ' ', width * sizeof(char));
			}
		}
	}
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
		int dx = abs(x2 - x1);
		int sx = x1 < x2 ? 1 : -1;
		int dy = -abs(y2 - y1);
		int sy = y1 < y2 ? 1 : -1;
		int err = dx + dy;
		while (true) {
			this->mat[x1][y1] = ch;
			if (x1 == x2 && y1 == y2)break;
			int e2 = 2 * err;
			if (e2 >= dy) {
				err += dy;
				x1 += sx;
			}
			if (e2 <= dx) {
				err += dx;
				y1 += sy;
			}
		}
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if ((j - x) * (j - x) + (i - y) * (i - y) == ray * ray)
				mat[i][j] = ch;
			else
			{
				mat[i][j] = ' ';
			}
		}
	}
}


void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == top || i == bottom && j == left || j == right)
			{
				mat[i][j] = ch;
			}
			else
			{
				mat[i][j] = ' ';
			}
		}
	}
}

void Canvas::SetPoint(int x, int y, char ch)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == y && i == x)
			{
				mat[i][j] = ch;
			}
			else
			{
				mat[i][j] = ' ';
			}
		}

	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if ((j - x) * (j - x) + (i - y) * (i - y) <= ray * ray)
				mat[i][j] = ch;
			else
			{
				mat[i][j] = ' ';
			}
		}
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i <= top || i >= bottom && j >= left || j <= right)
				mat[i][j] = ch;
			else
			{
				mat[i][j] = ' ';
			}
		}
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			mat[i][j] = ' ';
		}
	}
}

void Canvas::Print()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << mat[i][j];
		}
		cout << '\n';
	}
}