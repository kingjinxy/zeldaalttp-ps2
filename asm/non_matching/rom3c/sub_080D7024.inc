	THUMB_FUNC_START sub_080D7024
sub_080D7024: @ 0x080D7024
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080D7054  @ =gRam
	ldr r2, _080D7058  @ =0x00000FC2
	add r0, r1, r2
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080D7064
	ldr r5, _080D705C  @ =0x00000F92
	add r1, r1, r5
	add r1, r4, r1
	ldr r2, _080D7060  @ =gUnknown_081755C6
	lsr r0, r0, #28
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080D7070
_080D7054:
	.4byte gRam
_080D7058:
	.4byte 0x00000FC2
_080D705C:
	.4byte 0x00000F92
_080D7060:
	.4byte gUnknown_081755C6
_080D7064:
	ldr r5, _080D7078  @ =0x00000F52
	add r0, r1, r5
	add r0, r4, r0
	strb r2, [r0]
	mov r0, #223
	strb r0, [r3]
_080D7070:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D7078:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D7024

