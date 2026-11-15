	THUMB_FUNC_START sub_0806B0F0
sub_0806B0F0: @ 0x0806B0F0
	push {r4-r7,lr}
	bl sub_081295CC
	ldr r5, _0806B138  @ =gRam
	ldr r0, _0806B13C  @ =0x000009AD
	add r7, r5, r0
	ldrb r1, [r7]
	cmp r1, #0
	bne _0806B154
	ldr r2, _0806B140  @ =0x00000A4C
	add r0, r5, r2
	strh r1, [r0]
	ldr r0, _0806B144  @ =0x00000A3E
	add r4, r5, r0
	mov r2, #1
	neg r2, r2
	add r6, r2, #0
	mov r0, #255
	strb r0, [r4]
	ldr r0, _0806B148  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806B150
	mov r0, #57
	bl sub_080AF4FC
	ldrb r0, [r4]
	orr r0, r0, r6
	strb r0, [r4]
	ldr r0, _0806B14C  @ =0x000009AC
	add r1, r5, r0
	mov r0, #21
	strb r0, [r1]
	mov r0, #7
	b _0806B152
	.byte 0x00
	.byte 0x00
_0806B138:
	.4byte gRam
_0806B13C:
	.4byte 0x000009AD
_0806B140:
	.4byte 0x00000A4C
_0806B144:
	.4byte 0x00000A3E
_0806B148:
	.4byte gMoonPearl
_0806B14C:
	.4byte 0x000009AC
_0806B150:
	mov r0, #8
_0806B152:
	strb r0, [r7]
_0806B154:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806B0F0

	.byte 0x00
	.byte 0x00
