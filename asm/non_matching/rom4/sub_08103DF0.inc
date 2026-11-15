	THUMB_FUNC_START sub_08103DF0
sub_08103DF0: @ 0x08103DF0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _08103E5C  @ =gRam
	ldr r2, _08103E60  @ =0x00000FC2
	add r0, r5, r2
	add r3, r1, r0
	ldrb r2, [r3]
	cmp r2, #0
	bne _08103E12
	ldr r6, _08103E64  @ =0x00000F52
	add r0, r5, r6
	add r0, r1, r0
	strb r2, [r0]
	mov r0, #32
	strb r0, [r3]
_08103E12:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _08103E68  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08103E56
	ldr r2, _08103E6C  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
	ldrb r2, [r1]
	ldr r6, _08103E70  @ =0x00000F22
	add r1, r5, r6
	add r1, r4, r1
	ldr r0, _08103E74  @ =gUnknown_0817BB70
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08103E78  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _08103E7C  @ =gUnknown_0817BB74
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
_08103E56:
	pop {r4-r6}
	pop {r0}
	bx r0
_08103E5C:
	.4byte gRam
_08103E60:
	.4byte 0x00000FC2
_08103E64:
	.4byte 0x00000F52
_08103E68:
	.4byte 0x00001042
_08103E6C:
	.4byte 0x00000FB2
_08103E70:
	.4byte 0x00000F22
_08103E74:
	.4byte gUnknown_0817BB70
_08103E78:
	.4byte 0x00000F12
_08103E7C:
	.4byte gUnknown_0817BB74
	THUMB_FUNC_END sub_08103DF0

