	THUMB_FUNC_START sub_08126F6C
sub_08126F6C: @ 0x08126F6C
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _08126F9C  @ =gRam
	ldr r1, _08126FA0  @ =0x0000096C
	add r2, r0, r1
	mov r1, #14
	strh r1, [r2]
	ldr r1, _08126FA4  @ =0x0000098E
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #1
	bgt _08126FAC
	cmp r0, #0
	blt _08126FAC
	ldr r1, _08126FA8  @ =gUnknown_081807F0
	add r0, r3, #0
	mov r2, #0
	bl sub_08126420
	b _08126FB6
	.byte 0x00
	.byte 0x00
_08126F9C:
	.4byte gRam
_08126FA0:
	.4byte 0x0000096C
_08126FA4:
	.4byte 0x0000098E
_08126FA8:
	.4byte gUnknown_081807F0
_08126FAC:
	ldr r1, _08126FBC  @ =gUnknown_08180860
	add r0, r3, #0
	mov r2, #0
	bl sub_08126420
_08126FB6:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126FBC:
	.4byte gUnknown_08180860
	THUMB_FUNC_END sub_08126F6C

