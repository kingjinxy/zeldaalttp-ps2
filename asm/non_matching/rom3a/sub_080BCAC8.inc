	THUMB_FUNC_START sub_080BCAC8
sub_080BCAC8: @ 0x080BCAC8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r5, _080BCBD4  @ =gRam
	ldr r0, _080BCBD8  @ =0x000009AD
	add r4, r5, r0
	ldrb r1, [r4]
	str r1, [sp]
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE350
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r4]
	mov r6, #15
	add r7, r5, #0
	ldr r0, _080BCBDC  @ =0x00000FA2
	add r0, r0, r7
	mov r10, r0
	mov r9, r4
_080BCAF8:
	ldr r1, _080BCBE0  @ =0x00000FF2
	add r0, r7, r1
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BCB82
	ldr r2, _080BCBE4  @ =0x00000FD2
	add r0, r7, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BCB16
	sub r0, r0, #1
	strb r0, [r1]
_080BCB16:
	ldr r1, _080BCBE8  @ =0x00000FE2
	add r0, r7, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BCB26
	sub r0, r0, #1
	strb r0, [r1]
_080BCB26:
	ldr r2, _080BCBEC  @ =0x000010E2
	add r0, r7, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BCB36
	sub r0, r0, #1
	strb r0, [r1]
_080BCB36:
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r1, _080BCBF0  @ =0x00001012
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BCBF4  @ =0x000015DC
	add r1, r7, r2
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r0, r9
	ldrb r5, [r0]
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r9
	strb r5, [r0]
	mov r1, r10
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BCB82
	mov r2, r8
	strb r0, [r2]
_080BCB82:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BCAF8
	ldr r5, _080BCBD4  @ =gRam
	ldr r0, _080BCBD8  @ =0x000009AD
	add r4, r5, r0
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE324
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r4]
	ldr r2, _080BCBF8  @ =0x00000A02
	add r0, r5, r2
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #250
	lsl r0, r0, #1
	cmp r1, r0
	bne _080BCBC4
	ldr r0, _080BCBFC  @ =0x00001072
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r2, _080BCC00  @ =0x00001162
	add r1, r5, r2
	mov r0, #3
	strb r0, [r1]
_080BCBC4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BCBD4:
	.4byte gRam
_080BCBD8:
	.4byte 0x000009AD
_080BCBDC:
	.4byte 0x00000FA2
_080BCBE0:
	.4byte 0x00000FF2
_080BCBE4:
	.4byte 0x00000FD2
_080BCBE8:
	.4byte 0x00000FE2
_080BCBEC:
	.4byte 0x000010E2
_080BCBF0:
	.4byte 0x00001012
_080BCBF4:
	.4byte 0x000015DC
_080BCBF8:
	.4byte 0x00000A02
_080BCBFC:
	.4byte 0x00001072
_080BCC00:
	.4byte 0x00001162
	THUMB_FUNC_END sub_080BCAC8

