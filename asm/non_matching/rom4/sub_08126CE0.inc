	THUMB_FUNC_START sub_08126CE0
sub_08126CE0: @ 0x08126CE0
	push {r4-r6,lr}
	ldr r4, _08126D44  @ =gUnknown_03000050
	ldrh r0, [r4, #8]
	add r0, r0, #1
	strh r0, [r4, #8]
	bl sub_08125874
	ldr r2, _08126D48  @ =gRam
	ldr r0, _08126D4C  @ =0x00000A38
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
	ldr r6, _08126D50  @ =0x00001B08
	add r5, r2, r6
	ldrb r3, [r5]
	cmp r3, #0
	bne _08126D3C
	ldr r0, _08126D54  @ =0x00001B10
	add r1, r2, r0
	mov r6, #219
	lsl r6, r6, #1
	add r0, r6, #0
	ldrh r6, [r1]
	add r0, r0, r6
	strh r0, [r1]
	ldr r0, _08126D58  @ =0x00001B0E
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #146
	strh r0, [r1]
	mov r0, #1
	strb r0, [r5]
	strh r3, [r4, #4]
	mov r0, #112
	strh r0, [r4, #6]
	mov r0, #7
_08126D28:
	lsl r4, r0, #24
	lsr r0, r4, #24
	bl sub_08126E10
	mov r6, #255
	lsl r6, r6, #24
	add r4, r4, r6
	lsr r0, r4, #24
	cmp r4, #0
	bge _08126D28
_08126D3C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126D44:
	.4byte gUnknown_03000050
_08126D48:
	.4byte gRam
_08126D4C:
	.4byte 0x00000A38
_08126D50:
	.4byte 0x00001B08
_08126D54:
	.4byte 0x00001B10
_08126D58:
	.4byte 0x00001B0E
	THUMB_FUNC_END sub_08126CE0

