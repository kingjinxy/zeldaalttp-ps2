	THUMB_FUNC_START sub_0806CFC0
sub_0806CFC0: @ 0x0806CFC0
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _0806D010  @ =gRam
	mov r1, #177
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	mov r8, r1
	mov r1, r8
	strh r1, [r0]
	ldr r0, _0806D014  @ =0x00000C02
	add r1, r4, r0
	mov r0, #7
	strh r0, [r1]
	ldr r1, _0806D018  @ =0x000009AD
	add r5, r4, r1
	ldrb r6, [r5]
	bl sub_080810AC
	strb r6, [r5]
	ldr r0, _0806D01C  @ =0x00000CF8
	add r1, r4, r0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0806D020  @ =0x00000CFC
	add r0, r4, r1
	mov r1, r8
	strh r1, [r0]
	ldr r0, _0806D024  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D010:
	.4byte gRam
_0806D014:
	.4byte 0x00000C02
_0806D018:
	.4byte 0x000009AD
_0806D01C:
	.4byte 0x00000CF8
_0806D020:
	.4byte 0x00000CFC
_0806D024:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806CFC0

