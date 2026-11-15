	THUMB_FUNC_START sub_080D7D64
sub_080D7D64: @ 0x080D7D64
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080D7DC4  @ =gRam
	ldr r1, _080D7DC8  @ =0x00000FC2
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080D7DE4
	sub r1, r1, #96
	add r2, r6, r1
	add r2, r5, r2
	ldr r4, _080D7DCC  @ =gUnknown_0817570C
	lsr r1, r0, #27
	mov r0, #1
	and r1, r1, r0
	ldr r0, _080D7DD0  @ =0x00000FB2
	add r3, r6, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #1
	orr r1, r1, r0
	add r1, r1, r4
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _080D7DD4  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _080D7DD8  @ =gUnknown_08175718
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D7DDC  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _080D7DE0  @ =gUnknown_08175714
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	b _080D7E02
_080D7DC4:
	.4byte gRam
_080D7DC8:
	.4byte 0x00000FC2
_080D7DCC:
	.4byte gUnknown_0817570C
_080D7DD0:
	.4byte 0x00000FB2
_080D7DD4:
	.4byte 0x00000F22
_080D7DD8:
	.4byte gUnknown_08175718
_080D7DDC:
	.4byte 0x00000F12
_080D7DE0:
	.4byte gUnknown_08175714
_080D7DE4:
	ldr r0, _080D7E08  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #32
	strb r0, [r2]
	ldr r1, _080D7E0C  @ =0x00001172
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
	add r0, r5, #0
	bl sub_080C351C
_080D7E02:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D7E08:
	.4byte 0x00000F52
_080D7E0C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D7D64

