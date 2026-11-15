	THUMB_FUNC_START sub_080E9B9C
sub_080E9B9C: @ 0x080E9B9C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r3, _080E9BF4  @ =gRam
	ldr r0, _080E9BF8  @ =0x00001152
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	ldr r1, _080E9BFC  @ =0x00001142
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080E9BEC
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080E9C00  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E9C04  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E9D14
_080E9BEC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9BF4:
	.4byte gRam
_080E9BF8:
	.4byte 0x00001152
_080E9BFC:
	.4byte 0x00001142
_080E9C00:
	.4byte 0x00000F52
_080E9C04:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E9B9C

