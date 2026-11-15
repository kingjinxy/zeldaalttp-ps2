	THUMB_FUNC_START sub_08110B60
sub_08110B60: @ 0x08110B60
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08110BBC  @ =gRam
	ldr r2, _08110BC0  @ =0x00000F52
	add r0, r1, r2
	add r6, r3, r0
	mov r0, #1
	strb r0, [r6]
	ldr r7, _08110BC4  @ =0x00001702
	add r0, r1, r7
	ldrb r5, [r0]
	add r4, r1, #0
	cmp r5, #0
	bne _08110BA2
	ldr r0, _08110BC8  @ =0x00000545
	add r2, r4, r0
	ldr r1, _08110BCC  @ =gUnknown_0817D4B8
	ldr r7, _08110BD0  @ =0x00000FB2
	add r0, r4, r7
	add r3, r3, r0
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08110BA2
	strb r5, [r6]
	ldrb r0, [r3]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r3]
_08110BA2:
	mov r0, #184
	lsl r0, r0, #5
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r2, _08110BD4  @ =0x00001783
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08110BBC:
	.4byte gRam
_08110BC0:
	.4byte 0x00000F52
_08110BC4:
	.4byte 0x00001702
_08110BC8:
	.4byte 0x00000545
_08110BCC:
	.4byte gUnknown_0817D4B8
_08110BD0:
	.4byte 0x00000FB2
_08110BD4:
	.4byte 0x00001783
	THUMB_FUNC_END sub_08110B60

