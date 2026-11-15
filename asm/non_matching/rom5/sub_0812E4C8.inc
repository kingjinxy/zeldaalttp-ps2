	THUMB_FUNC_START sub_0812E4C8
sub_0812E4C8: @ 0x0812E4C8
	push {r4,r5,lr}
	bl sub_08126D5C
	bl sub_0812E0A0
	ldr r5, _0812E50C  @ =gRam
	ldr r0, _0812E510  @ =0x000009EC
	add r4, r5, r0
	ldrb r1, [r4]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0812E4E6
	bl sub_08069F08
_0812E4E6:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r1, _0812E514  @ =0x0000099D
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0812E504
	bl sub_080681B0
	mov r0, #253
	bl SoftReset
_0812E504:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812E50C:
	.4byte gRam
_0812E510:
	.4byte 0x000009EC
_0812E514:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_0812E4C8

