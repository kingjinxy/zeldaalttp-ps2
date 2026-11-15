	THUMB_FUNC_START sub_0812FDEC
sub_0812FDEC: @ 0x0812FDEC
	push {r4,r5,lr}
	ldr r5, _0812FE38  @ =gUnknown_0822B150
	ldr r0, [r5, #60]
	ldr r4, _0812FE3C  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812FE40  @ =gUnknown_0200A6C0
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812FE44  @ =gUnknown_0822B324
	mov r1, #176
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r4, #0
	bl LZ77UnCompWram
	add r0, r4, #0
	ldr r1, _0812FE48  @ =gUnknown_0200A8C0
	mov r2, #128
	lsl r2, r2, #1
	bl CpuFastSet
	ldr r0, [r5, #20]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r0, _0812FE4C  @ =gUnknown_02032600
	ldr r1, _0812FE50  @ =gUnknown_0200B140
	mov r2, #16
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_0812FE38:
	.4byte gUnknown_0822B150
_0812FE3C:
	.4byte gUnknown_02032000
_0812FE40:
	.4byte gUnknown_0200A6C0
_0812FE44:
	.4byte gUnknown_0822B324
_0812FE48:
	.4byte gUnknown_0200A8C0
_0812FE4C:
	.4byte gUnknown_02032600
_0812FE50:
	.4byte gUnknown_0200B140
	THUMB_FUNC_END sub_0812FDEC

