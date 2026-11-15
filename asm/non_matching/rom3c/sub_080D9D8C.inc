	THUMB_FUNC_START sub_080D9D8C
sub_080D9D8C: @ 0x080D9D8C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, #15
	ldr r5, _080D9E98  @ =gRam
	ldr r0, _080D9E9C  @ =0x00000968
	add r7, r5, r0
	ldr r2, _080D9EA0  @ =0x00000961
	add r2, r2, r5
	mov r9, r2
_080D9DA8:
	lsl r0, r1, #24
	asr r4, r0, #24
	ldr r3, _080D9EA4  @ =0x00000FF2
	add r1, r5, r3
	add r1, r4, r1
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #28
	beq _080D9E7E
	ldr r1, _080D9EA8  @ =0x000015DC
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, r4
	beq _080D9E7E
	ldr r2, _080D9EAC  @ =0x00000996
	add r0, r5, r2
	ldrb r0, [r0]
	eor r0, r0, r4
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080D9E7E
	sub r3, r3, #80
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080D9E7E
	ldr r1, _080D9EB0  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r2, _080D9EB4  @ =0x00000F02
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _080D9EB8  @ =0x00000969
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _080D9EBC  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	add r3, r3, #3
	add r2, r5, r3
	strb r0, [r2]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _080D9EC0  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080D9EC4  @ =0x00001623
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r7]
	sub r1, r1, r0
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #23
	bhi _080D9E7E
	ldr r1, _080D9EC8  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	add r3, r3, #2
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r1, r1, r0
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #35
	bhi _080D9E7E
	ldr r1, _080D9ECC  @ =0x00001072
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	mov r0, r8
	mov r1, #32
	bl sub_080C2DCC
	ldr r2, _080D9ED0  @ =0x00001102
	add r1, r5, r2
	add r1, r4, r1
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080D9ED4  @ =0x00001112
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r9
	ldrb r1, [r2]
	strb r1, [r0]
_080D9E7E:
	mov r3, #255
	lsl r3, r3, #24
	add r0, r6, r3
	lsr r1, r0, #24
	cmp r0, #0
	bge _080D9DA8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9E98:
	.4byte gRam
_080D9E9C:
	.4byte 0x00000968
_080D9EA0:
	.4byte 0x00000961
_080D9EA4:
	.4byte 0x00000FF2
_080D9EA8:
	.4byte 0x000015DC
_080D9EAC:
	.4byte 0x00000996
_080D9EB0:
	.4byte 0x00000EE2
_080D9EB4:
	.4byte 0x00000F02
_080D9EB8:
	.4byte 0x00000969
_080D9EBC:
	.4byte 0x00000ED2
_080D9EC0:
	.4byte 0x00001622
_080D9EC4:
	.4byte 0x00001623
_080D9EC8:
	.4byte 0x00001624
_080D9ECC:
	.4byte 0x00001072
_080D9ED0:
	.4byte 0x00001102
_080D9ED4:
	.4byte 0x00001112
	THUMB_FUNC_END sub_080D9D8C

