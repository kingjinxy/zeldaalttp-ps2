	THUMB_FUNC_START sub_08100B9C
sub_08100B9C: @ 0x08100B9C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_08100DB4
	ldr r5, _08100C20  @ =gRam
	ldr r1, _08100C24  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08100C44
	ldr r2, _08100C28  @ =0x00000FB2
	add r0, r5, r2
	add r7, r4, r0
	ldrb r0, [r7]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r6, r1, #0
	sub r2, r2, #160
	add r0, r5, r2
	add r3, r4, r0
	ldr r0, _08100C2C  @ =gUnknown_0817AE19
	add r0, r1, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _08100BE2
	ldr r0, _08100C30  @ =gUnknown_0817AE17
	add r0, r1, r0
	ldrb r0, [r0]
	add r0, r2, r0
	strb r0, [r3]
_08100BE2:
	ldr r1, _08100C34  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #252
	ldr r0, _08100C38  @ =gUnknown_0817AE1B
	add r0, r6, r0
	and r1, r1, r2
	ldrb r0, [r0]
	cmp r1, r0
	bne _08100C10
	ldr r2, _08100C3C  @ =0x00000F82
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08100C40  @ =0x00000F72
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r7]
	sub r0, r0, #1
	strb r0, [r1]
_08100C10:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_08100C5C
	b _08100C56
	.byte 0x00
	.byte 0x00
_08100C20:
	.4byte gRam
_08100C24:
	.4byte 0x00000FE2
_08100C28:
	.4byte 0x00000FB2
_08100C2C:
	.4byte gUnknown_0817AE19
_08100C30:
	.4byte gUnknown_0817AE17
_08100C34:
	.4byte 0x00000ED2
_08100C38:
	.4byte gUnknown_0817AE1B
_08100C3C:
	.4byte 0x00000F82
_08100C40:
	.4byte 0x00000F72
_08100C44:
	add r0, r4, #0
	bl sub_08100C5C
	add r0, r4, #0
	bl Sprite3_MoveHoriz
	add r0, r4, #0
	bl sub_08100D60
_08100C56:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08100B9C

