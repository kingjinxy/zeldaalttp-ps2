	THUMB_FUNC_START sub_0812BD28
sub_0812BD28: @ 0x0812BD28
	push {lr}
	ldr r1, _0812BD3C  @ =gUnknown_03000C20
	ldr r0, _0812BD40  @ =0x0000078C
	add r2, r1, r0
_0812BD30:
	ldr r0, [r1, #8]
	cmp r0, #0
	bne _0812BD44
	add r0, r1, #0
	b _0812BD4C
	.byte 0x00
	.byte 0x00
_0812BD3C:
	.4byte gUnknown_03000C20
_0812BD40:
	.4byte 0x0000078C
_0812BD44:
	add r1, r1, #84
	cmp r1, r2
	ble _0812BD30
	mov r0, #0
_0812BD4C:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812BD28

