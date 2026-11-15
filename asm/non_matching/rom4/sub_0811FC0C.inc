	THUMB_FUNC_START sub_0811FC0C
sub_0811FC0C: @ 0x0811FC0C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0811FC4C  @ =gRam
	ldr r2, _0811FC50  @ =0x00001855
	add r0, r1, r2
	add r2, r4, r0
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r3, r1, #0
	cmp r0, #0
	blt _0811FC60
	ldr r1, _0811FC54  @ =0x00001832
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811FC58
	mov r0, #3
	strb r0, [r1]
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811FC58
	mov r0, #9
	strb r0, [r1]
	b _0811FC60
_0811FC4C:
	.4byte gRam
_0811FC50:
	.4byte 0x00001855
_0811FC54:
	.4byte 0x00001832
_0811FC58:
	add r0, r4, #0
	bl sub_0811FF20
	b _0811FCBC
_0811FC60:
	ldr r2, _0811FCC4  @ =0x00001832
	add r1, r3, r2
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r5, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811FCB6
	ldr r1, _0811FCC8  @ =0x00000E1F
	add r0, r3, r1
	add r0, r4, r0
	mov r2, #2
	strb r2, [r0]
	sub r1, r1, #50
	add r0, r3, r1
	add r0, r4, r0
	strb r5, [r0]
	add r1, r1, #10
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _0811FCCC  @ =0x00000E29
	add r0, r3, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r1, _0811FCD0  @ =0x00001844
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _0811FCD4  @ =0x000017A6
	add r0, r3, r2
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0811FCB6
	add r0, r4, #0
	bl sub_0811F980
_0811FCB6:
	add r0, r4, #0
	bl sub_08120028
_0811FCBC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811FCC4:
	.4byte 0x00001832
_0811FCC8:
	.4byte 0x00000E1F
_0811FCCC:
	.4byte 0x00000E29
_0811FCD0:
	.4byte 0x00001844
_0811FCD4:
	.4byte 0x000017A6
	THUMB_FUNC_END sub_0811FC0C

