	THUMB_FUNC_START sub_0812F6CC
sub_0812F6CC: @ 0x0812F6CC
	push {r4,lr}
	ldr r1, _0812F76C  @ =gRam
	ldr r0, _0812F770  @ =0x000009B5
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r2, _0812F774  @ =0x000009C6
	add r0, r1, r2
	ldrh r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	beq _0812F708
	cmp r0, #112
	beq _0812F708
	cmp r0, #64
	beq _0812F708
	cmp r0, #91
	beq _0812F708
	cmp r0, #3
	beq _0812F708
	cmp r0, #5
	beq _0812F708
	cmp r0, #7
	beq _0812F708
	cmp r0, #67
	beq _0812F708
	cmp r0, #69
	beq _0812F708
	cmp r0, #71
	bne _0812F710
_0812F708:
	ldr r0, _0812F770  @ =0x000009B5
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_0812F710:
	ldr r1, _0812F774  @ =0x000009C6
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r0, r0
	asr r0, r0, #31
	mov r1, #8
	and r0, r0, r1
	ldr r2, _0812F778  @ =gUnknown_0822B324
	ldr r1, _0812F77C  @ =gUnknown_0822BA38
	add r0, r0, #6
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	ldr r4, _0812F780  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F784  @ =0x06011000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F788  @ =gUnknown_02032200
	ldr r1, _0812F78C  @ =0x06011400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F790  @ =gUnknown_02032400
	ldr r1, _0812F794  @ =0x06011800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F798  @ =gUnknown_02032600
	ldr r1, _0812F79C  @ =0x06011C00
	mov r2, #128
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_0812F76C:
	.4byte gRam
_0812F770:
	.4byte 0x000009B5
_0812F774:
	.4byte 0x000009C6
_0812F778:
	.4byte gUnknown_0822B324
_0812F77C:
	.4byte gUnknown_0822BA38
_0812F780:
	.4byte gUnknown_02032000
_0812F784:
	.4byte 0x06011000
_0812F788:
	.4byte gUnknown_02032200
_0812F78C:
	.4byte 0x06011400
_0812F790:
	.4byte gUnknown_02032400
_0812F794:
	.4byte 0x06011800
_0812F798:
	.4byte gUnknown_02032600
_0812F79C:
	.4byte 0x06011C00
	THUMB_FUNC_END sub_0812F6CC

