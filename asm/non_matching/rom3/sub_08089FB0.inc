	THUMB_FUNC_START sub_08089FB0
sub_08089FB0: @ 0x08089FB0
	push {r4,r5,lr}
	ldr r0, _08089FE0  @ =gRam
	ldr r1, _08089FE4  @ =0x00000AD2
	add r2, r0, r1
	ldrh r1, [r2]
	mov r3, #178
	lsl r3, r3, #4
	add r0, r0, r3
	ldrh r3, [r0]
	cmp r1, r3
	beq _08089FD8
	add r5, r0, #0
	add r4, r2, #0
_08089FCA:
	add r0, r1, #0
	bl sub_080838C0
	ldrh r1, [r4]
	ldrh r0, [r5]
	cmp r1, r0
	bne _08089FCA
_08089FD8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089FE0:
	.4byte gRam
_08089FE4:
	.4byte 0x00000AD2
	THUMB_FUNC_END sub_08089FB0

