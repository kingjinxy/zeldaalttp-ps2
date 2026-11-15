	THUMB_FUNC_START sub_0807F81C
sub_0807F81C: @ 0x0807F81C
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0807F860  @ =gRam
	ldr r1, _0807F864  @ =0x00000964
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r3, r0, #17
	ldr r1, _0807F868  @ =gUnknown_081677A8
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r2, r4, r5
	strh r1, [r2]
	sub r5, r5, #8
	add r0, r4, r5
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r0, #22
	bne _0807F874
	add r0, r1, #0
	add r0, r0, #124
	strh r0, [r2]
	mov r0, #0
	ldrsh r2, [r2, r0]
	ldr r1, _0807F86C  @ =0x00000AF4
	add r3, r4, r1
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r5, _0807F870  @ =0x00000C32
	b _0807F89C
	.byte 0x00
	.byte 0x00
_0807F860:
	.4byte gRam
_0807F864:
	.4byte 0x00000964
_0807F868:
	.4byte gUnknown_081677A8
_0807F86C:
	.4byte 0x00000AF4
_0807F870:
	.4byte 0x00000C32
_0807F874:
	cmp r0, #6
	bne _0807F884
	str r3, [sp]
	mov r0, #2
	mov r1, sp
	bl sub_0807E398
	b _0807F8FA
_0807F884:
	cmp r0, #20
	bne _0807F8B4
	add r0, r1, #0
	add r0, r0, #124
	strh r0, [r2]
	mov r0, #0
	ldrsh r2, [r2, r0]
	ldr r1, _0807F8AC  @ =0x00000AF6
	add r3, r4, r1
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r5, _0807F8B0  @ =0x00000C42
_0807F89C:
	add r1, r4, r5
	add r0, r0, r1
	asr r2, r2, #1
	strh r2, [r0]
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	b _0807F8FA
_0807F8AC:
	.4byte 0x00000AF6
_0807F8B0:
	.4byte 0x00000C42
_0807F8B4:
	cmp r0, #2
	bne _0807F8BE
	bl sub_0807F5FC
	b _0807F8FA
_0807F8BE:
	cmp r0, #8
	bne _0807F8EC
	bl sub_0807F5FC
	ldr r1, _0807F8E4  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #1
	ldr r2, _0807F8E8  @ =0x000018D0
	add r1, r4, r2
	add r0, r0, r1
	ldrh r1, [r0]
	mov r3, #128
	lsl r3, r3, #6
	add r2, r3, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _0807F8FA
_0807F8E4:
	.4byte 0x00000B08
_0807F8E8:
	.4byte 0x000018D0
_0807F8EC:
	cmp r0, #63
	ble _0807F8F6
	bl sub_0807EB24
	b _0807F8FA
_0807F8F6:
	bl sub_0807F5FC
_0807F8FA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807F81C

	.byte 0x00
	.byte 0x00
