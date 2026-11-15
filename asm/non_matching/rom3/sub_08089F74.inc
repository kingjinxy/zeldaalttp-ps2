	THUMB_FUNC_START sub_08089F74
sub_08089F74: @ 0x08089F74
	push {lr}
	ldr r1, _08089FA4  @ =gRam
	ldr r0, _08089FA8  @ =0x00000974
	add r2, r1, r0
	mov r3, #0
	mov r0, #4
	strh r0, [r2]
	ldr r0, _08089FAC  @ =0x0000096C
	add r2, r1, r0
	strh r3, [r2]
	add r0, r0, #4
	add r1, r1, r0
	ldrh r1, [r1]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #57
	ble _08089F9A
	mov r0, #1
	strh r0, [r2]
_08089F9A:
	bl sub_08086E58
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089FA4:
	.4byte gRam
_08089FA8:
	.4byte 0x00000974
_08089FAC:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_08089F74

