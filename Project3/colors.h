#pragma once
#include<stdio.h>

void fn_black()
{
	printf("\033[1;30m");
}
void fn_red()
{
	printf("\033[1;31m");
}
void fn_green()
{
	printf("\033[1;32m");
}
void fn_yellow()
{
	printf("\033[1;33m");
}
void fn_blue()
{
	printf("\033[1;34m");
}
void fn_magenta()
{
	printf("\033[1;35m");
}
void fn_cyan()
{
	printf("\033[1;36m");
}
void fn_reset()
{
	printf("\033[0m");
}