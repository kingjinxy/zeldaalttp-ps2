	THUMB_FUNC_START sub_08114184
sub_08114184: @ 0x08114184
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081141AC  @ =gRam
	ldr r1, _081141B0  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _081141BC
	ldr r1, _081141B4  @ =0x000001AD
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r1, _081141B8  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	b _081141DE
_081141AC:
	.4byte gRam
_081141B0:
	.4byte 0x00001AE2
_081141B4:
	.4byte 0x000001AD
_081141B8:
	.4byte 0x00000F52
_081141BC:
	mov r1, #215
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _081141E4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081141E8  @ =0x00001770
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_081141DE:
	pop {r4,r5}
	pop {r0}
	bx r0
_081141E4:
	.4byte 0x00000F52
_081141E8:
	.4byte 0x00001770
	THUMB_FUNC_END sub_08114184

