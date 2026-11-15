	THUMB_FUNC_START sub_0810D210
sub_0810D210: @ 0x0810D210
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0810D27C  @ =gRam
	ldr r0, _0810D280  @ =0x0000180B
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810D284  @ =0x00000544
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0810D252
	ldr r3, _0810D288  @ =0x00000F92
	add r0, r2, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0810D252
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810D28C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #58
	bl sub_080CF0AC
_0810D252:
	ldr r2, _0810D27C  @ =gRam
	ldr r3, _0810D290  @ =0x00000ED2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r3, #32
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	add r1, r1, #21
	mov r0, #182
	lsl r0, r0, #5
	add r2, r2, r0
	strh r1, [r2]
	pop {r4}
	pop {r0}
	bx r0
_0810D27C:
	.4byte gRam
_0810D280:
	.4byte 0x0000180B
_0810D284:
	.4byte 0x00000544
_0810D288:
	.4byte 0x00000F92
_0810D28C:
	.4byte 0x00000FC2
_0810D290:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_0810D210

