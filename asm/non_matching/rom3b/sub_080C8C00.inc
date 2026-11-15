	THUMB_FUNC_START sub_080C8C00
sub_080C8C00: @ 0x080C8C00
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r2, _080C8C28  @ =gRam
	ldr r1, _080C8C2C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r7, r0
	ldrb r0, [r0]
	mov r9, r0
	cmp r0, #0
	beq _080C8C30
	add r0, r7, #0
	bl sub_080C8CA0
	b _080C8C8A
	.byte 0x00
	.byte 0x00
_080C8C28:
	.4byte gRam
_080C8C2C:
	.4byte 0x00000FC2
_080C8C30:
	ldr r3, _080C8C50  @ =0x00000FF2
	add r0, r2, r3
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #13
	bne _080C8C48
	add r3, r3, #144
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C8C54
_080C8C48:
	add r0, r7, #0
	bl sub_080C8D74
	b _080C8C8A
_080C8C50:
	.4byte 0x00000FF2
_080C8C54:
	ldr r0, _080C8C98  @ =0x00000EE2
	add r5, r2, r0
	add r5, r7, r5
	ldrb r3, [r5]
	mov r8, r3
	add r0, r0, #32
	add r4, r2, r0
	add r4, r7, r4
	ldrb r6, [r4]
	ldrb r1, [r1]
	add r0, r7, #0
	str r2, [sp]
	bl sub_080C66A4
	mov r1, r8
	strb r1, [r5]
	strb r6, [r4]
	ldr r2, [sp]
	ldr r3, _080C8C9C  @ =0x00001152
	add r0, r2, r3
	add r0, r7, r0
	mov r1, r9
	strb r1, [r0]
	add r3, r3, #32
	add r0, r2, r3
	add r0, r7, r0
	strb r1, [r0]
_080C8C8A:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080C8C98:
	.4byte 0x00000EE2
_080C8C9C:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080C8C00

