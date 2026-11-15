	THUMB_FUNC_START sub_080C2DCC
sub_080C2DCC: @ 0x080C2DCC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldr r4, _080C2DF0  @ =gRam
	ldr r1, _080C2DF4  @ =0x00000961
	add r0, r4, r1
	strb r6, [r0]
	cmp r6, #0
	bne _080C2DF8
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r6, [r0]
	b _080C2ECC
_080C2DF0:
	.4byte gRam
_080C2DF4:
	.4byte 0x00000961
_080C2DF8:
	add r0, r7, #0
	bl sub_080C368C
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r0, _080C2E18  @ =0x0000097C
	add r1, r4, r0
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080C2E1C
	ldrb r5, [r1]
	b _080C2E22
	.byte 0x00
	.byte 0x00
_080C2E18:
	.4byte 0x0000097C
_080C2E1C:
	neg r0, r2
	lsl r0, r0, #24
	lsr r5, r0, #24
_080C2E22:
	add r0, r7, #0
	bl sub_080C3640
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	ldr r0, _080C2E44  @ =gRam
	ldr r2, _080C2E48  @ =0x0000097D
	add r1, r0, r2
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080C2E4C
	ldrb r3, [r1]
	b _080C2E52
	.byte 0x00
	.byte 0x00
_080C2E44:
	.4byte gRam
_080C2E48:
	.4byte 0x0000097D
_080C2E4C:
	neg r0, r2
	lsl r0, r0, #24
	lsr r3, r0, #24
_080C2E52:
	mov r7, #0
	cmp r3, r5
	bcs _080C2E60
	mov r7, #1
	add r0, r3, #0
	add r3, r5, #0
	add r5, r0, #0
_080C2E60:
	mov r2, #0
	ldr r0, _080C2ED8  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r4, r0, r1
	strb r2, [r4]
	add r1, r6, #0
	add r6, r0, #0
	cmp r1, #0
	beq _080C2E94
_080C2E74:
	add r0, r2, r5
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r3
	bcc _080C2E8A
	sub r0, r2, r3
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080C2E8A:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080C2E74
_080C2E94:
	cmp r7, #0
	beq _080C2EAA
	mov r0, #150
	lsl r0, r0, #4
	add r2, r6, r0
	ldrb r3, [r2]
	add r0, r0, #1
	add r1, r6, r0
	ldrb r0, [r1]
	strb r0, [r2]
	strb r3, [r1]
_080C2EAA:
	mov r1, r8
	cmp r1, #0
	beq _080C2EBC
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_080C2EBC:
	mov r0, r12
	cmp r0, #0
	beq _080C2ECC
	ldr r2, _080C2EDC  @ =0x00000961
	add r1, r6, r2
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_080C2ECC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C2ED8:
	.4byte gRam
_080C2EDC:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080C2DCC

