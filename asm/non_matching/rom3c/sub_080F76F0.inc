	THUMB_FUNC_START sub_080F76F0
sub_080F76F0: @ 0x080F76F0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, #15
	ldr r3, _080F77A0  @ =gRam
	mov r8, r3
	mov r0, #150
	lsl r0, r0, #4
	add r6, r3, r0
	ldr r2, _080F77A4  @ =0x00001625
	add r2, r2, r3
	mov r12, r2
_080F770C:
	lsl r0, r1, #24
	asr r2, r0, #24
	ldr r4, _080F77A8  @ =0x000015DC
	add r1, r3, r4
	add r5, r0, #0
	ldrb r1, [r1]
	cmp r2, r1
	beq _080F77D8
	ldr r0, _080F77AC  @ =0x00000FA2
	add r0, r0, r8
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _080F77D8
	ldr r1, _080F77B0  @ =0x00000EE2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r4, _080F77B4  @ =0x00000F02
	add r0, r3, r4
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _080F77B8  @ =0x00000961
	add r0, r3, r4
	strb r1, [r0]
	ldr r1, _080F77BC  @ =0x00000ED2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r1, _080F77C0  @ =0x00000964
	add r4, r3, r1
	strb r0, [r4]
	ldr r1, _080F77C4  @ =0x00000EF2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _080F77C8  @ =0x00000965
	add r0, r3, r2
	strb r1, [r0]
	ldr r1, _080F77CC  @ =0x00001622
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080F77D0  @ =0x00001623
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r6]
	sub r1, r1, r0
	add r1, r1, #32
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #63
	bhi _080F77D8
	ldr r1, _080F77D4  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, r12
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r4]
	sub r1, r1, r0
	add r1, r1, #32
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #63
	bhi _080F77D8
	add r0, r7, #0
	bl sub_080F7B54
	b _080F77E4
	.byte 0x00
	.byte 0x00
_080F77A0:
	.4byte gRam
_080F77A4:
	.4byte 0x00001625
_080F77A8:
	.4byte 0x000015DC
_080F77AC:
	.4byte 0x00000FA2
_080F77B0:
	.4byte 0x00000EE2
_080F77B4:
	.4byte 0x00000F02
_080F77B8:
	.4byte 0x00000961
_080F77BC:
	.4byte 0x00000ED2
_080F77C0:
	.4byte 0x00000964
_080F77C4:
	.4byte 0x00000EF2
_080F77C8:
	.4byte 0x00000965
_080F77CC:
	.4byte 0x00001622
_080F77D0:
	.4byte 0x00001623
_080F77D4:
	.4byte 0x00001624
_080F77D8:
	mov r4, #255
	lsl r4, r4, #24
	add r0, r5, r4
	lsr r1, r0, #24
	cmp r0, #0
	bge _080F770C
_080F77E4:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F76F0

	.byte 0x00
	.byte 0x00
