	THUMB_FUNC_START sub_08115DB4
sub_08115DB4: @ 0x08115DB4
	push {r4,r5,lr}
	ldr r1, _08115DE8  @ =gRam
	mov r0, #188
	lsl r0, r0, #5
	add r4, r1, r0
	ldrh r2, [r4]
	ldr r5, _08115DEC  @ =0x0000096C
	add r3, r1, r5
	mov r5, #0
	ldrsh r0, [r3, r5]
	and r0, r0, r2
	cmp r0, #0
	bne _08115E2A
	ldrh r0, [r3]
	orr r2, r2, r0
	strh r2, [r4]
	ldr r0, _08115DF0  @ =0x00000968
	add r3, r1, r0
	ldrh r2, [r3]
	cmp r2, #160
	beq _08115E04
	cmp r2, #160
	bgt _08115DF4
	cmp r2, #43
	beq _08115E0A
	b _08115E20
_08115DE8:
	.4byte gRam
_08115DEC:
	.4byte 0x0000096C
_08115DF0:
	.4byte 0x00000968
_08115DF4:
	ldr r0, _08115E00  @ =0x0000FFFF
	cmp r2, r0
	bne _08115E20
	bl sub_08115FA8
	b _08115E2A
_08115E00:
	.4byte 0x0000FFFF
_08115E04:
	bl sub_08115F70
	b _08115E2A
_08115E0A:
	ldr r2, _08115E1C  @ =0x00001663
	add r0, r1, r2
	mov r1, #0
	strb r1, [r0]
	ldrh r0, [r3]
	bl sub_080AF4FC
	b _08115E2A
	.byte 0x00
	.byte 0x00
_08115E1C:
	.4byte 0x00001663
_08115E20:
	ldr r5, _08115E30  @ =0x00000968
	add r0, r1, r5
	ldrh r0, [r0]
	bl sub_080AF4FC
_08115E2A:
	pop {r4,r5}
	pop {r0}
	bx r0
_08115E30:
	.4byte 0x00000968
	THUMB_FUNC_END sub_08115DB4

