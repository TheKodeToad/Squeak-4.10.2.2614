/* ckformat: Print the image format number on standard output */
/* for use in a shell script to test image format requirements. */
/* A non-zero return status code indicates failure. */

/* Usage: ckformat imageFileName */

/* --- DO NOT EDIT THIS FILE --- */
/* --- Automatically generated from class ImageFormat 2012-12-22T16:28:38.261-05:00--- */
/* --- Source code is in package ImageFormat in the VMMaker repository --- */
/* --- DO NOT EDIT THIS FILE --- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char **argv) {
	FILE *f;
	unsigned char buf[8];
	int formatNumber;
	unsigned char c;
	int match;
	if (argc != 2) {
		printf("usage: ckformat imageFileName\n");
		exit(1);
	}
	f = fopen(argv[1], "r");
	if (f == NULL) {
		perror(argv[1]);
		exit(2);
	}
	if(fseek(f, 0L, SEEK_SET) != 0) {
		fprintf(stderr, "cannot go to pos %d in %s\n", 0, argv[1]);
		exit(3);
	}
	if (fread(buf, 1, 8, f) < 8) {
		fprintf(stderr, "cannot read %s\n", argv[1]);
		exit(3);
	}
	{
	unsigned char b_6502_1[4]= { 0, 0, 25, 102};
	if (strncmp(buf, b_6502_1, 4) == 0) {
		printf("%d\n", 6502);
		exit(0);
	}
	}
	{
	unsigned char b_6502_2[4]= { 102, 25, 0, 0};
	if (strncmp(buf, b_6502_2, 4) == 0) {
		printf("%d\n", 6502);
		exit(0);
	}
	}
	{
	unsigned char b_6504_3[4]= { 0, 0, 25, 104};
	if (strncmp(buf, b_6504_3, 4) == 0) {
		printf("%d\n", 6504);
		exit(0);
	}
	}
	{
	unsigned char b_6504_4[4]= { 104, 25, 0, 0};
	if (strncmp(buf, b_6504_4, 4) == 0) {
		printf("%d\n", 6504);
		exit(0);
	}
	}
	{
	unsigned char b_68000_5[8]= { 0, 0, 0, 0, 0, 1, 9, 160};
	if (strncmp(buf, b_68000_5, 8) == 0) {
		printf("%d\n", 68000);
		exit(0);
	}
	}
	{
	unsigned char b_68000_6[8]= { 160, 9, 1, 0, 0, 0, 0, 0};
	if (strncmp(buf, b_68000_6, 8) == 0) {
		printf("%d\n", 68000);
		exit(0);
	}
	}
	{
	unsigned char b_68002_7[8]= { 0, 0, 0, 0, 0, 1, 9, 162};
	if (strncmp(buf, b_68002_7, 8) == 0) {
		printf("%d\n", 68002);
		exit(0);
	}
	}
	{
	unsigned char b_68002_8[8]= { 162, 9, 1, 0, 0, 0, 0, 0};
	if (strncmp(buf, b_68002_8, 8) == 0) {
		printf("%d\n", 68002);
		exit(0);
	}
	}
	{
	unsigned char b_6505_9[4]= { 0, 0, 25, 105};
	if (strncmp(buf, b_6505_9, 4) == 0) {
		printf("%d\n", 6505);
		exit(0);
	}
	}
	{
	unsigned char b_6505_10[4]= { 105, 25, 0, 0};
	if (strncmp(buf, b_6505_10, 4) == 0) {
		printf("%d\n", 6505);
		exit(0);
	}
	}
	{
	unsigned char b_68003_11[8]= { 0, 0, 0, 0, 0, 1, 9, 163};
	if (strncmp(buf, b_68003_11, 8) == 0) {
		printf("%d\n", 68003);
		exit(0);
	}
	}
	{
	unsigned char b_68003_12[8]= { 163, 9, 1, 0, 0, 0, 0, 0};
	if (strncmp(buf, b_68003_12, 8) == 0) {
		printf("%d\n", 68003);
		exit(0);
	}
	}
	if(fseek(f, 512L, SEEK_SET) != 0) {
		fprintf(stderr, "cannot go to pos %d in %s\n", 512, argv[1]);
		exit(3);
	}
	if (fread(buf, 1, 8, f) < 8) {
		fprintf(stderr, "cannot read %s\n", argv[1]);
		exit(3);
	}
	{
	unsigned char b_6502_1[4]= { 0, 0, 25, 102};
	if (strncmp(buf, b_6502_1, 4) == 0) {
		printf("%d\n", 6502);
		exit(0);
	}
	}
	{
	unsigned char b_6502_2[4]= { 102, 25, 0, 0};
	if (strncmp(buf, b_6502_2, 4) == 0) {
		printf("%d\n", 6502);
		exit(0);
	}
	}
	{
	unsigned char b_6504_3[4]= { 0, 0, 25, 104};
	if (strncmp(buf, b_6504_3, 4) == 0) {
		printf("%d\n", 6504);
		exit(0);
	}
	}
	{
	unsigned char b_6504_4[4]= { 104, 25, 0, 0};
	if (strncmp(buf, b_6504_4, 4) == 0) {
		printf("%d\n", 6504);
		exit(0);
	}
	}
	{
	unsigned char b_68000_5[8]= { 0, 0, 0, 0, 0, 1, 9, 160};
	if (strncmp(buf, b_68000_5, 8) == 0) {
		printf("%d\n", 68000);
		exit(0);
	}
	}
	{
	unsigned char b_68000_6[8]= { 160, 9, 1, 0, 0, 0, 0, 0};
	if (strncmp(buf, b_68000_6, 8) == 0) {
		printf("%d\n", 68000);
		exit(0);
	}
	}
	{
	unsigned char b_68002_7[8]= { 0, 0, 0, 0, 0, 1, 9, 162};
	if (strncmp(buf, b_68002_7, 8) == 0) {
		printf("%d\n", 68002);
		exit(0);
	}
	}
	{
	unsigned char b_68002_8[8]= { 162, 9, 1, 0, 0, 0, 0, 0};
	if (strncmp(buf, b_68002_8, 8) == 0) {
		printf("%d\n", 68002);
		exit(0);
	}
	}
	{
	unsigned char b_6505_9[4]= { 0, 0, 25, 105};
	if (strncmp(buf, b_6505_9, 4) == 0) {
		printf("%d\n", 6505);
		exit(0);
	}
	}
	{
	unsigned char b_6505_10[4]= { 105, 25, 0, 0};
	if (strncmp(buf, b_6505_10, 4) == 0) {
		printf("%d\n", 6505);
		exit(0);
	}
	}
	{
	unsigned char b_68003_11[8]= { 0, 0, 0, 0, 0, 1, 9, 163};
	if (strncmp(buf, b_68003_11, 8) == 0) {
		printf("%d\n", 68003);
		exit(0);
	}
	}
	{
	unsigned char b_68003_12[8]= { 163, 9, 1, 0, 0, 0, 0, 0};
	if (strncmp(buf, b_68003_12, 8) == 0) {
		printf("%d\n", 68003);
		exit(0);
	}
	}
	printf("0\n"); /* print an invalid format number */
	exit (-1); /* not found, exit with error code */
}
