	THUMB_FUNC_START sub_0806C248
sub_0806C248: @ 0x0806C248
	push {r4,r5,lr}
	bl sub_080AB70C
	bl sub_08069F08
	ldr r5, _0806C284  @ =gRam
	ldr r1, _0806C288  @ =0x0000099D
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0806C27E
	ldr r0, _0806C28C  @ =0x00000A4C
	add r1, r5, r0
	ldrh r0, [r1]
	add r0, r0, #1
	mov r4, #0
	strh r0, [r1]
	bl sub_080AA7C8
	ldr r1, _0806C290  @ =0x000016D6
	add r0, r5, r1
	strb r4, [r0]
	add r1, r1, #1
	add r0, r5, r1
	strb r4, [r0]
_0806C27E:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806C284:
	.4byte gRam
_0806C288:
	.4byte 0x0000099D
_0806C28C:
	.4byte 0x00000A4C
_0806C290:
	.4byte 0x000016D6
	THUMB_FUNC_END sub_0806C248

