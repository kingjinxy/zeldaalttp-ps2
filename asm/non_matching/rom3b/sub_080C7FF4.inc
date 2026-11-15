	THUMB_FUNC_START sub_080C7FF4
sub_080C7FF4: @ 0x080C7FF4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _080C8048  @ =gRam
	ldr r1, _080C804C  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r6, #1
	add r0, r6, #0
	and r0, r0, r1
	ldr r2, _080C8050  @ =0x000009AD
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r2, _080C8054  @ =0x00001605
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080C8086
	ldr r1, _080C8058  @ =0x00000D74
	add r0, r4, r1
	add r1, r3, r0
	ldrb r0, [r1]
	add r2, r0, #0
	cmp r2, #0
	bne _080C8064
	ldr r1, _080C805C  @ =0x00000FA2
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _080C8060  @ =0x00001112
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	b _080C8086
_080C8048:
	.4byte gRam
_080C804C:
	.4byte 0x00000996
_080C8050:
	.4byte 0x000009AD
_080C8054:
	.4byte 0x00001605
_080C8058:
	.4byte 0x00000D74
_080C805C:
	.4byte 0x00000FA2
_080C8060:
	.4byte 0x00001112
_080C8064:
	sub r2, r0, #1
	strb r2, [r1]
	lsl r0, r2, #24
	lsr r0, r0, #24
	cmp r0, #55
	bhi _080C8086
	ldr r1, _080C808C  @ =0x00000F22
	add r0, r4, r1
	add r0, r5, r0
	ldr r1, _080C8090  @ =gUnknown_0817247F
	and r2, r2, r6
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r5, #0
	bl Sprite3_MoveHoriz
_080C8086:
	pop {r4-r6}
	pop {r0}
	bx r0
_080C808C:
	.4byte 0x00000F22
_080C8090:
	.4byte gUnknown_0817247F
	THUMB_FUNC_END sub_080C7FF4

