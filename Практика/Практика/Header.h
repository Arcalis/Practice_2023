#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<iostream>
#include<locale.h>



void input_masize(int* mas, FILE* input, int size);
void sortid(int size, int* mas);
void output_mas(int size, int* mas, FILE* output);
