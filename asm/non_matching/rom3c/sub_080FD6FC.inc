	THUMB_FUNC_START sub_080FD6FC
sub_080FD6FC: @ 0x080FD6FC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	ldr r7, _080FD794  @ =gRam
	ldr r0, _080FD798  @ =0x00001622
	add r0, r0, r7
	mov r12, r0
	ldrb r2, [r0]
	ldr r1, _080FD79C  @ =0x00001623
	add r1, r1, r7
	mov r9, r1
	ldrb r0, [r1]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r5, _080FD7A0  @ =0x00000AC8
	add r0, r7, r5
	ldrh r0, [r0]
	sub r2, r2, r0
	ldr r0, _080FD7A4  @ =0x00001624
	add r3, r7, r0
	ldrb r1, [r3]
	ldr r5, _080FD7A8  @ =0x00001625
	add r4, r7, r5
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080FD7AC  @ =0x00000ACA
	add r0, r7, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r0, r12
	strb r2, [r0]
	lsr r2, r2, #8
	mov r5, r9
	strb r2, [r5]
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r4]
	ldr r1, _080FD7B0  @ =0x00000F52
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080FD768
	add r0, r6, #0
	bl sub_080F40C0
	mov r0, #2
	bl sub_080C64A0
_080FD768:
	ldr r5, _080FD7B4  @ =0x00000A38
	add r0, r7, r5
	mov r1, #1
	strh r1, [r0]
	bl sub_08125874
	ldr r0, _080FD7B8  @ =0x00001B08
	add r4, r7, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080FD788
	mov r0, r8
	bl sub_080FDA84
	mov r0, #1
	strb r0, [r4]
_080FD788:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FD794:
	.4byte gRam
_080FD798:
	.4byte 0x00001622
_080FD79C:
	.4byte 0x00001623
_080FD7A0:
	.4byte 0x00000AC8
_080FD7A4:
	.4byte 0x00001624
_080FD7A8:
	.4byte 0x00001625
_080FD7AC:
	.4byte 0x00000ACA
_080FD7B0:
	.4byte 0x00000F52
_080FD7B4:
	.4byte 0x00000A38
_080FD7B8:
	.4byte 0x00001B08
	THUMB_FUNC_END sub_080FD6FC

