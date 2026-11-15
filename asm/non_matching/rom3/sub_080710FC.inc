	THUMB_FUNC_START sub_080710FC
sub_080710FC: @ 0x080710FC
	push {r4,lr}
	bl sub_0807166C
	ldr r4, _08071134  @ =gRam
	ldr r0, _08071138  @ =0x00000B0C
	add r1, r4, r0
	mov r0, #56
	strh r0, [r1]
	ldr r0, _0807113C  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_0806E3A8
	ldr r0, _08071140  @ =0x00000B0A
	add r4, r4, r0
	ldrh r1, [r4]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0807112C
	bl sub_08089F50
_0807112C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08071134:
	.4byte gRam
_08071138:
	.4byte 0x00000B0C
_0807113C:
	.4byte 0x000009E8
_08071140:
	.4byte 0x00000B0A
	THUMB_FUNC_END sub_080710FC

