	THUMB_FUNC_START sub_08122658
sub_08122658: @ 0x08122658
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08122690  @ =gRam
	ldr r2, _08122694  @ =0x00000E15
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #62
	strb r2, [r1]
	ldr r2, _08122698  @ =0x00000DED
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #10
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _0812269C  @ =0x00000E01
	add r3, r3, r1
	add r3, r0, r3
	strb r4, [r3]
	bl sub_081224B4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08122690:
	.4byte gRam
_08122694:
	.4byte 0x00000E15
_08122698:
	.4byte 0x00000DED
_0812269C:
	.4byte 0x00000E01
	THUMB_FUNC_END sub_08122658

