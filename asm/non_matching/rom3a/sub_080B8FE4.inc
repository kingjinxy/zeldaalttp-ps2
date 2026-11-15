	THUMB_FUNC_START sub_080B8FE4
sub_080B8FE4: @ 0x080B8FE4
	push {r4,r5,lr}
	ldr r3, _080B9034  @ =gRam
	ldr r0, _080B9038  @ =0x00000A02
	add r4, r3, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080B902A
	ldr r2, _080B903C  @ =0x00000C9E
	add r0, r3, r2
	mov r2, #0
	strh r1, [r0]
	ldr r5, _080B9040  @ =0x00000CFA
	add r0, r3, r5
	strh r1, [r0]
	sub r5, r5, #2
	add r0, r3, r5
	strh r1, [r0]
	ldr r0, _080B9044  @ =0x00000CFC
	add r1, r3, r0
	mov r0, #31
	strh r0, [r1]
	ldr r5, _080B9048  @ =0x000009AD
	add r1, r3, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #192
	strb r0, [r4]
	ldr r1, _080B904C  @ =0x00000A04
	add r0, r3, r1
	strb r2, [r0]
_080B902A:
	bl sub_08126CE0
	pop {r4,r5}
	pop {r0}
	bx r0
_080B9034:
	.4byte gRam
_080B9038:
	.4byte 0x00000A02
_080B903C:
	.4byte 0x00000C9E
_080B9040:
	.4byte 0x00000CFA
_080B9044:
	.4byte 0x00000CFC
_080B9048:
	.4byte 0x000009AD
_080B904C:
	.4byte 0x00000A04
	THUMB_FUNC_END sub_080B8FE4

