	THUMB_FUNC_START sub_0806AEC4
sub_0806AEC4: @ 0x0806AEC4
	push {r4,lr}
	ldr r4, _0806AF04  @ =gRam
	ldr r0, _0806AF08  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0806AEFE
	ldr r0, _0806AF0C  @ =0x00001770
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0806AF10  @ =0x000016D5
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	bl sub_0809CE14
	bl sub_080AB73C
	bl sub_080AE620
	ldr r0, _0806AF14  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0806AEFE:
	pop {r4}
	pop {r0}
	bx r0
_0806AF04:
	.4byte gRam
_0806AF08:
	.4byte 0x000009E8
_0806AF0C:
	.4byte 0x00001770
_0806AF10:
	.4byte 0x000016D5
_0806AF14:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806AEC4

