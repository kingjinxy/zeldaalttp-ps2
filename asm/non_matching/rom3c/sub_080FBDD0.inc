	THUMB_FUNC_START sub_080FBDD0
sub_080FBDD0: @ 0x080FBDD0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FBE54  @ =gRam
	ldr r1, _080FBE58  @ =0x00000FC2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #1
	beq _080FBE74
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080FBE7E
	ldr r2, _080FBE5C  @ =0x00000996
	add r0, r5, r2
	ldrb r0, [r0]
	mov r1, #7
	and r1, r1, r0
	ldr r2, _080FBE60  @ =0x00000FD2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080FBE1E
	ldr r1, _080FBE64  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #64
	eor r1, r1, r2
	strb r1, [r0]
_080FBE1E:
	add r0, r4, #0
	bl sub_080C99DC
	ldr r2, _080FBE68  @ =0x00001152
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	ldr r1, _080FBE6C  @ =0x00001142
	add r0, r5, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FBE7E
	strb r6, [r3]
	mov r0, #12
	strb r0, [r7]
	mov r0, #24
	strb r0, [r2]
	ldr r2, _080FBE70  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #6
	b _080FBE7C
_080FBE54:
	.4byte gRam
_080FBE58:
	.4byte 0x00000FC2
_080FBE5C:
	.4byte 0x00000996
_080FBE60:
	.4byte 0x00000FD2
_080FBE64:
	.4byte 0x00001122
_080FBE68:
	.4byte 0x00001152
_080FBE6C:
	.4byte 0x00001142
_080FBE70:
	.4byte 0x00000F92
_080FBE74:
	ldr r1, _080FBE84  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
_080FBE7C:
	strb r1, [r0]
_080FBE7E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080FBE84:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FBDD0

