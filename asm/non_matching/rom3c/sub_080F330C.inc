	THUMB_FUNC_START sub_080F330C
sub_080F330C: @ 0x080F330C
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #30
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F3354
	ldr r2, _080F335C  @ =gRam
	ldr r0, _080F3360  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F3364  @ =0x00000F92
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F3368  @ =0x0000165F
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r3]
	ldr r0, _080F336C  @ =0x00000FE2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #128
	strb r0, [r2]
_080F3354:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080F335C:
	.4byte gRam
_080F3360:
	.4byte 0x00000F52
_080F3364:
	.4byte 0x00000F92
_080F3368:
	.4byte 0x0000165F
_080F336C:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080F330C

