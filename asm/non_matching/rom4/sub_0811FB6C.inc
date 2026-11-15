	THUMB_FUNC_START sub_0811FB6C
sub_0811FB6C: @ 0x0811FB6C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080BF774
	ldr r5, _0811FBE8  @ =gRam
	ldr r1, _0811FBEC  @ =0x00000DD9
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0811FBF0  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	ldr r6, _0811FBF4  @ =0x00000DC5
	add r0, r5, r6
	add r0, r4, r0
	ldrb r2, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r3, r5, r0
	strb r2, [r3]
	mov r0, #0
	ldrsb r0, [r3, r0]
	mov r1, #240
	and r0, r0, r1
	ldr r1, _0811FBF8  @ =gUnknown_0200688C
	ldrb r6, [r1]
	cmp r0, r6
	beq _0811FBAA
	strb r2, [r1]
_0811FBAA:
	ldr r1, _0811FBFC  @ =0x00001855
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldrh r0, [r3]
	ldr r2, _0811FC00  @ =0x0000DFFF
	cmp r0, r2
	bhi _0811FBDA
	ldr r1, _0811FC04  @ =gUnknown_0200688A
	ldrh r0, [r1]
	cmp r0, r2
	bhi _0811FBD0
	add r1, r0, #0
	mov r2, #0
	ldrsh r0, [r3, r2]
	cmp r1, r0
	bgt _0811FBDA
_0811FBD0:
	ldr r6, _0811FC08  @ =0x00000E1F
	add r0, r5, r6
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
_0811FBDA:
	add r0, r4, #0
	bl sub_0811FF20
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811FBE8:
	.4byte gRam
_0811FBEC:
	.4byte 0x00000DD9
_0811FBF0:
	.4byte 0x00000961
_0811FBF4:
	.4byte 0x00000DC5
_0811FBF8:
	.4byte gUnknown_0200688C
_0811FBFC:
	.4byte 0x00001855
_0811FC00:
	.4byte 0x0000DFFF
_0811FC04:
	.4byte gUnknown_0200688A
_0811FC08:
	.4byte 0x00000E1F
	THUMB_FUNC_END sub_0811FB6C

