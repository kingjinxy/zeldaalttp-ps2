	THUMB_FUNC_START sub_08074AC8
sub_08074AC8: @ 0x08074AC8
	push {r4,lr}
	bl sub_080AA748
	lsl r0, r0, #24
	cmp r0, #0
	beq _08074B00
	ldr r1, _08074B08  @ =gRam
	ldr r0, _08074B0C  @ =0x000016E8
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #191
	and r0, r0, r2
	mov r4, #0
	strb r0, [r3]
	ldr r0, _08074B10  @ =0x000009AE
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _08074B14  @ =0x000009AD
	add r0, r1, r2
	strb r4, [r0]
	add r2, r2, #109
	add r0, r1, r2
	ldrh r0, [r0]
	sub r2, r2, #110
	add r1, r1, r2
	strb r0, [r1]
_08074B00:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074B08:
	.4byte gRam
_08074B0C:
	.4byte 0x000016E8
_08074B10:
	.4byte 0x000009AE
_08074B14:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074AC8

