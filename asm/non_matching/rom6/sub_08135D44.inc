	THUMB_FUNC_START sub_08135D44
sub_08135D44: @ 0x08135D44
	push {r4-r6,lr}
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _08135DA4  @ =0x04000208
	ldrh r3, [r4]
	add r6, r3, #0
	mov r3, #0
	strh r3, [r4]
	ldr r5, _08135DA8  @ =0x04000204
	ldrh r4, [r5]
	ldr r3, _08135DAC  @ =0x0000F8FF
	and r4, r4, r3
	ldr r3, _08135DB0  @ =gUnknown_03000020
	ldr r3, [r3]
	ldrh r3, [r3, #6]
	orr r4, r4, r3
	strh r4, [r5]
	ldr r3, _08135DB4  @ =0x040000D4
	str r0, [r3]
	ldr r0, _08135DB8  @ =0x040000D8
	str r1, [r0]
	ldr r1, _08135DBC  @ =0x040000DC
	mov r0, #128
	lsl r0, r0, #24
	orr r2, r2, r0
	str r2, [r1]
	add r1, r1, #2
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	ldrh r1, [r1]
	and r0, r0, r1
	cmp r0, #0
	beq _08135D98
	ldr r2, _08135DC0  @ =0x040000DE
	mov r0, #128
	lsl r0, r0, #8
	add r1, r0, #0
_08135D90:
	ldrh r0, [r2]
	and r0, r0, r1
	cmp r0, #0
	bne _08135D90
_08135D98:
	ldr r0, _08135DA4  @ =0x04000208
	strh r6, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08135DA4:
	.4byte 0x04000208
_08135DA8:
	.4byte 0x04000204
_08135DAC:
	.4byte 0x0000F8FF
_08135DB0:
	.4byte gUnknown_03000020
_08135DB4:
	.4byte 0x040000D4
_08135DB8:
	.4byte 0x040000D8
_08135DBC:
	.4byte 0x040000DC
_08135DC0:
	.4byte 0x040000DE
	THUMB_FUNC_END sub_08135D44

