	THUMB_FUNC_START sub_080D5BC8
sub_080D5BC8: @ 0x080D5BC8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080D5954
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D5CD2
	ldr r7, _080D5C84  @ =gRam
	ldr r1, _080D5C88  @ =0x00000F62
	add r0, r7, r1
	add r2, r5, r0
	ldrb r0, [r2]
	mov r4, #1
	add r1, r4, #0
	and r1, r1, r0
	ldr r3, _080D5C8C  @ =0x00000F22
	add r0, r7, r3
	add r6, r5, r0
	ldr r0, _080D5C90  @ =gUnknown_081751C4
	mov r12, r0
	add r0, r1, r0
	ldrb r0, [r0]
	ldrb r3, [r6]
	add r0, r0, r3
	strb r0, [r6]
	ldr r3, _080D5C94  @ =gUnknown_081751C6
	mov r8, r3
	add r1, r1, r8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080D5C1E
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080D5C1E:
	ldr r1, _080D5C98  @ =0x00000F72
	add r0, r7, r1
	add r2, r5, r0
	ldrb r0, [r2]
	add r1, r4, #0
	and r1, r1, r0
	ldr r3, _080D5C9C  @ =0x00000F12
	add r0, r7, r3
	add r4, r5, r0
	add r12, r12, r1
	mov r3, r12
	ldrb r0, [r3]
	ldrb r3, [r4]
	add r0, r0, r3
	strb r0, [r4]
	add r1, r1, r8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080D5C4E
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080D5C4E:
	add r0, r5, #0
	bl Sprite3_Move
	ldrb r0, [r6]
	cmp r0, #0
	beq _080D5CCC
	ldrb r0, [r4]
	cmp r0, #0
	beq _080D5CCC
	bl sub_080CAF64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D5CCC
	ldr r1, _080D5CA0  @ =0x00000FF2
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #21
	strb r1, [r0]
	ldrb r1, [r6]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D5CA4
	mov r0, #16
	b _080D5CA6
	.byte 0x00
	.byte 0x00
_080D5C84:
	.4byte gRam
_080D5C88:
	.4byte 0x00000F62
_080D5C8C:
	.4byte 0x00000F22
_080D5C90:
	.4byte gUnknown_081751C4
_080D5C94:
	.4byte gUnknown_081751C6
_080D5C98:
	.4byte 0x00000F72
_080D5C9C:
	.4byte 0x00000F12
_080D5CA0:
	.4byte 0x00000FF2
_080D5CA4:
	mov r0, #240
_080D5CA6:
	strb r0, [r6]
	ldr r0, _080D5CC0  @ =gRam
	ldr r3, _080D5CC4  @ =0x00000F12
	add r0, r0, r3
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D5CC8
	mov r0, #16
	b _080D5CCA
	.byte 0x00
	.byte 0x00
_080D5CC0:
	.4byte gRam
_080D5CC4:
	.4byte 0x00000F12
_080D5CC8:
	mov r0, #240
_080D5CCA:
	strb r0, [r2]
_080D5CCC:
	add r0, r5, #0
	bl sub_080C4F98
_080D5CD2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D5BC8

