	THUMB_FUNC_START sub_08075B08
sub_08075B08: @ 0x08075B08
	push {r4,lr}
	bl sub_080AA748
	lsl r0, r0, #24
	cmp r0, #0
	bne _08075B34
	bl sub_080AA794
	lsl r0, r0, #24
	cmp r0, #0
	beq _08075B4C
	ldr r0, _08075B2C  @ =gRam
	ldr r1, _08075B30  @ =0x000009AD
	add r0, r0, r1
	mov r1, #4
	strb r1, [r0]
	b _08075B4C
	.byte 0x00
	.byte 0x00
_08075B2C:
	.4byte gRam
_08075B30:
	.4byte 0x000009AD
_08075B34:
	ldr r0, _08075B54  @ =gRam
	ldr r1, _08075B58  @ =0x000009AD
	add r4, r0, r1
	mov r0, #8
	strb r0, [r4]
	bl sub_080AA794
	lsl r0, r0, #24
	cmp r0, #0
	beq _08075B4C
	mov r0, #4
	strb r0, [r4]
_08075B4C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075B54:
	.4byte gRam
_08075B58:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08075B08

