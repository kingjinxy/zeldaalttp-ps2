	THUMB_FUNC_START sub_0812FD88
sub_0812FD88: @ 0x0812FD88
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r6, _0812FDD4  @ =gUnknown_0822B150
	lsl r0, r4, #2
	add r0, r0, r6
	ldr r0, [r0]
	ldr r5, _0812FDD8  @ =gUnknown_02032000
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812FDDC  @ =gUnknown_02009A00
	mov r2, #128
	lsl r2, r2, #2
	add r0, r5, #0
	bl CpuFastSet
	add r4, r4, #1
	lsl r4, r4, #2
	add r4, r4, r6
	ldr r0, [r4]
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812FDE0  @ =gUnknown_0200A200
	mov r2, #128
	lsl r2, r2, #1
	add r0, r5, #0
	bl CpuFastSet
	ldr r0, _0812FDE4  @ =gRam
	ldr r1, _0812FDE8  @ =0x00000A3A
	add r0, r0, r1
	mov r1, #224
	lsl r1, r1, #6
	strh r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_0812FDD4:
	.4byte gUnknown_0822B150
_0812FDD8:
	.4byte gUnknown_02032000
_0812FDDC:
	.4byte gUnknown_02009A00
_0812FDE0:
	.4byte gUnknown_0200A200
_0812FDE4:
	.4byte gRam
_0812FDE8:
	.4byte 0x00000A3A
	THUMB_FUNC_END sub_0812FD88

