	THUMB_FUNC_START sub_080C2CB4
sub_080C2CB4: @ 0x080C2CB4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldr r4, _080C2CDC  @ =gRam
	ldr r1, _080C2CE0  @ =0x00000961
	add r0, r4, r1
	strb r6, [r0]
	lsl r0, r6, #24
	asr r1, r0, #24
	cmp r1, #0
	bne _080C2CE4
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	b _080C2DB8
_080C2CDC:
	.4byte gRam
_080C2CE0:
	.4byte 0x00000961
_080C2CE4:
	add r0, r7, #0
	bl sub_080C3028
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r0, _080C2D04  @ =0x0000097C
	add r1, r4, r0
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080C2D08
	ldrb r5, [r1]
	b _080C2D0E
	.byte 0x00
	.byte 0x00
_080C2D04:
	.4byte 0x0000097C
_080C2D08:
	neg r0, r2
	lsl r0, r0, #24
	lsr r5, r0, #24
_080C2D0E:
	add r0, r7, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	ldr r0, _080C2D30  @ =gRam
	ldr r2, _080C2D34  @ =0x0000097D
	add r1, r0, r2
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080C2D38
	ldrb r3, [r1]
	b _080C2D3E
	.byte 0x00
	.byte 0x00
_080C2D30:
	.4byte gRam
_080C2D34:
	.4byte 0x0000097D
_080C2D38:
	neg r0, r2
	lsl r0, r0, #24
	lsr r3, r0, #24
_080C2D3E:
	mov r7, #0
	cmp r3, r5
	bcs _080C2D4C
	mov r7, #1
	add r0, r3, #0
	add r3, r5, #0
	add r5, r0, #0
_080C2D4C:
	mov r2, #0
	ldr r0, _080C2DC4  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r4, r0, r1
	strb r2, [r4]
	add r1, r6, #0
	add r6, r0, #0
	cmp r1, #0
	beq _080C2D80
_080C2D60:
	add r0, r2, r5
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r3
	bcc _080C2D76
	sub r0, r2, r3
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080C2D76:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080C2D60
_080C2D80:
	cmp r7, #0
	beq _080C2D96
	mov r0, #150
	lsl r0, r0, #4
	add r2, r6, r0
	ldrb r3, [r2]
	add r0, r0, #1
	add r1, r6, r0
	ldrb r0, [r1]
	strb r0, [r2]
	strb r3, [r1]
_080C2D96:
	mov r1, r8
	cmp r1, #0
	beq _080C2DA8
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_080C2DA8:
	mov r0, r12
	cmp r0, #0
	beq _080C2DB8
	ldr r2, _080C2DC8  @ =0x00000961
	add r1, r6, r2
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_080C2DB8:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C2DC4:
	.4byte gRam
_080C2DC8:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080C2CB4

