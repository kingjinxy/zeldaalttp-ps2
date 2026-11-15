	THUMB_FUNC_START sub_081141EC
sub_081141EC: @ 0x081141EC
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _0811422C  @ =gRam
	ldr r1, _08114230  @ =0x00001776
	add r0, r4, r1
	mov r6, #0
	strb r6, [r0]
	mov r0, #82
	bl sub_080A1588
	ldr r2, _08114234  @ =0x000016B5
	add r0, r4, r2
	mov r1, #1
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08114238  @ =0x00001770
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _0811423C  @ =0x00000F52
	add r4, r4, r2
	add r5, r5, r4
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811422C:
	.4byte gRam
_08114230:
	.4byte 0x00001776
_08114234:
	.4byte 0x000016B5
_08114238:
	.4byte 0x00001770
_0811423C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081141EC

