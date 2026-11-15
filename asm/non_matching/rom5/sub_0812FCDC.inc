	THUMB_FUNC_START sub_0812FCDC
sub_0812FCDC: @ 0x0812FCDC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _0812FD58  @ =gUnknown_0822B150
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r5, _0812FD5C  @ =gUnknown_02032000
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812FD60  @ =gUnknown_02009A00
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812FD64  @ =gUnknown_02032200
	mov r8, r0
	ldr r1, _0812FD68  @ =gUnknown_02009E00
	mov r2, #128
	bl CpuFastSet
	ldr r6, _0812FD6C  @ =gUnknown_02032400
	ldr r1, _0812FD70  @ =gUnknown_0200A200
	add r0, r6, #0
	mov r2, #128
	bl CpuFastSet
	mov r1, #184
	lsl r1, r1, #1
	add r4, r4, r1
	ldr r0, [r4]
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812FD74  @ =gUnknown_02009C00
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812FD78  @ =gUnknown_0200A000
	mov r0, r8
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812FD7C  @ =gUnknown_0200A400
	add r0, r6, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812FD80  @ =gRam
	ldr r1, _0812FD84  @ =0x00000A3A
	add r0, r0, r1
	mov r1, #216
	lsl r1, r1, #6
	strh r1, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812FD58:
	.4byte gUnknown_0822B150
_0812FD5C:
	.4byte gUnknown_02032000
_0812FD60:
	.4byte gUnknown_02009A00
_0812FD64:
	.4byte gUnknown_02032200
_0812FD68:
	.4byte gUnknown_02009E00
_0812FD6C:
	.4byte gUnknown_02032400
_0812FD70:
	.4byte gUnknown_0200A200
_0812FD74:
	.4byte gUnknown_02009C00
_0812FD78:
	.4byte gUnknown_0200A000
_0812FD7C:
	.4byte gUnknown_0200A400
_0812FD80:
	.4byte gRam
_0812FD84:
	.4byte 0x00000A3A
	THUMB_FUNC_END sub_0812FCDC

