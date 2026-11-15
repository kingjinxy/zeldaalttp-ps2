	THUMB_FUNC_START sub_08126EE4
sub_08126EE4: @ 0x08126EE4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _08126F04  @ =gRam
	ldr r1, _08126F08  @ =0x0000096C
	add r0, r0, r1
	mov r1, #2
	strh r1, [r0]
	cmp r2, #2
	bne _08126F10
	ldr r1, _08126F0C  @ =gUnknown_081807E0
	mov r0, #2
	mov r2, #1
	bl sub_08126420
	b _08126F1A
_08126F04:
	.4byte gRam
_08126F08:
	.4byte 0x0000096C
_08126F0C:
	.4byte gUnknown_081807E0
_08126F10:
	ldr r1, _08126F20  @ =gUnknown_081807D0
	add r0, r2, #0
	mov r2, #1
	bl sub_08126420
_08126F1A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126F20:
	.4byte gUnknown_081807D0
	THUMB_FUNC_END sub_08126EE4

