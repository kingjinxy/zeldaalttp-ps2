	THUMB_FUNC_START sub_08080530
sub_08080530: @ 0x08080530
	push {r4,r5,lr}
	ldr r1, _0808055C  @ =gRam
	ldr r0, _08080560  @ =0x00000B42
	add r4, r1, r0
	ldrh r3, [r4]
	lsl r2, r3, #1
	ldr r5, _08080564  @ =0x00000C2A
	add r0, r1, r5
	add r2, r2, r0
	mov r0, #151
	lsl r0, r0, #4
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r2]
	add r3, r3, #1
	strh r3, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808055C:
	.4byte gRam
_08080560:
	.4byte 0x00000B42
_08080564:
	.4byte 0x00000C2A
	THUMB_FUNC_END sub_08080530

